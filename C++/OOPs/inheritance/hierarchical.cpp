#include<bits/stdc++.h>
using namespace std;

class animal{
    public:
    void eat(){
        cout<<"eat\n";
    }
};

class Dog : public animal{
    public:
    void run(){
        cout<<"runs\n";
    }
};

class Cat : public animal{
    public:
    void sleep(){
        cout<<"sleep\n";
    }
};

int main()
{
    Dog d1;
    d1.eat();
    d1.run();
    Cat c1;
    c1.sleep();
    return 0;
}