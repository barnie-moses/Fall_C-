// initial work

#include<iostream>

int main(){
  int count{0};
  char character;
  while(std::cin>>character){
    if(character == '.'){
      break;
      } else {
      switch(character){
        case 'M':
        case 'm':
        ++count;
        break;

        case 'S':
        case 's':
        ++count;
        break;
        
        case 'U':
        case 'u':
        ++count;
        break;
        
    }
  }
  }
  std::cout<<"The count of letters (\"MSU\") is "<<count<<".";
  return 0;
}

///main work

// WRITE YOUR CODE HERE
#include<iostream>
#include<cctype>

int main(){
  int count{0};
  char character;
  while(std::cin>>character){
    if(character == '.'){
      break;
      } else {
        character = std::tolower(character);
      switch(character){
        case 'm':
        ++count;
        break;
        case 's':
        ++count;
        break;
        case 'u':
        ++count;
        break;
    }
  }
}
  std::cout<<"The count of letters (\"MSU\") is "<<count<<".";
  return 0;
}

/// another way
#include <iostream>

int main() {
    int count{0};
    char character;

    while (std::cin >> character) {
        if (character == '.') {
            break;
        }

        if (character == 'M' || character == 'm' ||
            character == 'S' || character == 's' ||
            character == 'U' || character == 'u') {
            ++count;
        }
    }

    std::cout << "The count of letters (\"MSU\") is " << count << "." << std::endl;

    return 0;
}

// using cctype

#include <iostream>
#include <cctype>  // for std::tolower

int main() {
    int count{0};
    char character;

    while (std::cin >> character) {
        if (character == '.') {
            break;
        }

        // Convert the character to lowercase
        character = std::tolower(character);

        if (character == 'm' || character == 's' || character == 'u') {
            ++count;
        }
    }

    std::cout << "The count of letters (\"MSU\") is " << count << "." << std::endl;

    return 0;
}
