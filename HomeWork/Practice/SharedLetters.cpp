#include<iostream>
#include<cmath>

using namespace std;

string SharedLetters(string & first, string second, string * third){
    size_t maxLength = max(first.size(),max(second.size(), (third)->size()));
    string res = "";
    for(size_t i = 0; i< maxLength; ++i){
         int count = 0;
        if(i < first.size() && i<second.size() && first.at(i)==second.at(i)){
            ++count;
        }
        if(i<first.size()&& i<third->size() && first.at(i)== third->at(i)){
            ++count;
        }
        if (i<second.size() && i<third->size() && second.at(i)== third->at(i)){
            ++count;
        }
        res += to_string(count) + ",";
    }
    return res;
}

int main() {
    string word1, word2, word3;

    // Read input from standard input without prompts
    cin >> word1 >> word2 >> word3;
    cout<< word1<<endl<<word2<<endl<<word3<<endl;

    // Call the function and print the result
    cout << SharedLetters(word1, word2, &word3) << std::endl;

    return 0;
}
