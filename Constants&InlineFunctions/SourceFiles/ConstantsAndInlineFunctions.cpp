#include "../HeaderFiles/ConstantsAndInlineFunctions.h"
#include <iostream>

Shape::Shape(double initialArea): areaPtr(new double(initialArea)) 
{
}

Shape::~Shape() 
{
    delete areaPtr;
}

void Shape::setArea(double newArea) 
{
    *areaPtr = newArea;
}

double Shape::getArea() const 
{
    return *areaPtr;
}