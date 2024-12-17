#pragma once
#include<string>

bool AtListPosition(const std::string & wordlist, const std::string & word, size_t pos);
size_t FindInList(const std::string & wordlist, const std::string & word, size_t pos=0);
std::string GetFirstInList(const std::string wordlist, const std::string * word1_ptr, const std::string * word2_ptr);
size_t CountInList(std::string const & wordlist, std::string const & word);