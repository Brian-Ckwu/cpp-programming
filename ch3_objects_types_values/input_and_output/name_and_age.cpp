#include "../../header_files/std_lib_facilities.h"

int main()
{
    // Definitions
    string name = "";
    double age = 0;

    // Prompt for input
    cout << "Please enter your first name and age: ";
    cin >> name >> age;

    // Display output
    cout << "Your name is " << name << ". " << "You are " << age * 12 << " months old.";

    return 0;
}