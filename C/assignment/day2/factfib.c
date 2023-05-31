#include<stdio.h>

void factorial(int num){
    int fact=1;
    for(int i=num;i>=1;i--){
        fact = fact*i;
    }
    printf("Factorial of number is: %d",fact);
}

void fibonacci(int num){
    int num1=0, num2=1, num3;
    printf("Fibonacci series is: ");
    printf("%d %d ",num1,num2);
    for(int i=2; i<num; i++){
        num3 = num1+num2; 
        printf("%d ",num3);
        num1=num2;
        num2=num3;
    }
}

int main()
{
    printf("1.Factorial\n2.Fibonacci Series");
    int choice;
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    switch (choice)
    {
    case 1:
        factorial(num);
        break;
    
    case 2:
        fibonacci(num);
        break;

    default:
        break;
    }

    return 0;
}