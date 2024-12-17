#include <fstream>
#include <iostream>
#include <string>

using std::boolalpha;
using std::cout;
using std::endl;
using std::getline;
using std::ifstream;
using std::istream;
using std::string;

bool myLinter(istream &file) {
  string current_line;
  int depth_in_parens = 0;
  int depth_in_brackets = 0;
  while (getline(file, current_line)) {
    bool first_char_encountered = false;
    char first_char = '\0';
    char last_char = '\0';
    for (char c : current_line) {
      if (c == ' ') continue;
      if (!first_char_encountered) {
        first_char = c;
        if (first_char != 'S') return false;
        first_char_encountered = true;
      } else if (c == '(')
        depth_in_parens++;
      else if (c == '{')
        depth_in_brackets++;
      else if (c == ')') {
        depth_in_parens--;
        if (depth_in_parens < 0) return false;
      } else if (c == '}') {
        depth_in_brackets--;
        if (depth_in_brackets < 0) return false;
      }
      last_char = c;
    }
    if (first_char_encountered == '\0' && first_char_encountered == '\0')
      continue;
    if (!first_char_encountered) return false;
    if (last_char != ';' && last_char != '{' && last_char != '(' &&
        last_char != '}' && last_char != ')')
      return false;
  }
  if (depth_in_brackets != 0) return false;
  if (depth_in_parens != 0) return false;
  return true;
}

int main() {
  // provided for your testing convenience
  return 0;
}