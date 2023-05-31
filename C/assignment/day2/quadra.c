#include<stdio.h>
#include<math.h>

void quadroot(double a, double b, double c){
    double disc,root1,root2;
    disc = b*b-4*a*c;
    if(disc>0){
        root1 = (- b + sqrt(b*b-4*a*c) / (2*a));
        root2 = (- b - sqrt(b*b-4*a*c) / (2*a));
        printf("root 1 = %lf\nroot 2 = %lf",root1, root2);
    }

    else if(disc==0){
        root1 = root2 = - b / (2*a);
        printf("root = %lf",root1);
    }

    else{
        double real = - b / (2*a);
        double imag = sqrt(-(b*b-4*a*c)) / (2*a);
        printf("root 1 = %lf+%lfi \nroot 2 = %lf-%lfi",real,imag,real,imag);
    }
}
int main()
{
    double a,b,c;
    printf("Quadratic eqn is of the form ax^2+bx+c");
    printf("\nEnter coefficients of a,b,c: ");
    scanf("%lf%lf%lf",&a,&b,&c);
    quadroot(a,b,c);
    return 0;
}