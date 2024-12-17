#include<iostream>

int main(){
    char c;
    int count = 0;
    std::cin>>c;
    do{
        if(c == 'M' || c == 'S' || c=='U' || c == 'm' || c == 's' || c=='u'){
            count += 1;
        }
        std::cin>>c;
    }while(c != '.');

    std::cout<<"The count of letters (\"MSU\") is "<< count<<"."<<std::endl;
    return 0;

}