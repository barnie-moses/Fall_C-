#pragma once
class complex{
    private:
    double re; double im;
    public:
    complex(double r, double i): re{r}, im{i}{}
    complex(double r): re{r}, im{0}{}
    complex(): re{0}, im{0}{}
    complex(complex const & a): re{a.re}, im{a.im}{}

    double real() const {return re;}
    double imag() const {return im;}
    void real(double d){re=d;}
    void imag(double d){im=d; }

};
bool operator<(complex const & a, complex const &b);
bool operator>(complex const & a, complex const &b);
bool operator==(complex const & a, complex const &b);
double AbsoluteValue(complex const & c);

