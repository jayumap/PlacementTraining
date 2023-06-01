#include<stdio.h>
int main()
{
    int a =10;
    int *p;
    p=&a;
    printf("%d",a);//prints value of a
    printf("\n%d",p);//prints address of a
    printf("\n%d",&a);//prints address of a
    printf("\n%d",*p);//prints value of a
    printf("\n%d",&p);//prints address of pointer p
    printf("\n%d",*(&a));//prints value of a

    p++;
    //address moves ahead by 4 bytes
    printf("\n\nAfter pointer increment");
    printf("%d",a);//prints value of a
    printf("\n%d",p);//prints address of a
    printf("\n%d",&a);//prints address of a
    printf("\n%d",*p);//prints unknown value
    printf("\n%d",&p);//prints address of pointer p
    printf("\n%d",*(&a));//prints value of a

    //address
    //datatype must be same

    

    return 0;
}