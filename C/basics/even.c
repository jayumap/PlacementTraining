#include<stdio.h>
int main()
{
printf("Enter any number:");
int num;
scanf("%d", &num);
for(int i=1; i<=num; i++){
    if(i%2==0){
        printf("\n%d",i);
    }
}
    return 0;
}