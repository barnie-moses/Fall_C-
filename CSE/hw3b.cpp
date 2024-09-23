#include <iostream>

int main() {
    char prevChar = '\0'; // Initialize with null character to handle the first character input
    char currentChar;
    
    while (std::cin.get(currentChar)) { // Read character by character including whitespace and symbols
        if (currentChar == '\n' || prevChar == '\0' || currentChar > prevChar) {
            std::cout << currentChar; // Output the character if it's the first character or greater than the previous one
            prevChar = currentChar; // Update the previous character
        } else {
            std::cout << '_'; // Replace characters that are not greater than their predecessor
        }
        
        if (currentChar == '\n') {
            prevChar = '\0'; // Reset prevChar to handle the first character of the new line correctly
        } else {
            prevChar = currentChar; // Update prevChar for the next iteration
        }
    }