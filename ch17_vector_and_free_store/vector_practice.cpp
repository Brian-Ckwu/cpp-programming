#include <iostream>

using namespace std;

class Vector {
 public:
  // Interface
  Vector(int n); // constructor
  ~Vector(); // destructor

  int size() const { return sz; }
  double get(int i) { return elem[i]; }
  void set(int i, double v) { elem[i] = v; }
 private:
  int sz;
  double* elem;
};

// Implementation
Vector::Vector(int n)
  : sz{n},
    elem{new double[n]} {
      for (int i = 0; i < n; ++i) {
        elem[i] = 0.0;
      }
    }

Vector::~Vector() {
  delete[] elem;
}

int main() {
  const int kVecSize = 6;
  Vector myvec(kVecSize);

  myvec.set(2, 1);
  for (int i = 0; i < kVecSize; ++i) {
    cout << myvec.get(i) << " ";
  }

  const int kVecSize2 = 7;
  Vector* vptr = new Vector(kVecSize2);

  cout << "\nThis size of *vptr is: " << vptr->size() << endl;
  cout << "The elements are: ";
  for (int i = 0; i << kVecSize2; ++i) {
    cout << vptr->get(i) << " "; // no default initializer?
  }

  return 0;
}

// from laptop (test git push)