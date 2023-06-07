#include<bits/stdc++.h>
using namespace std;

class animal{
    public:
    void eat(){
        cout<<"eat\n";
    }
};

class mammal{
    public:
    void attack(){
        cout<<"attck\n";
    }
};

class Dog : public animal{
    public:
    void run(){
        cout<<"runs\n";
    }
};

int main()
{
    Dog d1;
    d1.eat();
    d1.run();
    return 0;
}