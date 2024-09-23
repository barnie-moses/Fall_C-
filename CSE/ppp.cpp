#include<iostream>
#include<sstream>
#include<string>

int main() {
    std::string line;
    std::cout << "Enter a line of text:" << std::endl;
    std::string result;
    bool firstIteration = true;

    // Loop to handle each segment ending with a period
    while (std::getline(std::cin, line, '.')) {
        // To handle the case where no input or only a period is entered before EOF
        if (!firstIteration) {
            result += " "; // Add space before starting to process a new segment after the first
        }
        firstIteration = false;
        
        std::istringstream iss(line);
        std::string word;
        
        // Extract and process words from the segment
        while (iss >> word) {
            if (word.find('-') != std::string::npos) {
                result += word + ' ';
            }
        }
    }

    // Trim the last space if you want the output to be perfectly in line
    if (!result.empty() && result.back() == ' ') {
        result.pop_back();
    }
    
    std::cout << result << std::endl; // Output all hyphenated words found
    return 0;
}
