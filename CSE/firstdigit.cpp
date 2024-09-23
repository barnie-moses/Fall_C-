#include<iostream>
#include<string>
#include<cctype>

using std::string;
char & FirstDigit(string & s){
    for (char & c : s){
        if (std::isdigit(c)){
            return c;
        }
    }
    return s.at(0);
}

int main(){
    string Text{"My dog is 5 years old"};
    char & digit = FirstDigit(Text);
    std::cout<<"Digit: "<<digit<<std::endl;
    digit = '6';
    std::cout<<"Text: "<<Text<<std::endl;
    
}