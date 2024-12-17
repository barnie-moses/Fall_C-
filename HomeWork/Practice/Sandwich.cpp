#include<iostream>

using namespace std;

char * Sandwich (string & line, char *bread_ptr){
    char bread = *bread_ptr;
    size_t len = line.size();

    for(size_t i=1; i<len-1;++i){
        if(line.at(i) != bread && line.at(i-1) == bread && line.at(i+1)== bread){
            return &line[i];
        }
    }
    return nullptr;
}

int main(){
    string line = "Char is a character";
    char bread = 'a';
    char * filling_ptr = Sandwich(line, &bread);
    if (filling_ptr){
        cout<<*filling_ptr<<endl;
        cout<<line<< endl<<endl;

        *filling_ptr = 'Z';
        cout<<*filling_ptr<<endl;
        cout<<line<<endl;
    }else{
        cout<<"No sandwich found"<<endl;
    }
    return 0;
}
