#include<bits/stdc++.h>
using namespace std;
int main()
{
    try{
        int num;
        cin>>num;
        if(num>=1){
            cout<<"Yes\n";
        }
        else{
            throw(num);
        }
    }
    catch(int n1){
        cout<<"No\n";
    }
    return 0;
}


