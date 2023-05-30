#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int num1 = num;
    int rev=0,rem;
    while(num!=0){
        rem = num%10;
        rev = rev*10+rem;
        num = num/10;
    }
    printf("%d",rev);

    if(num1==rev){
        printf("\npalindrome");
    }
    else
        printf("\nnot palindrome");
    return 0;
}