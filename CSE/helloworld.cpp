// WRITE YOUR CODE HERE
#include<iostream>
#include<cctype> // suggestion from ChatGPT
int main(){
  int MSU_count{0};

  char character;
  while (std::cin>>character){
    char lower_char = std::tolower(character);
    if (lower_char == '.'){
        break;
    } else if (lower_char == 'm'||lower_char=='s'||lower_char=='u'){
        ++MSU_count;
    }
  }
std::cout<<"The count of letters (\"MSU\") is "<<MSU_count<<'.'<<std::endl;
}