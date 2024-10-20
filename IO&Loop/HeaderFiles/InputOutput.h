#pragma once
#include <string>

class InputOutput
{
public:
    // Public member functions
    void handleInputFailure();
    std::string getName();
    void bufferFlush();
    void printFormattedName(const std::string& name);
    void handleFloatingPointInput();
};

