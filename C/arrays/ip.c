#include<stdio.h>
int main()
{
    int size;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d numbers: ",size);
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    return 0;
}