// WRITE YOUR CODE HERE
#include<iostream>
#include<algorithm>
#include<string>
#include<sstream>

int main(){
  std::string line;
  while(std::getline(std::cin,line)){
    std::stringstream ss(line);
    double num1, num2, num3;

    ss>>num1>>num2>>num3;
    double diff1 = abs(num1-num2);
    double diff2 = abs(num1-num3);
    double diff3 = abs(num2-num3);

    double minDiff= std::min({diff1,diff2,diff3});

    std::cout<<"The smallest diff of "<<num1<<", "<<num2<<
    ", and "<<num3<<" is "<<minDiff<<'.'<<std::endl;
  }
  
  return 0;
}