#include <iostream>

using namespace std;

struct Date {
  // data members
  int y, m, d;

  // function members
  Date(int, int, int); // constructor: check for valid date and initialize (constructor: a member function with the same name as its class)
  void add_day(int);
};

Date::Date(int yy, int mm, int dd)
  :y{yy}, m{mm}, d{dd}
  {
  }

void Date::add_day(int n) {
  // Check if the date is the end of the month
  d += n;
}

int main() {
  Date my_birthday {1997, 7, 9};
  my_birthday.add_day(1);

  cout << my_birthday.d;

  add_day(2); // compile-time error: add_day was not declared in this scope

  Date today; // compile-time error: today is not initialize

  // however, one could still modify the data (representation) directly:
  my_birthday.m = 13;
  my_birthday.d = 40;

  // that's when we want to use a class to control access
}