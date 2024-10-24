#include "LambdaExample.h"
#include <iostream>
#include <algorithm> 

void LambdaDemo::basicCaptureDemo() {
    int x = 5, y = 10;

    auto captureByValue = [=]() {  
        std::cout << "Inside captureByValue: x = " << x << ", y = " << y << "\n";
        };

    auto captureByReference = [&]() { 
        x += 1;
        y += 2;
        std::cout << "Inside captureByReference: x = " << x << ", y = " << y << "\n";
        };

    std::cout << "Before Lambdas: x = " << x << ", y = " << y << "\n";
    captureByValue();
    captureByReference();
    std::cout << "After Lambdas: x = " << x << ", y = " << y << "\n";
}

void LambdaDemo::mutableLambdaDemo() {
    int counter = 0;

    auto increment = [counter]() mutable {
        ++counter;
        std::cout << "Inside mutable lambda: counter = " << counter << "\n";
        };

    increment();
    increment();  
    std::cout << "Outside lambda: counter = " << counter << "\n";
}

std::function<int(int)> LambdaDemo::curriedLambda(int x) {
    return [x](int y) { return x + y; }; 
}

void LambdaDemo::lambdaWithSTL() {
    std::vector<int> nums = { 5, 2, 9, 1, 3 };

    bool descending = true;

    std::sort(nums.begin(), nums.end(), [descending](int a, int b) {
        return descending ? a > b : a < b;
        });

    std::cout << "Sorted Array (Descending): ";
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << "\n";
}
