//session1
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


//prime number
#include<stdio.h>
int main()
{
    int num,flag=0;
    printf("Enter any number: ");
    scanf("%d",&num);
    for(int i=2;i<num;i++){
        if(num%i==0){
            printf("Not prime");
            return 0;
        }
    }
    printf("Prime");
    return 0;
}