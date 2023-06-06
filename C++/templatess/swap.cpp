//swap using template
#include<bits/stdc++.h>
using namespace std;

template<class S>
    S swapp(S n1, S n2){
        S temp;
        temp = n1;
        n1 = n2;
        n2 = temp;
        cout<<n1<<n2;
        // return 0;
    }

int main()
{
    int a1,a2;
    cin>>a1>>a2;
    swapp(a1,a2);
    return 0;
}