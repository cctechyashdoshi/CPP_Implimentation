#include "SR.h"
#include <iostream>

int main() {
    SmartPointerDemo demo;

    std::cout << "\n=== Unique Pointer Demo ===\n";
    demo.uniquePointerDemo();

    std::cout << "\n=== Shared Pointer Demo ===\n";
    demo.sharedPointerDemo();

    std::cout << "\n=== Weak Pointer Demo ===\n";
    demo.weakPointerDemo();

    return 0;
}
