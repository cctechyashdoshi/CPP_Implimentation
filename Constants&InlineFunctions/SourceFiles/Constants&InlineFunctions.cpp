#include <iostream>
#include "../HeaderFiles/ConstantsAndInlineFunctions.h"
int main() {

    Shape shape(50.0);

    std::cout << "Initial area: " << shape.getArea() << std::endl;

    shape.setArea(100.0);

    std::cout << "Modified area: " << shape.getArea() << std::endl;

    return 0;
}