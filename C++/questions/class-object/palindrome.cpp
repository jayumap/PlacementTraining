//write a program to print series even position odd numbers and odd position even numbers 
//wap to check number is palindrome or not 
//wap to check whether number is perfect
//check prime, and print the series 

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,rev=0,rem;
    cin>>num;
    int num1 = num;
    while(num!=0){
        rem = num%10;
        rev = rev*10+rem;
        num = num/10;
    }
    if(num1==rev) cout<<"palindrome";
    else cout<<"not palindrome";
    return 0;
}