//ostwald and henry
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,sum=0;
    cin>>num;
    int flag=0;
    while(sum!=num){
        if(flag==0){
            sum+=1;
            cout<<"Ostwald: ";
            cout<<sum;
            flag = 1;
        }
        else if(flag==1){
            sum=2;
            cout<<"Henry: ";
            cout<<sum;
            flag = 0;
        }
    }
    // if(flag==1) cout<<"Ostwald";
    // else cout<<"Henry";
    return 0;
}