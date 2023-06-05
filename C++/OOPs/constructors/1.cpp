#include<bits/stdc++.h>
using namespace std;

//parameterized constructord
class abc{
    public:
    //attributes
    int roll;
    float per;
    string name;
    
    public:
    //para constructor 
    abc(int r,float p, string n)//ref variables in ()
    {
        roll = r;
        per = p;
        name = n;
    }

    void display(){
        cout<<roll<<" "<<per<<" "<<name<<" "<<"\n";
    }
};

int main()
{
    abc a = abc(2,7.7,"abc");
    a.display();
    return 0;
}