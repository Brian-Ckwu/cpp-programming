#include <iostream>

using namespace std;

struct Date {
  int y;
  int m;
  int d;
};

// Helper functions
void init_day(Date& dd, int y, int m, int d) {
  // simple check for validity of the date
  if (y > 0 && m > 0 && m < 13 && d > 0 && d < 32) {
    dd.y = y;
    dd.m = m;
    dd.d = d;
  } else {
    cout << "Invalid date." << endl;
  }
}

void add_day(Date& dd, int n) {
  // increase the date 'dd' by n days
}

int main() {
  Date today;
  // Error prone
  today.y = -3;
  today.m = 13;
  today.d = 32;

  // Use helper functions and try to avoid this issue
  Date another_day;
  init_day(another_day, 2012, -3, 12);
  init_day(another_day, -1, 3, 14);
  init_day(another_day, 2021, 6 ,28);

  // However, sometimes the helper functions might be forgotten
  // We can still do this:
  Date yet_another_day;
  yet_another_day.y = -100;
  yet_another_day.d = 10;
  yet_another_day.d += 1; // Forget to use add_day

  cout << another_day.y << endl;
}