//wap to take person age 28 and check whether the person is eligible for voting and 
//print appropriate msg otherwise throw exception

#include<bits/stdc++.h>
using namespace std;
int main()
{
    try{
    int age;
    cin>>age;
    if(age>28){
        cout<<"Eligible\n";
    } else{
        throw(age);
    }
    }
    catch(int age){
        cout<<"Not eligible\n";
        cout<<"Age is: "<<age;
    }


    
    return 0;
}