#include <iostream>

using std::cout;

class MyDoubleVector {
 public:
  MyDoubleVector(int s) // constructor
    : sz{s},
      elem{new double[s]} {
        for (int i = 0; i < s; ++i) {
          elem[i] = 0;
        }
      }
  ~MyDoubleVector() { delete[] elem; } // destructor: prevent memory leak
  
  int size() const { return sz; }

  double get(int n) { return elem[n]; }
  void set(int n, double v) { elem[n] = v; }

 private:
  int sz;
  double* elem;
};

int main() {
  const int kVectorSize = 5;
  MyDoubleVector v {kVectorSize}; // () & {} are both valid (prefer () by convention)

  v.set(1, 1);
  v.set(3, 2);

  for (int i = 0; i < kVectorSize; ++i) {
    cout << v.get(i) << " ";
  }

  return 0;
}