//wap to print details of employee by creating class of emp 

#include<bits/stdc++.h>
using namespace std;

class emp{
    public:
    int id;
    float salary;
    string name;

    emp(int i, float s, string n){
        id = i;
        salary = s;
        name = n;
    }

    void display(){
        cout<<"\nName: "<<name<<"\nSalary: "<<salary<<"\nID: "<<id;
    }
};

int main()
{
    int id1;
    float sal1;
    string name1;
    cin>>id1>>sal1>>name1;
    emp e1(id1,sal1,name1);
    cin>>id1>>sal1>>name1;
    emp e2(id1,sal1,name1);
    e1.display();
    e2.display();

    return 0;
}