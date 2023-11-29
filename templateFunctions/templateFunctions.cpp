#include <iostream>
#include <cmath>
using namespace std;

// Function prototype.
int half(int);

// Template function for non-integral data types.
template <typename T>
T half(T num) {
    return num / 2;
}

int main() {
    cout << half(25.0) << endl;
    cout << half(14.17f) << endl;;
    cout << half(25) << endl;;

    return 0;
}

int half(int num) {
    return round(static_cast<double>(num) / 2);
}