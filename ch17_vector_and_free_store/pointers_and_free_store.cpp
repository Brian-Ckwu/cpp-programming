#include <iostream>

using namespace std;

void null_pointer() {
  double* p1 = new double;
  double* p2 = nullptr;

  cout << p1 << endl;
  cout << p2 << endl;
}

void deallocate_memory() {
  int* ptr = new int[10000];
  delete[] ptr;
}

int main() {
  null_pointer();
  deallocate_memory();

  double* ptr = new double[4]; // allocate sizeof(double) * 4 bytes on the free store (heap) & return the pointer to the first double

  // char* cptr = new double; // error: double* cannot be assigned to char*

  double a1 = *ptr; // assign the value of the first object pointed by ptr to "another" area of memory named a
  double b1 = ptr[2]; // assign the value of the third object pointed by ptr to "another" area of memory named b
  double& a2 = *ptr; // reference to the area of memory ptr pointed to
  double& b2 = ptr[2];

  cout << a1 << " " << b1 << endl; // what would be the value? random?
  cout << a2 << " " << b2 << endl; // what would be the value? random?

  *ptr = 10;
  ptr[2] = 15;

  cout << a1 << " " << b1 << endl;
  cout << a2 << " " << b2 << endl;

  a2 = 11;
  b1 = 11;

  cout << *ptr << " " << ptr[2] << endl; // 11 15

  return 0;
}