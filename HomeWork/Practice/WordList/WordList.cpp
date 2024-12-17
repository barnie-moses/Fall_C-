#include <string>
bool AtListPosition(const std::string & wordlist, const std::string & word, size_t pos){
    size_t end_pos = pos + word.size();
    if (end_pos > wordlist.size()) return false;
    if (wordlist.substr(pos, word.size()) != word) return false;
    if (pos != 0 && word[pos-1] != ',') return false;
    if (end_pos != wordlist.size() && wordlist[end_pos] != ',') return false;

    return true;
}

size_t FindInList(const std::string & wordlist, const std::string &word, size_t pos=0){
    while(pos != std::string::npos && !AtListPosition(wordlist, word, pos)){
        pos= wordlist.find(word, pos+1);
    }
    return pos;

}

std::string GetFirstInList(const std::string wordlist, const std::string * word1_ptr, const std::string * word2_ptr){
    size_t pos1 = FindInList(wordlist,*word1_ptr );
    size_t pos2 = FindInList(wordlist, *word2_ptr);

    if (pos1 == std::string::npos && pos2 == std::string::npos) return "N/A";
    if (pos1 < pos2) return *word1_ptr;
    return *word1_ptr;
}

size_t CountInList(std::string const & wordlist, std::string const & word){
    size_t count = 0;
    for (size_t pos = FindInList(wordlist, word); pos != std::string::npos; pos = FindInList(wordlist, word, pos+1) ){
        ++count;
    }
    return count;
}
