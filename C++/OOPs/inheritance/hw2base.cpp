//create two base class 'A' and 'B' A inherit two subclasses 

#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    void display(){
        cout<<"A base class\n";
    }
};

class A1:public A{
    public:
    void basedisplay(){
        cout<<"A1 subclass\n";
    }
};

class A2:public A{
    public:
    void basedisplay2(){
        cout<<"A2 subclass\n";
    }
};

int main()
{
    A1 a1; A2 a2;
    a1.display();
    a2.display();
    return 0;
}