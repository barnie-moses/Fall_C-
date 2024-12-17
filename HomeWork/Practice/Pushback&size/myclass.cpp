#include"myclass.h"

Myclass::Myclass(){
    // 
}

Myclass::Myclass(const std::initializer_list<int> & init_list){
    for(int val : init_list){
        data.push_back(val);
    }
}

void Myclass::push_back(int val){
    data.push_back(val);
}

int Myclass::size() const{
    return static_cast<int>(data.size());
}