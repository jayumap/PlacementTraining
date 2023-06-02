//program to print area and perimeter if traingle having sides of 6,2,8 units by creating a class
//name triangle with a function print the area and perimeter

#include<bits/stdc++.h>
using namespace std;

class triangle{
    public:
        int side1,side2,side3;
    
    public:
        void displayArea(int side1,int side2, int side3){
            // int area = 0.5*(side1)*(side2);
            int s = (side1+side2+side3)/2;
            int area = sqrt(s*(s-side1)*(s-side2)*(s-side3));
            cout<<area<<endl;
        }

        void displayPerimeter(int side1,int side2,int side3){
            int peri = side1+side2+side3;
            cout<<peri<<endl;
        }

};

int main()
{
    triangle obj1,obj2;
    cin>>obj1.side1;
    cin>>obj1.side2;
    cin>>obj1.side3;

    obj1.displayArea(obj1.side1,obj1.side2,obj1.side3);
    obj1.displayPerimeter(obj1.side1,obj1.side2,obj1.side3);
    return 0;
}