//wap to program to convert kms into mts
//wap to program to check eligible for voting
#include<bits/stdc++.h>
using namespace std;

void kmstoms(){
    float num;
    cin>>num;
    int ms = num*1000;
    cout<<ms;
}

void eligible(){
    int num;
    cin>>num;
    if(num>=18){
        cout<<"yes\n";
    }
}

int main()
{
    kmstoms();
    eligible();
    return 0;
}