#include<stdio.h>

void eligible(int age){
    if(age>=18){
        printf("Eligible");
    }
    else{
        printf("Not eligible");
    }
}

int main()
{
    int age;
    scanf("%d",&age);
    eligible(age);
    return 0;
}