// WRITE YOUR CODE HERE

#include<iostream>
#include<sstream>
#include<string>

int main(){
  std::string line;
  while(std::getline(std::cin, line)){
    std::stringstream ss(line);
    double distance1, distance2;
    double dist1, dist2;
    std::string unit1, unit2;

    ss >>dist1>>unit1; // read the first distance and unit
    ss>>dist2>>unit2; /// read the second distance and unit

    // Convert all distances to meters
        if (unit1 == "mm") {
            distance1 = dist1 / 1000;
        } else if (unit1 == "cm") {
            distance1 = dist1 / 100;
        } else if (unit1 == "km") {
            distance1 = dist1 * 1000;
        }else if (unit1 == "m") {
            distance1 = dist1;
        }

        if (unit2 == "mm") {
            distance2 = dist2 / 1000;
        } else if (unit2 == "cm") {
            distance2 = dist2 / 100;
        } else if (unit2 == "km") {
            distance2 = dist2 * 1000;
        }else if (unit2 == "m") {
            distance2 = dist2;
        }


    if (distance1>distance2){
      std::cout<<dist1<<unit1<<
      " is larger than "<<dist2<<unit2<<std::endl;
    } else if(distance1<distance2){
      std::cout<<dist1<<unit1<<" is smaller than "
      <<dist2<<unit2<<std::endl;
    }else {
      std::cout<<dist1<<unit1<<
      " is the same as "<<dist2<<unit2<<std::endl;
    }
  }
  return 0;
}