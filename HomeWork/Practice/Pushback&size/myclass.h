#pragma once
#include<vector>

class Myclass {
    private:
        std::vector<int> data;
    public:
    // Empty constructor
    Myclass();
    Myclass(const std::initializer_list<int> & init_inputs); // constructor with initializer list

    // Methods
    void push_back(int value);
    int size() const;
};