#include<stdio.h>
int main()
{
    int income,dep;
    printf("Enter income (in $): ");
    scanf("%d",&income);

    printf("Enter the number of dependents: ");
    scanf("%d",&dep);
    income = income - (dep)*1000;
    printf("Final income(in $) is: %d",income);

    
    return 0;
}