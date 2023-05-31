#include<stdio.h>

int areaCircle(){
    int rad;
    printf("Enter radius of circle: ");
    scanf("%d",&rad);
    float area = 3.14*rad*rad;
    printf("Area of circle is: %f",area);
}

int areaRect(){
    int len,bred;
    printf("\n\nEnter length of rectangle: ");
    scanf("%d",&len);
    printf("Enter breadth of rectangle: ");
    scanf("%d",&bred);
    float area = len*bred;
    printf("Area of rectangle is: %f",area);
}

int areaTriangle(){
    int base,height;
    printf("\n\nEnter base: ");
    scanf("%d",&base);
    printf("Enter height: ");
    scanf("%d",&height);
    float area = 0.5*base*height;
    printf("Area of triangle is: %f",area);
}

int circumCircle(){
    int rad;
    printf("\n\nEnter radius of circle: ");
    scanf("%d",&rad);
    float circum = 2*3.14*rad;
    printf("Cicumference of circle is: %f",circum);
}

int main()
{
    areaCircle();
    areaRect();
    areaTriangle();
    circumCircle();
    return 0;
}