//session2
//print hello n times using for loop 
//same program using do while loop
//same using while loop
//prime numbers
//print odd numbers till n
//addition of n numbers where n is taken from user also find avg and median
//check for palindrome


// //print hello world n times using for, while and do while
// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter how many times you want to print 'hello' ");
//     scanf("%d",&n);
//     int n1 = n;
//     //using for loop
//     printf("\n\nUsing For loop");
//     for(int i=0;i<n;i++){
//         printf("\nHello");
//     }

//     //using while loop
//     int i=1;
//     printf("\n\nUsing While loop");
//     while(n>0){
//         printf("\nHello");
//         n--;
//     }

//     //dowhile loop
//     printf("\n\nUsing Do While loop");
//     do
//     {
//         printf("\nHello");
//         n1--;
//     } while (n1>0);  
//     return 0;
// }


// //print odd numbers till n
// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter a number till where you want to print odd numbers: ");
//     scanf("%d",&num);
//     printf("\n\nOdd numbers till %d are\n",num);
//     for(int i=1;i<=num;i++){
//         if(i%2!=0){
//             printf("%d\n",i);
//         }
//     }
//     return 0;
// }


// //palindrome
// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("\nEnter the number to check whether it is palindrome or not: ");
//     scanf("%d",&num);
//     int num1 = num;
//     int rev=0,rem;
//     while(num!=0){
//         rem = num%10;
//         rev = rev*10+rem;
//         num = num/10;
//     }
//     //printf("%d",rev);

//     if(num1==rev){
//         printf("%d is a palindrome\n",num1);
//     }
//     else
//         printf("%d is not palindrome\n",num1);
//     return 0;
// }


//add n numbers
#include <stdio.h>

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    printf("Enter the number: ");
    int num, sum = 0;
    scanf("%d", &num);
    int numbers[num];
    for (int i = 0; i < num; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    // Calculate average
    float average = sum / num;
    printf("The sum is %d\n", sum);
    printf("The average is %f\n", average);

    // Sort the numbers in ascending order (using selection sort)
    selectionSort(numbers, num);

    // Calculate median
    int median;
    if (num % 2 == 0) {
        median = (numbers[num / 2 - 1] + numbers[num / 2]) / 2;
    } else {
        median = numbers[num / 2];
    }
    printf("The median is %d\n", median);

    return 0;
}

