//wap to verift that all of the letters in the second string appear in the first as well
//Return true otherwise false
//example Python Py 
//first string python has py means all letters of second string py so return true

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool verifyLetters(vector<string> first, vector<string> second) {
    for (const string& str : second) {
        // Convert the string to lowercase for case-insensitive comparison
        string lowercaseStr = str;
        transform(lowercaseStr.begin(), lowercaseStr.end(), lowercaseStr.begin(), ::tolower);

        // Check if the lowercase string is present in the first vector
        if (find(first.begin(), first.end(), lowercaseStr) == first.end()) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<string> first, second;
    string input;

    cout << "Enter the elements of the first vector (press Enter after each element, leave input empty to finish):\n";
    while (getline(cin, input) && !input.empty()) {
        first.push_back(input);
    }

    cout << "Enter the elements of the second vector (press Enter after each element, leave input empty to finish):\n";
    while (getline(cin, input) && !input.empty()) {
        second.push_back(input);
    }

    bool result = verifyLetters(first, second);

    cout << (result ? "True" : "False") << endl;

    return 0;
}
