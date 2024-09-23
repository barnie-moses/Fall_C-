#include <iostream>
int main() {
	int value{0};
	while (std::cin >> value) {
		int root{0};
// WRITE YOUR CODE HERE
    if (value <= 99){
        break;
    }
	
	while (value >= 100) { // 9857843,98578,985; 215
        while(value >99){
		    root += value%100; // 43,121,206; 15
		    value = value /100; // 98578, 985, 9; 2
	}
	    root = root + value;
	    value = root;
	    root = 0;
    
	}
	
}
    std::cout << value << std::endl;
}