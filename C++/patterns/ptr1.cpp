//wap to print triangle pattern, square pattern, triangle with numbers and alphabets;

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
            else{
                cout<<"   ";
            }  
        }
        cout<<"\n";
    }
    return 0;
}