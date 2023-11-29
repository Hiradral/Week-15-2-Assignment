#include <iostream>
#include <cmath>
using namespace std;

template <typename T>
T half(T num) {
    return num / 2;
}

int main() {
    cout << half(25.0) << endl;

    return 0;
}