#include "..\HeaderFiles\InputOutput.h"
#include <iostream>
#include <iomanip>
#include <limits>

void InputOutput::handleInputFailure() 
{
    int age;
    std::cout << "Enter a Number (integer): ";
    std::cin >> age;

    if (std::cin.fail()) {
        std::cout << "Oops! That wasn't an integer.\n";
        std::cin.clear();  
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

std::string InputOutput::getName() 
{
    std::string name;
    std::cout << "Enter your full name: ";
    std::cin.ignore();
    std::getline(std::cin, name);
    return name;
}

void InputOutput::bufferFlush() 
{
    std::cout << "This is flushed immediately." << std::flush;
    std::cout << " But this is not.\n";
}

void InputOutput::printFormattedName(const std::string& name) 
{
    std::cout << std::setw(10) << std::setfill('*') << "Name: " << name << "\n";
}

void InputOutput::handleFloatingPointInput() 
{
    double height;
    std::cout << "Enter your height (in cm): ";
    std::cin >> height;

    if (std::cin.fail()) {
        std::cout << "Invalid height! Expected a number.\n";
    }
    else {
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "Your height is: " << height << " cm\n";
    }
}
