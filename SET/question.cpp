#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
bool isPangram(const string& str) {
    unordered_set<char> letters;

    // Iterate through each character in the string
    for (char ch : str) {
        // Convert to lowercase and check if it's an alphabet character
        if (isalpha(ch)) {
            letters.insert(tolower(ch));
        }
    }

    // Check if we have all 26 letters
    return letters.size() == 26;
}

int main() {
    string input;

    cout << "Enter a string: ";
    getline(cin, input); // Read the entire line including spaces

    if (isPangram(input)) {
        cout << "The string is a pangram." << std::endl;
    } else {
        cout << "The string is not a pangram." << std::endl;
    }

    return 0;
}