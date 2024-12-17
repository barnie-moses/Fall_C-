#pragma once
#include <string>

// Function declarations
void validateChord(const std::string &chord);
void validateChordList(const std::string &chordList);


#include "guitar_chords.hpp"
#include <cctype>
#include <iostream>
#include <sstream>
#include <stdexcept>

// Function to validate a single chord
void validateChord(const std::string &chord) {
    for (char c : chord) {
        if (!std::isalpha(c) && c != '#' && c != 'b' && c != 'm' && !std::isdigit(c)) {
            throw std::invalid_argument("Invalid chord: " + chord);
        }
    }
}

// Function to validate a list of chords
void validateChordList(const std::string &chordList) {
    std::string chord;
    std::istringstream stream(chordList);
    while (std::getline(stream, chord, ',')) {
        chord.erase(remove(chord.begin(), chord.end(), ' '), chord.end()); // Trim spaces
        validateChord(chord);
    }
}


#include <iostream>
#include "guitar_chords.hpp"

int main() {
    std::string chords;

    // Get chord input from the user
    std::cout << "Enter a comma-separated list of guitar chords: ";
    std::getline(std::cin, chords);

    try {
        validateChordList(chords);
        std::cout << "All chords are valid!" << std::endl;
    } catch (const std::invalid_argument &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
