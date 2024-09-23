#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <iomanip>
using std::noskipws;
using std::setw;

int main() {
    char C;  // Input character
    int char_count = 0,   // Number of characters in input stream
        line_count = 0,   // Number of newlines
        white_count = 0,  // Number of whitespace characters
        digit_count = 0,  // Number of digits
        other_count = 0;  // Number of other characters

    // Variables to keep track of the last three characters
    char last = 0, second_last = 0, third_last = 0;

    cin >> noskipws;

    while (cin >> C) {
        // Update character counts
        ++char_count;

        // Classify each character
        switch (C) {
            case '\n':   // Newline
                ++line_count;
                [[fallthrough]]; // Fall through to next case
            case ' ':  // White space (newline, blank or tab)
            case '\t':
                ++white_count;
                break;
            case '0':  // Decimal digit
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                ++digit_count;
                break;
            default:  // Other character
                ++other_count;
                break;
        }
            // Update the last three characters
        third_last = second_last;
        second_last = last;
        last = C;
         // Check for 'MSU'
        if (third_last == 'M' && second_last == 'S' && last == 'U') {
            break; // Stop if the last three characters were 'MSU'
        }
        
    }

    // Output the results
    cout << endl;
    cout << "Newlines:   " << setw(5) << line_count << endl;
    cout << "Whitespace: " << setw(5) << white_count << endl;
    cout << "Digits:     " << setw(5) << digit_count << endl;
    cout << "Other:      " << setw(5) << other_count << endl;
    cout << "Total:      " << setw(5) << char_count << endl;
    cout << endl;
}