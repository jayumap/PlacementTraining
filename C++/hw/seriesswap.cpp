#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    cout<<0<<" "<<0<<" ";
    int odd = 1;
    int even = 2;
    for(int i=1;i<=num;i++){

        // //logic1 using only i
        // if(i%2==0){
        //     cout<<i-1<<" ";            
        // }
        // else{
        //     cout<<i+1<<" ";
        // }

        //logic 2 using two variables;
        if(i%2==0){
            cout<<odd<<" ";
            odd+=2;
        }
        else{
            cout<<even<<" ";
            even+=2;
        }
    }
    return 0;
}

