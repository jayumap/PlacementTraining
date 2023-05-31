#include<stdio.h>
#include<string.h>

struct customer{
    char *name;
};

int main()
{
    struct customer cust[10];
    scanf("%s",&cust[0].name);
    printf("%s",&cust[0].name);
    return 0;
}