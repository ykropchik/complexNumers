//
// Created by ykrop on 14.12.2019.
//
#include "lib.h"

using namespace std;

ComplexNumber operator +(const ComplexNumber &first, const ComplexNumber &second){
    ComplexNumber answer{};

    answer.a = first.a + second.a;
    answer.b = first.b + second.b;

    return answer;
}

ComplexNumber operator -(const ComplexNumber &first, const ComplexNumber &second){
    ComplexNumber answer{};

    answer.a = first.a - second.a;
    answer.b = first.b - second.b;

    return answer;
}

ComplexNumber operator *(const ComplexNumber &first, const ComplexNumber &second){
    ComplexNumber answer{};

    answer.a = (first.a * second.a) - (first.b * second.b);
    answer.b = (first.a * second.b) + (first.b * second.a);

    return answer;
}

ComplexNumber operator /(const ComplexNumber &first, const ComplexNumber &second){
    ComplexNumber answer{};

    answer.a = ((first.a * second.a) + (first.b * second.b))/((second.a * second.a) + (second.b * second.b));
    answer.b = ((first.b * second.a) - (first.a * second.b))/((second.a * second.a) + (second.b * second.b));

    return answer;
}

bool operator ==(const ComplexNumber &first, const ComplexNumber &second){
    return ((first.a == second.a) && (first.b == second.b));
}

bool operator !=(const ComplexNumber &first, const ComplexNumber &second){
    return (first.a != second.a) && (first.b != second.b);
}

ostream &operator <<(ostream &out, const ComplexNumber &number){
    out << number.a << "+" << number.b << "i";

    return out;
}