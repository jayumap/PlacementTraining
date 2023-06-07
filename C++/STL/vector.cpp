//begin and end are modifiers of iterator
//vector is a container

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v ={1,2,3,4};
    vector<int>::iterator p;
    for(p=v.begin();p<v.end();p++){
        cout<<*p;
    }
    return 0;
}