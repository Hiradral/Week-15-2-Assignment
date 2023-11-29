#include <iostream>
#include <cmath>
using namespace std;

/* half function template. The function takes a numeric data type as an argument
 * and returns half the value of the argument. This template is intended to work
 * with floating point data types only.
 */
template <typename T>
T half(T num) {
    return num / 2;
}

/* Overloaded half function template. The function takes an int argument and 
 * returns half the value of the argument, rounded according to standard 
 * rounding rules. This version is speficially for the int data type since int
 * values need to be rounded after division.
 */
template <>
int half<int>(int num) {
    return static_cast<int>(round(static_cast<double>(num) / 2));
}

int main() {
    // Testing the template version of the half function using double and float.
    cout << half(25.0) << endl;
    cout << half(14.17f) << endl;

    // Testing the overloaded int version of the half function.
    cout << half(25) << endl;

    return 0;
}