#include <iostream>

using namespace std;

class Date {
 public:
  class Invalid {}; // why public?
  Date(int y, int m, int d);

  int year() { return y; }
  int month() { return m; }
  int day() { return d; }

 private:
  int y;
  int m;
  int d;

  bool is_valid(); // check for valid date
};

Date::Date(int yy, int mm, int dd)
  : y{yy}, m{mm}, d{dd} { // initialization
    if (!is_valid()) { // implement is_valid() separately because it's logically distinct from initializing an object
      cout << "throw an invalid class" << endl;
      throw Invalid {};
    }
  }

bool Date::is_valid() { // implicit argument: the object of the Date class
  if (y < 0 || y > 2021)
    return false;
  if (m < 1 || m > 12)
    return false;
  if (d < 1 || d > 31)
    return false;

  return true;
}

int main() {
  Date birthday {1997, 7, 10}; // valid date
  
  try {
    Date another_birthday {1997, -7, 10}; // invalid date
    cout << "My birthday is: " << birthday.year() << "-" << birthday.month() << "-" << birthday.day() << endl;
  }
  catch (Date::Invalid) {
    cout << "Invalid date.";
  }

  return 0;
}