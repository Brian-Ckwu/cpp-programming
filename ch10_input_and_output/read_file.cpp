#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  string filename = "./tests/01";
  ifstream ist(filename);// ist == input stream

  if (!ist) {
    cout << "No such file." << endl;
    throw "ERROR: FAIL TO OPEN FILE";
  }
  
  cout << "File opened." << endl;
  for (int i; ist >> i;) {
    cout << i << " ";
  }

  return 0;
}