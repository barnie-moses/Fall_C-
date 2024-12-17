#include <iostream>
#include <string>

// Function to replace 'K' with 'X' and 'X' with 'K' in the input string
void replaceKandX(std::string &input) {
    for (char &ch : input) {
        if (ch == 'K') {
            ch = 'X';
        } else if (ch == 'X') {
            ch = 'K';
        }
    }
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    replaceKandX(input);

    std::cout << "Modified string: " << input << std::endl;
    return 0;
}
