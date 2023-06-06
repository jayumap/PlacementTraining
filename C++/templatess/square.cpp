// #include<bits/stdc++.h>
// using namespace std;

// template<class S>
//     S sq(S s1){
//         return s1*s1;
//     }

// int main()
// {
//     int a1;
//     cin>>a1;
//     float f1;
//     cin>>f1;
//     double dl;
//     cin>>dl;

//     cout<<sq(a1)<<"\n";
//     cout<<sq(f1)<<"\n";
//     cout<<sq(dl);
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
template<class T, class U>
class A{
    T x;
    U y;
    static int count;
};

int main()
{
    A<char, char> a;
    A<int, int> b;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(b)<<endl;

    return 0;
}