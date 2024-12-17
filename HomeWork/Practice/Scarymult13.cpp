//Ebenezar, Samuel, Eleazar, Derick, Van-dyck
#include <stdexcept>
#include <vector>
int SumButScared(const std::vector<int> &numbers) {
  int sum = 0;
  for (int number : numbers) {
    if (number % 13 == 0) {
      throw std::invalid_argument("Error: Found a multiple of 13: " + std::to_string(number));
    }
    sum += number;
  }
  return sum;
}