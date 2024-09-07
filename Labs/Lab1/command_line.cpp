#include <iostream>

int main(int argc, char *argv[]) {
  std::cout << "The name of this program is: " << argv[0] << std::endl;

  if (argc > 1) {
    std::cout << "A total of " << argc
	      << " words were typed to run this command" << std::endl;
    std::cout << "The first argument is: " << argv[1] << std::endl;
  } else {
    std::cout << "No arguments provided." << std::endl;
  }
}
