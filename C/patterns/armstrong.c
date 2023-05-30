#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    int final,count=0;
    scanf("%d",&num);
    int num1 = num;
    while(num!=0){
        num = num/10;
        count++;
    }
    printf("%d",count);
    
    int num2 = num1;
    while(num1!=0){
        int mod = num1%10;
        int arm = mod*mod*mod;
        final += arm;
        num1 = num1/10;
    }
    printf("%d",final);
    num1==final?printf("\narmstrong number"):printf("\nnot an armstrong number");

    return 0;
}