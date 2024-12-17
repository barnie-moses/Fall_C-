#pragma once

class Rectangle {
private:
    double height;
    double width;

public:
    // Constructor
    Rectangle(double h, double w);

    // Getters for height and width
    double getHeight() const;
    double getWidth() const;

    // Method to check if the rectangle can fit inside another rectangle
    bool canFit(const Rectangle& other) const;
};


#include "Rectangle.hpp"

// Constructor to initialize height and width
Rectangle::Rectangle(double h, double w) : height(h), width(w) {}

// Getter for height
double Rectangle::getHeight() const {
    return height;
}

// Getter for width
double Rectangle::getWidth() const {
    return width;
}

// Method to check if this rectangle can fit inside another rectangle
bool Rectangle::canFit(const Rectangle& other) const {
    // Check both orientations
    return (height <= other.getHeight() && width <= other.getWidth()) ||
           (width <= other.getHeight() && height <= other.getWidth());
}


#include <iostream>
#include "Rectangle.hpp"

int main() {
    // Create two rectangle objects
    Rectangle rect1(5.0, 3.0);
    Rectangle rect2(4.0, 6.0);
    
    // Check if rect1 can fit inside rect2
    if (rect1.canFit(rect2)) {
        std::cout << "Rectangle 1 can fit inside Rectangle 2." << std::endl;
    } else {
        std::cout << "Rectangle 1 cannot fit inside Rectangle 2." << std::endl;
    }

    // Check if rect2 can fit inside rect1
    if (rect2.canFit(rect1)) {
        std::cout << "Rectangle 2 can fit inside Rectangle 1." << std::endl;
    } else {
        std::cout << "Rectangle 2 cannot fit inside Rectangle 1." << std::endl;
    }

    return 0;
}
