#include<bits/stdc++.h>
using namespace std;
int main()
{
    try{
        int num,mod;
        cin>>num;
        for(int i=0;i<=num;i++){
            mod = num%10;
            if(mod==0){
                throw(num);
                break;
            }
            num/=10;
        }
        cout<<"Valid\n";
    }
    catch(int num){
        cout<<"Invalid";
    }
    return 0;
}