#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
    // Declaration
    std::vector<std::string> words;

    // Read the words
    std::cout << "Please enter some words: ";
    for (std::string word; std::cin >> word;) {
        words.push_back(word);
    }

    // Sort the words
    std::sort(words.begin(), words.end());

    // Display the words
    for (std::string word : words) {
        std::cout << word << "\n";
    }

    return 0;
}