#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,mod1,sum=0,num1;
    cin>>num;
    num1 = num;
    for(int i=1;i<=num;i++){
        mod1 = num%10;
        sum+=mod1*mod1;
        num/=10;
        if(i==num){
            sum=0;
        }
    }

    if(sum%11==0){
        cout<<"Legal";
    }
    else cout<<"Invalid";
    return 0;
}