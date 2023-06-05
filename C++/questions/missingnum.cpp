//wap to find missing number
//input: 1034;
//output: 2
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[n];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[i+1]-1){
            cout<<arr[i]+1;
            break;
        }

    }
    return 0;
}
