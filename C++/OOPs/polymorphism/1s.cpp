//wap to replace every zeros with one
//input: 1010
//output: 1111

#include<bits/stdc++.h>
using namespace std;

void replaceZeroes(string num){
    int n = num.length();
    for(int i=0;i<n;i++){
        if(num[i]=='0'){
            num[i]='1';
        }
    }
    cout<<num;
}

int main()
{
    string num;
    getline(cin, num);
    replaceZeroes(num);
    return 0;
}