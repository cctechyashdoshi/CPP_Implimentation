#include "HeaderFiles\InputOutput.h"
#include <iostream>

int main() {
    InputOutput demo;

    demo.handleInputFailure();

    std::string name = demo.getName();
    std::cout << "Hello, " << name << "!\n";
    demo.printFormattedName(name);

    demo.bufferFlush();

    demo.handleFloatingPointInput();

    return 0;
}
