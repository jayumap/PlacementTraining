//check whether number is perfect number or not
//print the series of perfect number
#include<bits/stdc++.h>
using namespace std;

void checkPerfect(){
    int num,sum=0;
    cin>>num;
    for(int i=1;i<num;i++){
        if(num%i==0){
            sum+=i;
        }
    }
    //cout<<sum<<"\n";
    (num==sum) ?cout<<"perfect\n":cout<<"imperfect\n";
}

void seriesPerfect(){
    int range,num,sum;
    cin>>range;
    //for loop from 1 to the last number accepted by user
    for(int num=1;num<=range;num++){
        sum = 0;
        //for loop to calculate whether number is perfect or not
        for(int i=1;i<num;i++){
            if(num%i==0){
                sum+=i; 
            }
        }
        if(num==sum) cout<<num<<"\n";    
    }
}

int main()
{
    checkPerfect();
    seriesPerfect();
    return 0;
}