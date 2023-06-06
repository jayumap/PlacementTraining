//wap to find large number by using template class
#include<bits/stdc++.h>
using namespace std;

template<class T>
    T large(T n1, T n2){
        if(n1>n2){
            return n1;
        }
        else return n2;
    }

int main(){
    int a1,a2;
    float b1,b2;
    cin>>a1>>a2;
    cout<<large(a1,a2)<<" is large\n";
    return 0;
}