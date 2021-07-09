#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void read_tests_write_ans() {
  int kFileNum = 24;
  int kFileLen = 2;

  for (int i = 1; i <= kFileNum; ++i) {
    string file_index = to_string(i);
    string case_file = string(kFileLen - file_index.length(), '0') + file_index;  // pad leading zeros
    string ans_file = case_file + ".a";

    string file_folder = "./tests/";
    ifstream ist;
    // Open case file
    ist.open(file_folder + case_file);
    if (!ist) { // check opened
      throw "ERROR";
    }

    // Output case
    cout << "Test case #" << file_index << ":" << endl;

    int nnodes = -1;
    ist >> nnodes;
    cout << nnodes << " nodes in total" << endl;

    int nodes_read = 0;
    for (int p_index; ist >> p_index; ) {
      ++nodes_read;
    }
    cout << nodes_read << " nodes read" << endl;
    // Close case file
    ist.close();

    // Open ans file
    ist.open(file_folder + ans_file);
    if (!ist) {
      throw "ERROR";
    }

    // Output ans
    int tree_height = -1;
    ist >> tree_height;
    cout << "The tree height is " << tree_height << endl << endl;

    // Close ans file
    ist.close();
  }
}

void test_reading() {
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
}

int main() {
  // test_reading();
  read_tests_write_ans();

  return 0;
}