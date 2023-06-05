#include<bits/stdc++.h>
using namespace std;

class areaRect{
    public:
    int len,bred,area;

    areaRect(int l, int b){
        len = l;
        bred = b;
        area = l*b;
    }

    void display(){
        cout<<area;
    }

    ~areaRect(){
        cout<<"\nDest called";
    }
};

int main()
{
    int l1,b1;
    cin>>l1>>b1;
    areaRect a1(l1,b1);
    a1.display();
    return 0;
}

