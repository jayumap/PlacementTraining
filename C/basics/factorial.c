#include<stdio.h>

int fact(int num){
    if(num==0){
        return 1;
    }
    else{
    return num*fact(num-1);
    }
}

int main()
{
    int num1,num2;
    printf("Enter number1: ");
    scanf("%d",&num1);
    printf("Enter number2: ");
    scanf("%d",&num2);
    if(num1>num2){
        int result = fact(num2);
        printf("%d",result);
    }
    else{
        int result = fact(num1);
        printf("%d",result);
    }
    
    return 0;
}