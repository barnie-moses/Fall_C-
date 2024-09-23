#include<iostream>
#include<string>

long ConvertToMillimeter(std::string& unit, int value){
    if (unit == "mm"){
        return value;
    } else if (unit =="cm"){
        return value*10;
    } else if (unit =="m"){
        return value*1000;
    } else if (unit == "km"){
        return value*1000000;
    }
    return 0;
}

int main(){
    int value1, value2;
    std::string unit1, unit2;

    // read pairs of distances until there no input
    while (std::cin>> value1 >> unit1 >> value2 >> unit2){
        int firstInpair = ConvertToMillimeter(unit1, value1);
        int secondInpair = ConvertToMillimeter(unit2, value2);
        if (firstInpair > secondInpair){
            std::cout<< value1 << unit1<< " is larger than " << value2 << unit2<<std::endl;
        } else if (firstInpair < secondInpair){
            std::cout<< value1 << unit1<< " is smaller than " << value2 << unit2<<std::endl;
        } else if (firstInpair==secondInpair){
            std::cout<< value1 << unit1<< " is same as " << value2 << unit2<<std::endl;
        }
    }
    return 0;
}