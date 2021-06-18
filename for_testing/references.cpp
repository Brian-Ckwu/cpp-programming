#include <iostream>

int main()
{
    int i = 1;
    int& j = i;
    std::cout << "The value of i and j are " << i << " " << j << " respectively.\n";

    j = 2;
    std::cout << "The value of i and j are " << i << " " << j << " respectively.\n";

    i = 3;
    std::cout << "The value of i and j are " << i << " " << j << " respectively.\n";

    int k = 4;
    j = k; // This is not reassignment, the j still references to i, this line just change the value of variable i to 4

    std::cout << "The value of i and j are " << i << " " << j << " respectively.\n";

    return 0;
}