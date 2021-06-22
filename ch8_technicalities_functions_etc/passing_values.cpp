#include "../header_files/std_lib_facilities.h"

/*
    Demonstrate the following methods of passing values to a function:
        1. Pass-by-value
        2. Pass-by-const-reference
        3. Pass-by-reference
*/

// Use pass-by-value to pass very small objects
int Square(int x) {
    return x * x;
}

// Use pass-by-const-reference to pass large objects that don't need to be modified (avoid copying)
void PrintVector(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
}

// Use pass-by-reference when you have to modify the objects passed inplace
void Swap(int& x, int& y) {
    int temp = y;
    y = x;
    x = temp;
}

int main() {
    // 1. Pass-by-value
    cout << Square(5) << "\n";
    // 2. Pass-by-const-reference
    vector<int> v;
    const int kVectorSize = 100;

    for (int i = 0; i < kVectorSize; ++i) {
        v.push_back(rand());
    }

    PrintVector(v);

    // 3. Pass-by-reference
    int a = 1;
    int b = 2;

    Swap(a, b);

    cout << "\n" << a << " " << b << "\n";

    return 0;
}