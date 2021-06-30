#include <iostream>

using namespace std;

class Error {};

enum class Month {
  jan = 1, feb, mar, par, may, jun, jul, aug, sep, oct, nov, dec
};

enum Month2 {}; // prefer enum class

Month int_to_month(int n) {
  if (n < int(Month::jan) || n > int(Month::dec)) {
    throw Error {};
  }
  return Month(n);
}

int main() {
  Month m = Month::jul;
  // Month m2 = 10; // error: cannot assign int to Month
  Month m3 = Month(10); // OK but unchecked, suppose what will happen if we use Month(9999)?
  Month m4 = int_to_month(7); // better
  Month m5 = int_to_month(999); // run-time error?

  cout << (int) m << endl;
  // cout << feb; // error: feb is not declared in this scope
  cout << int(Month::jun) << endl; // (int) expr & int(expr) are equivalent
  cout << int(m3) << endl;
  cout << int(m4) << endl;

  return 0;
}