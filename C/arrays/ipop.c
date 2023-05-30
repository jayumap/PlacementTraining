#include<stdio.h>
#include<conio.h>
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
    printf("Elements of array in ascending order:");
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n%d",arr[0]);
    printf("\n%d",arr[size]);

    return 0;
}