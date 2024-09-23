#include"complex.h"
#include <cmath>

using std::pow, std::sqrt;

double AbsoluteValue(complex const & c){
    return sqrt(pow(c.real(),2)+ pow(c.imag(), 2));
}

bool operator<(complex const & a, complex const & b){
    return (AbsoluteValue(a)< AbsoluteValue(b));
}
bool operator>(complex const & a, complex const &b){
    return (AbsoluteValue(a)>AbsoluteValue(b));
}

bool operator==(complex const & a, complex const &b){
    return(a.real()==b.real()&& a.imag()==b.imag());
}

