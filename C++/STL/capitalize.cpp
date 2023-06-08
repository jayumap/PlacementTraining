//write a program to capitalize first character or each element of given string vector. Return the vector
//eg: original vector elements:
//red green black white Pink
//capitalize first character of each vector element
//Red Green Black White Pink 

#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

vector<string> capitalizeFirstCharacter(const vector<string>& input) {
    vector<string> result;

    for (const string& str : input) {
        if (!str.empty()) {
            string capitalized = str;
            capitalized[0] = toupper(capitalized[0]);
            result.push_back(capitalized);
        } else {
            result.push_back(str);
        }
    }

    return result;
}

int main() {
    vector<string> originalVector;

    cout << "Enter string inputs :\n";

    string input;
    while (true) {
        getline(cin, input);
        if (input.empty()) {
            break;
        }
        originalVector.push_back(input);
    }

    cout << "Original vector elements: ";
    for (const string& str : originalVector) {
        cout << str << " ";
    }
    cout << endl;

    vector<string> capitalizedVector = capitalizeFirstCharacter(originalVector);

    cout << "Capitalized vector elements: ";
    for (const string& str : capitalizedVector) {
        cout << str << " ";
    }
    cout << endl;

    return 0;
}
