#include<iostream>
#include<sstream>
#include<string>

int main(){
    std::string line;
    std::cout<<"Enter a line of text"<<std::endl;
    std::string result;

    while(std::getline(std::cin, line)){
        std::istringstream iss(line);
        std::string word;
        
        while(iss>>word){
            if (word.find('-') != std::string::npos){
                 std::cout<<word<<std::endl;
            }
        }
        
    }
   
    return 0;
}