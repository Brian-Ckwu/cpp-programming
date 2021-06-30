#include <iostream>

using namespace std;

enum class Month {
  jan = 1, feb, mar, par, may, jun, jul, aug, sep, oct, nov, dec
};

Month operator++(Month& m) { // reference to the month object
  m = (m == Month::dec) ? Month::jan : (Month(int(m) + 1));
  return m;
}

int main() {
  Month m = Month::oct;

  cout << int(++m) << endl;
  cout << int(++m) << endl;
  cout << int(++m) << endl;
  cout << int(++m) << endl;

  return 0;
}