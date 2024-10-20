#include "HeaderFiles/Array&Vector.h"
#include <iostream>

int main() {
    arrayAndVector demo;

    std::cout << "\n1) Dangling Array Access------------------------\n";
    demo.danglingArray();

    std::cout << "\n2) Vector Memory Growth------------------------\n";
    demo.vectorMemoryGrowth();

    std::cout << "\n3) C-String Without Null Terminator------------------------\n";
    demo.nullTerminatedStringIssue();

    std::cout << "\n4) std::string After Move------------------------\n";
    demo.stringViewAfterMove();

    return 0;
}
