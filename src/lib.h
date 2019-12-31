//
// Created by ykrop on 14.12.2019.
//
#include <iostream>

using namespace std;

struct ComplexNumber{
    float a;
    float b;    //*i
};

ComplexNumber operator +(const ComplexNumber &first, const ComplexNumber &second);
ComplexNumber operator -(const ComplexNumber &first, const ComplexNumber &second);
ComplexNumber operator *(const ComplexNumber &first, const ComplexNumber &second);
ComplexNumber operator /(const ComplexNumber &first, const ComplexNumber &second);
ostream &operator <<(ostream &out, const ComplexNumber &number);

