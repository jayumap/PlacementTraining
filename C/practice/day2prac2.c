//session2
//print hello n times using for loop 
//same program using do while loop
//same using while loop
//prime numbers
//print odd numbers till n
//addition of n numbers where n is taken from user also find avg and median
//check for palindrome


//print hello world n times using for, while and do while
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int n1 = n;
//     //using for loop
//     printf("\nFor loop");
//     for(int i=0;i<n;i++){
//         printf("\nHello");
//     }

//     //using while loop
//     int i=1;
//     printf("\nWhile loop");
//     while(n>0){
//         printf("\nHello");
//         n--;
//     }

//     //dowhile loop
//     printf("\nDo While loop");
//     do
//     {
//         printf("\nHello");
//         n1--;
//     } while (n1>0);  
//     return 0;
// }


//print odd numbers till n
// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter number: ");
//     scanf("%d",&num);
//     for(int i=1;i<=num;i++){
//         if(i%2!=0){
//             printf("%d\n",i);
//         }
//     }
//     return 0;
// }


//palindrome
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

