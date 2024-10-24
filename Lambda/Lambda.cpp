#include "LambdaExample.h"
#include <iostream>

int main() {
    LambdaDemo demo;

    std::cout << "\n=== Basic Lambda Capture Demo ===\n";
    demo.basicCaptureDemo();

    std::cout << "\n=== Mutable Lambda Demo ===\n";
    demo.mutableLambdaDemo();

    std::cout << "\n=== Curried Lambda Demo ===\n";
    auto addFive = demo.curriedLambda(5);  // Creates a lambda that adds 5
    std::cout << "5 + 3 = " << addFive(3) << "\n";

    std::cout << "\n=== Lambda with STL Algorithm Demo ===\n";
    demo.lambdaWithSTL();

    return 0;
}
