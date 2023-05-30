//maximum of 2 and 3 numbers
//calculator using switch
//calculator using fxn
//prime num


//max of 2 numbers
// #include<stdio.h>
// int main()
// {
//     int num1,num2;
//     printf("Enter two numbers: ");
//     scanf("%d%d",&num1,&num2);
//     if(num1>num2){
//         printf("%d is greater than %d",num1,num2);
//     }
//     else
//         printf("%d is greater than %d",num2,num1);

//     return 0;
// }


//max of 3 numbers
// #include<stdio.h>
// int main()
// {
//     int num1,num2,num3;
//     printf("Enter 3 numbers:");
//     scanf("%d%d%d",&num1,&num2,&num3);
//     if(num1>num2){
//         if(num1>num3){
//             printf("%d is greatest ",num1);
//         }
//     }
//     else if(num2>num3){
//         if(num2>num1){
//             printf("%d is greatest ",num2);
//         }
//     }
//     else{
//         printf("%d is greatest ",num3);
//     }

//     return 0;
// }


//calculator using switch
// #include<stdio.h>
// int main()
// {
//     char ch;
//     printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulus");
//     int choice;
//     printf("\nEnter choice:");
//     scanf("%d",&choice);
//     int num1,num2,res;
//     switch (choice)
//     {
//     case 1:
//         printf("Enter two numbers to add: ");
//         scanf("%d%d",&num1,&num2);
//         res = num1+num2;
//         printf("Addition is %d",res);
//         break;
//     case 2:
//         printf("Enter two numbers to subtract: ");
//         scanf("%d%d",&num1,&num2);
//         res = num1-num2;
//         printf("ASubtraction is %d",res);
//         break;
//     case 3:
//         printf("Enter two numbers to multiply: ");
//         scanf("%d%d",&num1,&num2);
//         res = num1*num2;
//         printf("Multiplication is %d",res);
//         break;
//     case 4:
//         printf("Enter two numbers to divide: ");
//         scanf("%d%d",&num1,&num2);
//         res = num1/num2;
//         printf("Division is %d",res);
//         break;
//     case 5:
//         printf("Enter two numbers to mod: ");
//         scanf("%d%d",&num1,&num2);
//         res = num1%num2;
//         printf("Multiplication is %d",res);
//         break; 
//     default:
//         break;
//     }
//     return 0;
// }


//calc using fxn
// #include<stdio.h>
// int add(int num1,int num2){
//     int res = num1+num2;
//     printf("Addition is %d",res);
// }

// int sub(int num1,int num2){
//     int res = num1-num2;
//     printf("Subtraction is %d",res);
// }

// int mult(int num1,int num2){
//     int res = num1*num2;
//     printf("Multiplication is %d",res);
// }

// int div(int num1,int num2){
//     int res = num1/num2;
//     printf("Division is %d",res);
// }

// int main()
// {
//     int choice;
//     printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulus");
//     printf("Enter choice: ");
//     scanf("%d",&choice);
//     int num1,num2;
//     switch (choice)
//     {
//     case 1:
//         printf("Enter two numbers: ");
//         scanf("%d%d",&num1,&num2);
//         add(num1,num2);
//         break;
//     case 2:
//         printf("Enter two numbers: ");
//         scanf("%d%d",&num1,&num2);
//         sub(num1,num2);
//         break;
//     case 3:
//         printf("Enter two numbers: ");
//         scanf("%d%d",&num1,&num2);
//         mult(num1,num2);
//         break;
//     case 4:
//         printf("Enter two numbers: ");
//         scanf("%d%d",&num1,&num2);
//         div(num1,num2);
//         break;
//     default:
//         break;
//     }

    
//     return 0;
// }



//print hello n times using for loop 
//same program using do while loop
//same using while loop
//prime numbers
//print odd numbers till n
//addition of n numbers where n is taken from user also find avg and median
//check for palindrome


#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int n1 = n;
    //using for loop
    printf("\nFor loop");
    for(int i=0;i<n;i++){
        printf("\nHello");
    }

    //using while loop
    int i=1;
    printf("\nWhile loop");
    while(n>0){
        printf("\nHello");
        n--;
    }

    //dowhile loop
    printf("\nDo While loop");
    do
    {
        printf("\nHello");
        n1--;
    } while (n1>0);  
    return 0;
}


//qualifier
//qualified students 
//martial
//interview
//internship
//no stipend

//result 5th june
//martial orientation/kickoff 7th june
//5 weeks martial program

//after martial assessment technical interview, hr interview and then internship