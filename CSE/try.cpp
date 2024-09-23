#include<iostream>
#include<iomanip>
int main(){
    std::cin>>std::noskipws;
    int char_count{0};
    char character;
    while (std::cin>>character){
        ++char_count;
    }

    std::cout<<"Character: "<<char_count<<std::endl;

}