#include <iostream>

#include <iostream>

using namespace std;

enum class Month {
  jan = 1, feb, mar, par, may, jun, jul, aug, sep, oct, nov, dec
};

class Date {
 public:
  class Invalid {}; // why public?
  Date(int y, Month m, int d);

  int year() { return y; }
  Month month() { return m; }
  int day() { return d; }

 private:
  int y;
  Month m;
  int d;

  bool is_valid(); // check for valid date
};

Date::Date(int yy, Month mm, int dd)
  : y{yy}, m{mm}, d{dd} { // initialization
    if (!is_valid()) { // implement is_valid() separately because it's logically distinct from initializing an object
      cout << "throw an invalid class" << endl;
      throw Invalid {};
    }
  }

bool Date::is_valid() { // implicit argument: the object of the Date class
  if (y < 0 || y > 2021)
    return false;
  if (d < 1 || d > 31)
    return false;

  return true;
}

int main() {
  // Date birthday {1997, 7, 10}; // valid date, but have to change to the next line
  Date new_birthday {1997, Month::jul, 10};
  
  cout << (int) new_birthday.month();

  return 0;
}