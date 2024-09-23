#include <iostream>
int main() {
	int value{0};
	while (std::cin >> value) {
		int root{0};
// WRITE YOUR CODE HERE

  if (value> 99){
    while (value > 99){
      int num = value%100;
      root += num;
      value = value/100;
    if (value < 100){
      value = value + root;
      if (value > 99){
        root = 0;
      }else{
        root = value;
      }
    }
  }
  }
  else{
    root = value;
  }
  
		std::cout << root << std::endl;
	}
}