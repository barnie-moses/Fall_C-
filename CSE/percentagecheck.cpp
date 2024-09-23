#include<cmath>
#include<vector>
#include<stdexcept>
#include<iostream>

bool percentage(double num){
     return (num >= 0.00 && num <= 100.00);
}

void PercentageCheck(std::vector<double> const number){
    for (double num: number){
        if (percentage(num)== false){
            throw std::out_of_range{"Invalid!"};
        }
    }
}

int main(){
    std::vector<double> const numbers ={0.0, 100.0, 45.334343, 120};
    try{
        PercentageCheck(numbers);
    } catch (std::out_of_range const & e){
        std::cout<<e.what()<<std::endl;
    }
}