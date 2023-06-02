#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    cout<<0<<" "<<1<<" ";
    for(int i=0;i<=num;i++){
        if(i%2==0){
            cout<<i-1<<" ";
        }
        else{
            cout<<i+1;
        }
    }
    return 0;
}