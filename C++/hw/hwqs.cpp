//wap to reverse words in a string
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    reverse(str.begin(), str.end());
    //cout<<str;
    str.insert(str.end(),' ');
    int j=0;
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            reverse(str.begin()+j,str.begin()+i);
            j=i+1;
        }
    }
    cout<<str;
    return 0;          
}