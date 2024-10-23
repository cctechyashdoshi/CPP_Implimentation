#pragma once

class Shape {
public:
    // Constructor
    Shape(double initialArea);

    // Destructor
    ~Shape();

    // Function to set the area
    void setArea(double newArea);

    // Function to get the area
    double getArea() const;

private:
    // Constant pointer to a non-constant variable
    double* const areaPtr;
};
