#include<bits/stdc++.h>
using namespace std;

//circle
void area(int x){
    float pi = 3.14;    
    cout<<"Area of circle: "<<2*pi*x<<endl;
}

//rectangle
void area(int x, int y){
    cout<<"Area of rectangle: "<<x*y<<endl;
}

//triangle
void area(int x, int y, int z){
    cout<<"Area of triangle: "<<x*y*z<<endl;
}

int main()
{
    //circle
    area(2);
    //rect
    area(2,4);
    //triangle
    area(2,4,6);
    return 0;
}