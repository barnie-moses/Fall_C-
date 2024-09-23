#include"complex.cpp"
#include<iostream>

int main(){
    complex a{3,4};
    complex b{4,3};
    complex c{1,2};
    std::cout<<(a<b)<<" "<<(a>b)<<" "<<(a ==b)<<std::endl;
    std::cout<<(b<c)<<" "<<(b>c)<<" "<<(b ==c)<<std::endl;
    std::cout<<(c<a)<<" "<<(c>a)<<" "<<(c ==a)<<std::endl;



}