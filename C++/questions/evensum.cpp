//wap to calculate sum of the even numbers from range 1-20 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,sum=0,sum1=0;
    cin>>num;
    for(int i=1;i<=num;i++){
        //for even
        if(i%2==0){
            sum+=i;
        }
        //for odd
        if(i%2!=0){
            sum1+=i;
        }
    }
    cout<<sum<<"\n";
    cout<<sum1<<"\n";
    return 0;
}