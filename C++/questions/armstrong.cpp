#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,rem,final1=0;
    cin>>num;
    int num1= num;

    //calculate armstrong number
    while(num>0){
        rem = num%10;
        int arm = rem*rem*rem;
        //final1 = final1+(rem*rem*rem);
        final1 += arm;
        num /= 10;
    }

    //check if number and calculated number is same
    if(num1 == final1){
        cout<<"Yes";
    }
    else {
        cout<<"No";
    }
    return 0;
}


