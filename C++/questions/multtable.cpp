//wap to print multiplication table of 10
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,mul=1;
    cin>>num;
    for(int i=1;i<=10;i++){
        mul = num*i;
        cout<<mul<<"\n";
    }
    return 0;
}

