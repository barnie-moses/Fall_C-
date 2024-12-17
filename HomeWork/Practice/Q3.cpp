// MyClass.hpp
#pragma once

#include <vector>

class MyClass {
public:
    // Constructor
    MyClass(); // Empty constructor
    MyClass(const std::initializer_list<int>& init_list); // Constructor with initializer list

    // Method to push back an element
    void push_back(int value);
    
    // Method to get the size of the vector
    int size() const;

private:
    std::vector<int> data; // Vector to hold data
};


// MyClass.cpp
#include "MyClass.hpp"

// Empty constructor
MyClass::MyClass() {
    // Optionally initialize data or leave it empty
}

// Constructor that initializes the vector with the provided initializer list
MyClass::MyClass(const std::initializer_list<int>& init_list) {
    for (int value : init_list) {
        data.push_back(value); // Push each value into the vector
    }
}

// Method to add an element to the vector
void MyClass::push_back(int value) {
    data.push_back(value);
}

// Method to get the size of the vector
int MyClass::size() const {
    return static_cast<int>(data.size());
}


#include <iostream>
#include "MyClass.hpp"

int main() {
    MyClass myClass1; // Using the empty constructor
    myClass1.push_back(10);
    myClass1.push_back(20);
    
    std::cout << "Size of myClass1: " << myClass1.size() << std::endl; // Output: 2

    MyClass myClass2 = {30, 40, 50}; // Using the initializer list constructor
    std::cout << "Size of myClass2: " << myClass2.size() << std::endl; // Output: 3

    return 0;
}
