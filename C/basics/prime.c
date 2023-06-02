#include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter any number: ");
//     scanf("%d",&num);
//     for(int i=2;i<=sqrt(num);i++){
//         if(num%i==0){
//             printf("Not prime");
//             return 0;
//         }
//     }
//     printf("Prime");
//     return 0;
// }


#include<stdio.h>
// int isPrime(int num){
//     if(num==1) return 0;
//     if(!(num%2)) return num==2;
//     int count = 0;
//     for(int i=3;i<=sqrt(num);i++){
//         if(!(num%i))
//             return 0;
//     }
//     return 1;
// }

// int main()
// {
//     int num;
//     scanf("%d",&num);
//     if(isPrime==0){
//         printf("no");
//     }
//     else{
//         printf("prime");
//     }

//     return 0;
// }

#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if (num == 1)
        return 0;
    if (num == 2)
        return 1;
    if (num % 2 == 0)
        return 0;

    for (int i = 3; i <= sqrt(num); i = i+2) {
        if (num % i == 0)
        return 0;
    }

    return 1;
}

int main() {
    int num = 27;

    if (isPrime(num))
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
