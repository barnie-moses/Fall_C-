#include <iostream>
#include <vector>

int GetTotal(std::vector<int> numbers){
    int total{0};
    for (int num : numbers){
        total += num;
    }
    return total;
}

int main(){
    std::cout<< ".......START......."<< std::endl;
    std::vector<int> years;

    years.push_back(1855);
    years.push_back(1776);
    years.push_back(1999);

    std::cout<< years.size()<<std::endl;

    for (int i=0; i < static_cast<int>(years.size()); ++i){
        std::cout<< "Pos "<<i<< ": "<<years.at(i)<<std::endl;
    } 
    int total{0};
    for (int year: years){
        total += year;
    }
    std::cout<< "Total: "<<total << std::endl;

    int Total = GetTotal(years);
    std::cout<< "Total from function: "<< Total<< std::endl;

}