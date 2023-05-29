#include<stdio.h>
int main(){

    printf("Select choice: ");
    printf("\n0.Orange\n1.Red\n2.Yellow\n3.Brown\n");
    int choice;
    scanf("%d",&choice);
    switch (choice)
    {
    case 0:
        printf("Orange colour is selected");
        break;

    case 1:
        printf("Red colour is selected");
        break;

    case 2:
        printf("Yellow colour is selected");
        break;

    case 3:
        printf("Brown colour is selected");
        break;
    
    default:
        printf("No colour is selected");
        break;
    }
}