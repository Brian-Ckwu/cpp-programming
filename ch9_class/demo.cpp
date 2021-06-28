#include <iostream>

using namespace std;

class X {
  int n = 0;
 public:
  int m;
  
  int set_value(int v) {
    int old = m;
    m = v;
    return old;
  }

  int get_n() {
    return n;
  }
};

int main() {
  X obj;
  obj.m = 5;
  int x = obj.set_value(7);

  cout << x << " " << obj.m << endl;
  cout << obj.get_n();
}