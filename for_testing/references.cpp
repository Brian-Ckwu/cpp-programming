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

    return 0;
}