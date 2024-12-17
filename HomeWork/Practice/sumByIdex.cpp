#include "header.hpp"
std::vector<int>SumByIndex(std::vector<std::vector<int>> const &vec) {
    std::vector<int>result;
    for(auto const & subvec : vec){
        if(result.size() < subvec.size()){
            result.resize(subvec.size(), 0);
        }
        for (size_t i = 0; i< subvec.size(); ++i){
            result.at(i) += subvec.at(i);
        }
    }
    return result;
}