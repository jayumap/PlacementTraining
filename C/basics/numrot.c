#include<stdio.h>
#include<math.h>

int noDigitts(int num){
    int dig = 0;
    while (num>0){
        dig++;
        int num = num/10;
    }
    return dig;
}

int main()
{
    int num,count=1,dig,new;
    scanf("%d",&num);
    
    int digits = noDigitts(num);
    int multiple = pow(10,(digits-1));

    for(int i=1;i<=digits;i++){
        int left = num/10;
        int right = num%10;
        num = right*multiple+left;
        printf("%d\n",num);
    }

    // dig  = num % 10;
    // printf("%d",dig);
    //int fin = new + count*dig;
    //printf("%d",fin);
    return 0;
}