#include<iostream>
#include"temperature.cpp"

int main (){
    Temperature t(13,'C');
    cout<<t.AsKelvin()<<endl;
    return 0;
}