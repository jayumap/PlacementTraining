//create a class of employee and pass 3 attributes 
// pvt salary(float), int id, name;
#include<bits/stdc++.h>
using namespace std;

class employee{
    public:
        int id;
        string name;
    
    private:
        float salary;
    
    public:
    // Setter
    void setSalary(float s) {
      salary = s;
    }
    // Getter
    float getSalary() {
      return salary;
    }
};

int main()
{
    employee emp1;
    float s;
    cin>>emp1.id;
    cin>>emp1.name;
    //cin>>salary;
    cin>>s;
    emp1.setSalary(s);

    cout<<emp1.id<<endl;
    cout<<emp1.name<<endl;
    cout<<emp1.getSalary();
    return 0;
}