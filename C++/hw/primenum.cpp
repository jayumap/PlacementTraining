//check whether number is prime or not
//print the series of prime number
#include<bits/stdc++.h>
using namespace std;

void checkPrime(){
    int num;
    cin>>num;
    int flag=1;
    for(int i=2;i<num;i++){
        if(num%i==0){
            flag=0;
        }
    }
    (flag)?cout<<"prime":cout<<"not prime";
}

void seriesPrime(){
    int range;
    cin >> range;
    for(int num = 2; num <= range; num++){
        int flag = 1;
        for(int i = 2; i < num; i++){
            if(num % i == 0){
                flag = 0;
                break;
            }
        }
        if(flag==1){
            cout << num << " ";
        }
    }

    cout << "\n";
}

int main()
{
    
    checkPrime();
    seriesPrime();
    return 0;
}