#include <iostream>
#include <cmath>
using namespace std;

// Function prototype.
int half(int);

/* half function template. The function takes a numeric data type as an argument
 * and returns half the value of the argument. This template is intended to work
 * with floating point data types only.
 */
template <typename T>
T half(T num) {
    return num / 2;
}

int main() {
    // Testing the template version of the half function using double and float.
    cout << half(25.0) << endl;
    cout << half(14.17f) << endl;

    // Testing the overloaded int version of the half function.
    cout << half(25) << endl;

    return 0;
}

/* Overloaded half function. The function takes an int argument and returns half
 * the value of the argument, rounded according to standard rounding rules.
 */
int half(int num) {
    return round(static_cast<double>(num) / 2);
}