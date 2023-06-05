//wap to print reverse of bnumber
//input: 8912
//output: 2198

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,rem,rev;
    cin>>num;
    while(num>0){
        rem = num%10;
        rev = rev*10+rem;
        num /= 10;
    }
    cout<<rev;
    return 0;
}

