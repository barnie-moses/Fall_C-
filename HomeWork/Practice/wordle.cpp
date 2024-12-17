#include <iostream>
#include <string>
using namespace std;

void displayHint(const string& secret, const string& guess) {
    string result = ".....";  // Placeholder for result
    bool usedSecret[5] = {false}; // Track which letters in secret are used
    bool usedGuess[5] = {false};  // Track which letters in guess are already matched

    // First pass: check for correct positions
    for (int i = 0; i < 5; ++i) {
        if (guess[i] == secret[i]) {
            result[i] = guess[i];  // Exact match
            usedSecret[i] = true;   // update the position to true
            usedGuess[i] = true;    // update the position to true
        }
    }

    // Second pass: check for correct letters in the wrong positions
    for (int i = 0; i < 5; ++i) {
        if (!usedGuess[i]) {  // If this guess position doesn't have exact match from the secret word
            for (int j = 0; j < 5; ++j) {
                if (!usedSecret[j] && guess[i] == secret[j]) {
                    if (result[i] == '.') { // Only replace with '?' if it's not already a matched character
                        result[i] = '?'; // Letter is correct but in the wrong position
                    }
                    break; // Break out of the inner loop once we find a match
                }
            }
        } else{
            usedSecret[i] = false; // if the guess position has exact match from the secret word,
        }                           // change the change the position in the usedSecret to false
    }                   // so that the position will be checked when checking correct letter in wrong position

    cout << result << endl;  // Output the result for the guess
}

int main() {
    string secret, guess;
    int attempts = 6;

    cout << "Give me a secret word: " << endl;
    cin >> secret;

    for (int i = 0; i < attempts; ++i) {
        cout << "Give me a guess: " << endl;
        if (!(cin >> guess)) {
            // If user provides EOF (Ctrl+D)
            cout << "You Lose." << endl;
            return 0;
        }

        if (guess.length() != 5) {
            cout << "Please provide a 5-letter word." << endl;
            continue;
        }

        if (guess == secret) {
            cout << secret << endl;
            cout << "You Win!" << endl;
            return 0;
        }

        displayHint(secret, guess);  // Display the hint for this guess
    }

    cout << "You Lose." << endl;
    return 0;
}
