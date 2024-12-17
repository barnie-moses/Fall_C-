include "ForgetfulVector.hpp"

#include <vector>

void ForgetfulVector::push_back(int value) {
    auto insert_return = seen.insert(value);
    if (!insert_return.second) { 
        // value not inserted because already present
        data.push_back(value);
    }
}

int & ForgetfulVector::at(int index) {
    return data.at(index);
}

int ForgetfulVector::size() {
    return static_cast<int>(data.size());
}