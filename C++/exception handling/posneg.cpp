#include<bits/stdc++.h>
using namespace std;
int main()
{
    try{
        int num;
        cin>>num;
        if(num>0){
            cout<<"Positive\n";
        }
        else if(num<0){
            cout<<"negative";
        }
        else{
            throw(num);
        }
    }
    catch(int n){
            cout<<"invalid number\n";
    }
    return 0;
}