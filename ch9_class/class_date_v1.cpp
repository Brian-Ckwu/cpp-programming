#include <iostream>

using namespace std;

class Date {
 public:
  Date(int y, int m, int d);
  void add_day(int n);
  
  int year() { return y; } // These functions can access data members wherever they are (in this case, the declarations of y, m, d are after these functions)
  int month() { return m; }
  int day() { return d; }
 private:
  int y;
  int m;
  int d;
};

Date::Date(int yy, int mm, int dd)
  :y{yy}, m{mm}, d{dd}
  {
  }

void Date::add_day(int n) {
  d += n;
}

int main() {
  Date birthday {1997, 7, 10};
  // cout << birthday.m << " " << birthday.d; // private members not accessible
  cout << birthday.month() << " " << birthday.day(); // this is OK

  // birthday.y = 1996; // y is a private member

  return 0;
}