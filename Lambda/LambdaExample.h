#pragma once
// LambdaDemo.h

#include <vector>
#include <functional>

class LambdaDemo {
public:
    void basicCaptureDemo();      
    void mutableLambdaDemo();  
    std::function<int(int)> curriedLambda(int x); 
    void lambdaWithSTL();      
};

