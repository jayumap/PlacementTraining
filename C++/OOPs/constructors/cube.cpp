#include<bits/stdc++.h>
using namespace std;

class cube{
    public:
    int side,cub;

    cube(int s){
        side = s;
        cub = s*s*s;
    }

    void display(){
        cout<<cub;
    }

};

int main()
{
    int s1;
    cin>>s1;

    cube c1(s1);
    c1.display();

    return 0;
}