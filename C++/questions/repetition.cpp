#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int maxDigit = 0;
    int maxCount = 0;
    for(int digit=0;digit<=9;digit++){
        int count=0;
        int temp = n;
        while(temp>0){
            if(temp%10==digit){
                count++;
            }
            temp /= 10;
        }
        if(count>maxCount){
            maxDigit = digit;
            maxCount = count;
        }
    }
    cout<<maxDigit<<"\n";
    cout<<maxCount;
    return 0;
}

//excep handling code ATM PIN valid and invalid 
//sample input- 1284 output -valid atm pin
//sample input- 0000 output -invalid