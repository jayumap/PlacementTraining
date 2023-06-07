#include<bits/stdc++.h>
using namespace std;

class animal{
    public:
    void eata(){
        cout<<"eats";
    }

};

class dog : public animal{
    public:
    void bark(){
        cout<<"bark";
    }

};

class eat : public dog{
    public:
    void eats(){
        cout<<"eats";
    }

};

int main()
{   
    eat e1;
    e1.bark();
    e1.eats();
    e1.eata();
    return 0;
}