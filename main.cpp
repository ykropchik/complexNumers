#include <iostream>
#include "lib.h"

using namespace std;

int main() {
    ComplexNumber numberFirst{4, 12}, numberSecond{11, 4};

    cout << (numberFirst + numberSecond) << "\n"
         << (numberFirst - numberSecond) << "\n"
         << (numberFirst * numberSecond) << "\n"
         << (numberFirst / numberSecond) << "\n";

    return 0;
}