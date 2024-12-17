// // WRITE YOUR CODE HERE
// #include<iostream>
// #include<string>

// int main(){
//   std::string line;
//   while(std::getline(std::cin,line)){
//     //print the first char
//     if (!line.empty()){
//       std::cout<<line.at(0);
//     }

//     //process the rest of the lines
//     for (size_t i = 1; i< line.size(); ++i){
//       if (line.at(i) > line.at(i-1)){
//         std::cout<<line.at(i);
//       }else{
//         std::cout<<'_';
//       }
//     }
//     std::cout<<std::endl;
//   }
// }


// WRITE YOUR CODE HERE
#include<iostream>
#include<string>
#include<sstream>

int main(){
  std::string line;
  while(std::getline(std::cin,line)){
    std::string strNum;
    //print the first char
    std::stringstream ss(line);
    while(ss>>strNum){
      std::cout<<strNum.at(0);
    }
    std::cout<<std::endl;

  
  }
}