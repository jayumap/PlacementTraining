#include<bits/stdc++.h>
using namespace std;

template<class A>
    A addition(A a1, A a2){
        return a1+a2;
    }

template<class S>
    S subtraction(S a1, S a2){
        return a1-a2;
    }

template<class M>
    M multiplication(M a1, M a2){
        return a1*a2;
    }

template<class D>
    D division(D a1, D a2){
        return a1/a2;
    }

int main()
{
    int a1,a2;
    cin>>a1>>a2;
    cout<<addition(a1,a2)<<"\n";
    cout<<subtraction(a1,a2)<<"\n";
    cout<<multiplication(a1,a2)<<"\n";
    cout<<division(a1,a2)<<"\n";
    return 0;
}