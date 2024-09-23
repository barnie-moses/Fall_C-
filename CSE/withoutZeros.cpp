#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<cassert>

bool ContainsZero(int number){
    std::string num_str = std::to_string(number);
    return num_str.find('0') !=std::string::npos;
}
void WithoutZero(std::vector<int> & num){
    auto newEnd = std::remove_if(num.begin(), num.end(), ContainsZero);
    num.erase(newEnd, num.end());
}

int main(){
    std::vector<int> number = {1,10,101,234,4005,123,-105,732};
    std::vector<int> number2 = {1,234,123,732};
    assert(number == number2);
}