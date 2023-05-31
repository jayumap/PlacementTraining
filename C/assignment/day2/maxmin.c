#include<stdio.h>

int Min_Max(int arr[],int size){
    //using selection sort
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    printf("\nSmallest element is: %d",arr[0]);
    printf("\nLargest element is: %d",arr[size-1]);
}

int main()
{
    int size;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter elements of array: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    Min_Max(arr,size);
    return 0;
}