//Q2. wap to check whether the number is positive or negative or zero by using conditional statements 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //variable declaration
    double num;
    cin>>num;

    if(num>0){
        cout<<"Positive";
    }
    else if (num<0){
        cout<<"Negative";
    }
    else cout<<"Number is 0";

    
    return 0;
}