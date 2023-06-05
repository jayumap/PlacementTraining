//wap to check whether the character is uppercase, lowercase or special symbol
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a;
    cin>>a;
    if(int(a)>=65 && int(a)<=90){
        cout<<"uppercase\n";
    }
    else if(int(a)>=97 && int(a)<=122){
        cout<<"lowercase\n";
    }
    else{
        cout<<"symbols";
    }
    return 0;
}