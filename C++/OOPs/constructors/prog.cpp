/* create a class name as 'programming' while creating an object of the class
c5 if nothing is passed to it then the message 'i love prog lang' is string is passed replace it with i love 'string'*/

#include<bits/stdc++.h>
using namespace std;

class programming{
    public:
    string str;

    programming(string s){
        str = s;
    }

    void display(){
        cout<<"I love "<<str;
    }


};

int main()
{
    string st;
    cin>>st;
    programming p1(st);
    p1.display();
    return 0;
}