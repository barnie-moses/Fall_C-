#include<iostream>
#include<cmath>

int Closest_Multiple_Of_13(int num){
  int i= 0;
  int result;
  while (num >= 0){
    if (i *13 == num){
      result = i *13;
      break;
    }
    else if(std::abs((i*13)- num) <= 12 && std::abs((i*13)- num) < std::abs(((i+1)*13)- num) ){
      result = (i*13);
      break;
    }
    else if(std::abs((i*13)- num) <= 12 && std::abs((i*13)- num) > std::abs(((i+1)*13)- num) ){
      result =(i+1)*13;
      break;
    }
    else{
      ++i;
      continue;
    }
  }
  while (num <0){
    if (i *(-13) == num){
      result = i *(-13);
      break;
  }
  else if(std::abs((i*-13)+ num) <= 12 && std::abs((i*(-13))+ num) < std::abs(((i+1)*(-13)) + num) ){
    result = i * (-13);
    break;
  }
  else if(std::abs((i*(-13))+ num) <= 12 && std::abs((i*(-13))+ num) > std::abs(((i+1)*(-13))+ num) ){
    result = (i+1)*(-13);
    break;
  }
  else{
    ++i;
    continue;
  }
  }
  return result;

}

int main(){
    Closest_Multiple_Of_13(-6);
    return 0;
}