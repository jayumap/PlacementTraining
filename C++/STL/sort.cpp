//sort function to sort array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    sort(begin(arr),end(arr));
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
    
    return 0;
}