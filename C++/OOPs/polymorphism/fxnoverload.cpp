#include<bits/stdc++.h>
using namespace std;


int main()
{
    sum(2,3);
    sum(5,6,7);
    sum(1,2,3,4);
    return 0;
}

void sum(int x, int y){
    cout<<x+y;
}


void sum(int x, int y, int z){
    cout<<x+y+z;
}

void sum(int x, int y, int z, int q){
    cout<<x+y+z+q;
}
