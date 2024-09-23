// WRITE YOUR CODE HERE
#include<iostream>
#include<algorithm> // for std::abs . From Google search


int main(){
  int v1, v2, v3;
  while (std::cin>>v1>>v2>>v3){
    int diff1 = std::abs(v1-v2);
    int diff2 = std::abs(v2-v3);
    int diff3 = std::abs(v1-v3);
    
    int smallest= std::min(diff1,diff2);
    int smallestdiff=std::min(smallest,diff3);

    std::cout<<"The smallest diff of "<<v1<<", "<<v2<<", and "<<v3<< " is "<<smallestdiff<<"."<<std::endl;
  }
  return 0;
}