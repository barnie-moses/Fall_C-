#include<iostream>
#include<cctype>

using namespace std;

void To_Digits(string & str){
    string res;
    for(size_t i = 0; i<str.size(); i++){
        // nums with length of 5
        if(i+5 <= str.size()){
            string word = str.substr(i,5);
            for (auto & c : word){
                c = tolower(c);
            }
            if(word == "seven"){
                res.append("7");
                i +=4;
                continue;
            }else if(word == "three"){
                res.append("3");
                i+=4;
                continue;
            } else if(word == "eight"){
                res.append("8");
                i+=4;
                continue;
            }
        }

        // nums with length of 4
        if(i+4 <= str.size()){
            string word = str.substr(i,4);
            for (auto & c : word){
                c = tolower(c);
            }
            if(word == "four"){
                res.append("4");
                i +=3;
                continue;
            }else if(word == "five"){
                res.append("5");
                i+=3;
                continue;
            } else if(word == "nine"){
                res.append("9");
                i+=3;
                continue;
            }else if(word == "zero"){
                res.append("0");
                i+=3;
                continue;
            }
        }

        // nums with length of 3
        if(i+3 <= str.size()){
            string word = str.substr(i,3);
            for (auto & c : word){
                c = tolower(c);
            }
            if(word == "one"){
                res.append("1");
                i +=2;
                continue;
            }else if(word == "two"){
                res.append("2");
                i+=2;
                continue;
            } else if(word == "six"){
                res.append("6");
                i+=2;
                continue;
            }
        }
        res +=str.at(i);
    }
    str = res;
}

int main(){
    string str = "It began with the forging of the Great Rings. Three were given to the Elves, immortal, wisest and fairest of all beings. Seven to the Dwarf-Lords, great miners and craftsmen of the mountain halls. And nine, nine rings were gifted to the race of Men, who above all else desire power. For within these rings was bound the strength and the will to govern each race. But they were all of them deceived, for another ring was made. Deep in the land of Mordor, in the Fires of Mount Doom, the Dark Lord Sauron forged a master ring, and into this ring he poured his cruelty, his malice and his will to dominate all life. One ring to rule them all.";

    To_Digits(str);
    cout<<str<<endl;

}