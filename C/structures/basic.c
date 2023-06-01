#include<stdio.h>
#include<string.h>

struct customer{
    char *name;
    int accNo;
    int amount;
    char *address;
};

int main()
{
    int n;
    struct customer cust[10];
    printf("Enter the number of customers: ");
    scanf("%d",&n);

    printf("Enter customer details: \n");
    for(int i=0;i<n;i++){
        printf("\nEnter name: ");
        scanf("%s",&cust[i].name);
        printf("Enter Account Number: ");
        scanf("%d",&cust[i].accNo);
        printf("Enter Amount: ");
        scanf("%d",&cust[i].amount);
        printf("Enter Address: ");
        scanf("%s",&cust[i].address);
    }

    printf("\n\nCustomer details are: ");
    for (int i=0; i<n; i++){
        printf("\n%s\n",&cust[i].name);
        printf("%d\n",cust[i].accNo);
        printf("%d\n",cust[i].amount);
        printf("%s\n",&cust[i].address);
    }
    return 0;
}