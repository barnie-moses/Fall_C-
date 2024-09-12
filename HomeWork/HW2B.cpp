// WRITE YOUR CODE HERE

#include<iostream>
#include<string>
#include<sstream>

int main(){
  std::string input;
  int sum{0};

  while(std::getline(std::cin, input)){ //reads until EOF
    std::stringstream ss(input);
    std::string word;
    while(ss>>word){
      int num = std::stoi(word);
      sum +=num;
    }
  }
  std::cout<<sum;
  return 0;
}