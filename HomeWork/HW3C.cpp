// WRITE YOUR CODE HERE
#include<iostream>
#include<string>
#include<sstream>
#include<cctype>

int main(){
  std::string line;
  std::string word;
  while(std::getline(std::cin, line)){
    std::stringstream ss(line);
    while(ss>> word){
      bool newWord = true;
      for (size_t i = 0; i<word.length(); ++i){
        if (std::isalpha(word.at(i)) && newWord){
        std::cout<<word.at(i);
        newWord= false;
      }
      if (!std::isalpha(word.at(i))){
        newWord = true;
      }
       
      }
    }
  }
  return 0;
}