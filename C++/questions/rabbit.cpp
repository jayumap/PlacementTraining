#include<bits/stdc++.h>
using namespace std;
int main()
{
    int dest,step=0;
    cin>>dest;
    int mod = dest%5;
    if(mod==0){
        int quot = dest/5;
        cout<<quot;
    }
    else if(mod!=0){
        while(dest>0){
            int quot = dest/5;
            //cout<<quot;
            if(mod<5){
                cout<<quot+1;
                break;
            }
            break;
        }
    }
    else if(dest<=5){
        cout<<"1";
    }
    return 0;
}