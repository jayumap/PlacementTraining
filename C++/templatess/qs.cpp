#include<bits/stdc++.h>
using namespace std;

template<class G>
G grp(G str) {
    int len = str.length();
    int count = 0, ans = 0;
    for (int i = 0; i <= len; i++) {
        if (str[i] == 'P') {
            count++;
        } else if (str[i] == '@') {
            ans = max(ans, count);
            count = 0;
        }
    }
    cout<<ans+1;
}

int main() {
    string str;
    cin >> str;
    //cout << grp(str) << endl;
    int len = str.length();
    int count = 0, ans = 0;
    for (int i = 0; i <= len; i++) {
        if (str[i] == 'P') {
            count++;
        } else if (str[i] == '@') {
            ans = max(ans, count);
            count = 0;
        }
    }
    cout<<ans+1;
    return 0;
}