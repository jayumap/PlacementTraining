#include<stdio.h>
int main()
{
    int num,flag=0;
    printf("Enter any number: ");
    scanf("%d",&num);
    for(int i=2;i<num;i++){
        if(num%i==0){
            printf("Not prime");
            return 0;
        }
    }
    printf("Prime");

    return 0;
}