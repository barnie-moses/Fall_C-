// WRITE YOUR CODE HERE

#include<iostream>
#include<sstream>

int main(){
  std::string line;
  while(std::getline(std::cin, line)){
    std::string word;
    std::stringstream ss(line);
    while(ss>>word){
      if(word.length()>=5){
        std::cout<<word<<' ';
      }
    }
    std::cout<<std::endl;
  }
}