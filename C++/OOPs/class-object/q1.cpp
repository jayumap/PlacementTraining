//create a class of students, student having name 'ram' and 'shaam' repsectively 
//take student id and age and create two objects of the class student
#include<bits/stdc++.h>
using namespace std;

class student{
    public:
        string name;
        int id;
        int age;

};

int main()
{
    student obj1,obj2;
    // obj1.name="ram";
    // obj1.id=1;
    // obj1.age=14;

    cin>>obj1.name;
    cin>>obj1.id;
    cin>>obj1.age;

    obj2.name="shaam";
    obj2.id=2;
    obj2.age=15;

    cout<<obj1.name<<endl;
    cout<<obj1.id<<endl;
    cout<<obj1.age<<endl;

    cout<<obj2.name<<endl;
    cout<<obj2.id<<endl;
    cout<<obj2.age<<endl;
    return 0;
}