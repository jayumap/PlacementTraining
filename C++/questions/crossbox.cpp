#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num;j++){
            if(i==1 || i==num || j==1 || j==num){
                cout<<" * ";
            }
            else if(i==j || i==num){
                cout<<" * ";
            }
            else if(i==j || i==num-j+1){
                cout<<" * ";
            }
            else{
                cout<<"   ";
            }
        }
        cout<<endl;
    }

    return 0;
}