//wap to program to swap two variables without using 3rd variable

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    //a=5;b=2;
    cin>>a>>b;

    cout<<"using addition\n";
    a=a+b;//a=7
    b=a-b;//b=5
    a=a-b;//a=2
    cout<<a<<b;

    cout<<"using multiplication";
    a=a*b;
    b=a/b;
    a=a/b;
    cout<<a<<b;

    return 0;
}

//wap to calculate greatest of 3 numbers and print app msg;