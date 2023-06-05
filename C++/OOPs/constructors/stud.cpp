#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    string name;
    int marks; 
    char grade;

    student(string n, int m, char g){
        name = n;
        marks = m;
        grade = g;
    }

    void display(){
        cout<<name<<"\n";
        cout<<marks<<"\n";
        cout<<grade<<"\n";
    }
};

int main()
{
    student s1("abc",100,'A');
    //student s2()
    s1.display();
    return 0;
}