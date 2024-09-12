// Example 3.6
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <iomanip>
using std::noskipws;
using std::setw;

int main() {
  char C;               // Input character
  int char_count = 0,   // Number of characters in input stream
      line_count = 0,   // Number of newlines
      white_count = 0,  // Number of whitespace characters
      digit_count = 0,  // Number of digits
      other_count = 0;  // Number of other characters

  cin >> noskipws;

// My code
  char prev1 ='\0', prev2 = '\0'; // track last two characters

  //End of my code

  //another way
  //char last_three[3] = {'\0', '\0', '\0'};  // Array to keep track of the last three characters


  while (cin >> C) {
    ++char_count;  // Increment overall character count
    switch (C) {   // Classify each character
      case '\n':   // Newline
        ++line_count;
        [[fallthrough]]; // Added to indicate that fallthrough is expected
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

    //my code
    if (prev1=='M'&& prev2=='S' && C == 'U'){
    break;
    }
    prev1 = prev2;
    prev2 = C;
    /// End of my code
  

   /*
    last_three[0] = last_three[1];
    last_three[1] = last_three[2];
    last_three[2] = C;

    // Check if the last three characters form the sequence "MSU"
    if (last_three[0] == 'M' && last_three[1] == 'S' && last_three[2] == 'U') {
      break;  // Stop reading input
    }
   */
  }

  cout << endl;
  cout << "Newlines:   " << setw(5) << line_count << endl;
  cout << "Whitespace: " << setw(5) << white_count << endl;
  cout << "Digits:     " << setw(5) << digit_count << endl;
  cout << "Other:      " << setw(5) << other_count << endl;
  cout << "Total:      " << setw(5) << char_count << endl;
  cout << endl;
}
