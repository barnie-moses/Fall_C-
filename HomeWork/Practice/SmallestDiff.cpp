#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num1;
    int num2;
    int num3;
    while(cin>>num1>>num2>>num3){
        int diff1 = abs(num1-num2);
        int diff2 = abs(num1-num3);
        int diff3 = abs(num2-num3);

        int small_diff = min(diff1,diff2);
        small_diff = min(small_diff,diff3);
        
        cout<<"The smallest diff of "<<num1<<", "<<num2 <<", and "<<
            num3<< " is "<<small_diff<<endl;
    }
    return 0;
}