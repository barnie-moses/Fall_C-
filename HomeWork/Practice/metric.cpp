#include<iostream>
using namespace std;
int main(){
    int num1; 
    int num2;
    string str1;
    string str2;
    while(cin>>num1>>str1>>num2>>str2){
        double num_1;
        double num_2;
        if (str1 =="mm"){
            num_1 = num1;
        } else if(str1 =="m"){
            num_1 = num1*1000;
        } else if(str1=="cm"){
            num_1 = num1*10;
        }else{
            num_1 = num1 * 1000000;
        }

        if(str2 =="mm"){
            num_2 = num2;
        } else if(str2 =="m"){
            num_2 = num2*1000;
        } else if(str2=="cm"){
            num_2= num2*10;
        }else if(str2 == "km"){
            num_2 = num2 * 1000000;
        }

        if(num_1 < num_2){
            cout<<num1<<str1<<" is smaller than "<<num2<<str2<<endl;
        }else if(num_1> num_2){
            cout<<num1<<str1<<" is larger than "<<num2<<str2<<endl;
        }else{
            cout<<num1<<str1<<" is the same as "<<num2<<str2<<endl;

        }
    }
    return 0;
}