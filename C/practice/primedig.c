#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    //printf("%d",num);
    while(num){
        int dig = num%10;
        if(dig==2 | dig==3 | dig==5 | dig==7){
            printf("%d",dig);
            num/=10;
        }
    } 
    return 0;
}