//session1
//maximum of 2 and 3 numbers
//calculator using switch
//calculator using fxn
//prime num


// //max of 2 numbers
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


// //max of 3 numbers
// #include <stdio.h>
// int main() {
//     int num1, num2, num3;
//     printf("Enter 3 numbers: ");
//     scanf("%d %d %d", &num1, &num2, &num3);

//     if (num1 == num2 && num2 == num3) {
//         printf("All the numbers are the same\nThe greatest number is: %d", num1);
//     } else if (num1 >= num2 && num1 >= num3) {
//         printf("%d is the greatest", num1);
//     } else if (num2 >= num1 && num2 >= num3) {
//         printf("%d is the greatest", num2);
//     } else {
//         printf("%d is the greatest", num3);
//     }

//     return 0;
// }



//calculator using switch
// #include <stdio.h>
// int main() {
//     char ch;
//     int choice;
//     int num1, num2, res;

//     do {
//         printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus\n");
//         printf("Enter choice: ");
//         scanf("%d", &choice);
//         printf("Enter two numbers: ");
//         scanf("%d %d", &num1, &num2);

//         switch (choice) {
//             case 1:
//                 res = num1 + num2;
//                 printf("Addition is %d\n", res);
//                 break;
//             case 2:
//                 res = num1 - num2;
//                 printf("Subtraction is %d\n", res);
//                 break;
//             case 3:
//                 res = num1 * num2;
//                 printf("Multiplication is %d\n", res);
//                 break;
//             case 4:
//                 res = num1 / num2;
//                 printf("Division is %d\n", res);
//                 break;
//             case 5:
//                 res = num1 % num2;
//                 printf("Modulus is %d\n", res);
//                 break;
//             default:
//                 printf("Invalid choice!\n");
//                 break;
//         }

//         printf("Do you want to continue (y/n)? ");
//         scanf(" %c", &ch); 

//     } while (ch == 'y' || ch == 'Y');

//     return 0;
// }



// //calc using fxn
// #include<stdio.h>
// void add(int num1,int num2){
//     int res = num1+num2;
//     printf("Addition is %d",res);
// }

// void sub(int num1,int num2){
//     int res = num1-num2;
//     printf("Subtraction is %d",res);
// }

// void mult(int num1,int num2){
//     int res = num1*num2;
//     printf("Multiplication is %d",res);
// }

// void div(int num1,int num2){
//     int res = num1/num2;
//     printf("Division is %d",res);
// }

// void mod(int num1,int num2){
//     int res = num1%num2;
//     printf("Division is %d",res);
// }

// int main()
// {
//     int choice,ch;
//     int num1,num2,res;
//     do{
//         printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulus");
//         printf("\nEnter choice: ");
//         scanf("%d",&choice);
//         printf("Enter two numbers: ");
//         scanf("%d%d",&num1,&num2);
//         switch (choice)
//         {
//             case 1:
//                 add(num1,num2);
//                 break;
//             case 2:
//                 sub(num1,num2);
//                 break;
//             case 3:
//                 mult(num1,num2);
//                 break;
//             case 4:
//                 div(num1,num2);
//                 break;
//             case 5:
//                 mod(num1,num2);
//                 break;
//             default:
//                 break;
        
//         }
//         printf("\nDo you want to continue (y/n) ?");
//         scanf(" %c",&ch);

//     }while (ch == 'y' || ch == 'Y');
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
            printf("%d is not a prime number",num);
            return 0;
        }
    }
    printf("%d is a prime number",num);
    return 0;
}