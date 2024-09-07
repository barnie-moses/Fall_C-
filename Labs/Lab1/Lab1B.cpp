// WRITE YOUR CODE HERE
#include <cstdlib>
#include <iostream>
#include <iomanip>

int main(int argc, char *argv[]) {
const double oneAUkm = 149'598'000;
const double oneAUmi = 92'955'800;
const double speedLight = 299'792'458.0 * 60 * 60 / 1000;
const double speedCraftkm = 14.33 * 60 * 60 * 24;
const double speedCraftmi = 8.9 * 60 * 60 * 24;

int days = 0;
int daysInput = 0;
int daysCmd = 0;

if (argc < 2) {
  std::cout << "No command line arguments." << std::endl;
} else if (argc > 4) {
  std::cout << "Too many command line arguments." << std::endl;
} else {
  for(int i = argc - 1; i > 0; i--) {
    daysCmd += std::atoi(argv[i]);
  }
  std::cout << "Number of days from command line arguments: " << daysCmd << std::endl;
}

std::cin >> daysInput;
std::cout << "Number of days from standard input: " << daysInput << std::endl;
days = daysCmd + daysInput;

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