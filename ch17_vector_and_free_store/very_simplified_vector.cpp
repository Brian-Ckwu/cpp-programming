#include <iostream>

using namespace std;

class MyDoubleVector { // simulate vector<double>
 public:
  MyDoubleVector(int s); // allocate memory of corresonding size, make the pointer point to them, and store s in sz
  int size() const { return sz; } // const: shows that this member function would not modify the object (const member)
 private:
  int sz;
  double* elem; // pointer to the element of type double
}

int main() {
  
  return 0;
}