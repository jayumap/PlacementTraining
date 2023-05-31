#include<stdio.h>

int bubbleSort(int arr[], int size){
    //using bubble sort
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Sorted array using bubble sort is: ");
    display(arr,size);
}

int selectionSort(int arr[], int size){
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
    printf("Sorted array using selection sort is: ");
    display(arr,size);
}

int display(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}


int main()
{
    int size,choice;
    printf("1.Bubble Sort\n2.Selection Sort");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    printf("Enter size of array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter elements of array: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    switch (choice)
    {
    case 1:
        bubbleSort(arr,size);
        break;
    
    case 2:
        selectionSort(arr,size);
        break;
    
    default:
        break;
    }
    return 0;
}