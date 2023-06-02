#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l=1,r,v,count=0;
    cout<<"Enter count/range: ";
    cin>>r;
    cout<<"Enter divisor: ";
    cin>>v;
    for(int i=l;i<=r;i++){
        if(i%v==0){
            count++;
        }
    }
    cout<<count;
    return 0;
}
