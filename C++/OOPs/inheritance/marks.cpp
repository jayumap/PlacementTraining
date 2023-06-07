#include <iostream>
using namespace std;

int main() {
    
    string str;
    getline(cin,str);

    for (int i = 0; i < str.length(); i++) {
        char c = tolower(str[i]);
        int isRepeated = 0;

        for (int j = 0; j < str.length(); j++) {
            if (i != j && tolower(str[j]) == c) {
                isRepeated = 1;
                break;
            }
        }

        if (isRepeated==0 && !isspace(c)){
            cout <<i<< endl;
            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}
