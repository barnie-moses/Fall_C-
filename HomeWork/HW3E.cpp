// WRITE YOUR CODE HERE
#include<iostream>

int main(){
  int startRow, endRow;
  int startColumn{0}; 
  int endColumn{0};
  std::cin>>startRow>>endRow;
  std::cin>>startColumn>>endColumn;
  for (int i = startColumn; i<=endColumn; ++i){
    for(int j = startRow; j<=endRow; ++j){
    if(j !=endRow){
        std::cout<<i<<'*'<<j<<'='<<i*j<<','<<' ';
      } else{
        std::cout<<i<<'*'<<j<<'='<<i*j<<std::endl;
      }
    }
  }
  return 0;
}