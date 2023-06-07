//wap to print series of 2 and 4
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num1,num2;
    cin>>num1>>num2;
    for(int i=1;i<=10;i++){
        int mul = num1*i;
        int mul1 = num2*i;
        cout<<num1 <<"*"<< i<<" = "<<mul<<"\n"<<num2<<"*"<<i<<" = "<<mul1<<"\n";
    }
    return 0;
}