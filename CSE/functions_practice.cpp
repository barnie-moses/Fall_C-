#include<iostream>
#include<vector>

    int GetTotal(std::vector<int> numbers);

int main(){
    std::cout<< "           START            "<<std::endl;

    std::vector<int> num;
    num.push_back(2001);
    num.push_back(2002);
    num.push_back(2003);

    std::cout<<"Length : "<< num.size()<<std::endl;

    for(int i=0; i < static_cast<int>(num.size()); ++i){
        std::cout<<"pos "<< i<<" :"<< num.at(i)<<std::endl;
    }
    int total = GetTotal(num);
    std::cout<<"Total : "<< total<<std::endl;

}

int GetTotal(std::vector<int> numbers){
    int total{0};
    for (int number: numbers){
        total += number;
    }
    return total;
}
