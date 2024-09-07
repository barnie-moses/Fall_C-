// WRITE YOUR CODE HERE
#include <iostream>
#include <iomanip>

int main() {
const double oneAUkm = 149'598'000;
const double oneAUmi = 92'955'800;
const double speedLight = 299'792'458.0 * 60 * 60 / 1000;
const double speedCraftkm = 14.33 * 60 * 60 * 24;
const double speedCraftmi = 8.9 * 60 * 60 * 24;

int days = 0;

std::cin >> days;

double initialDistMI = 37.33 * oneAUmi;
double initialDistKM = 37.33 * oneAUkm;
double answerMI;
double answerKM;
double answerTime;

answerMI = (days * speedCraftmi) + initialDistMI;
answerKM = (days * speedCraftkm) + initialDistKM;
answerTime = ((answerKM)*2) / speedLight;

std::cout << std::fixed << std::setprecision(2) << 
answerKM << "\n" << answerMI << "\n" << answerTime << "\n";

}