#include<iostream>
#include<string>
#include<cctype>

using std::string;

void capitalize(string & s);
void MakeExciting(string s);
 
 int main(){
    int * x = new int{0};
    std::cout<<*x<<std::endl;

    delete x;

    std::string * words = new string[40]{"CSE",  "232"};
    std::cout<<words[1]<<std::endl;

    string name{"mal"};
    capitalize(name);
    MakeExciting(name);
    
 }
 void capitalize(string & s){
    s.at(0)= std::toupper(s.at(0));
    std::cout<<"s.at(0) is now "<<s.at(0)<<std::endl;
 }

 void MakeExciting(string const s){
    std::cout<< s<<"!!!!!"<<std::endl;
 }