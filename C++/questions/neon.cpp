//wap to check whether number is neon number or not

//example 9: 


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,sqr,sum1=0,rem;
    cin>>num;
    sqr = num*num;
    while(sqr>0){
        rem = sqr%10;
        sum1 += rem;
        sqr /= 10;
    }

    if(num==sum1){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}