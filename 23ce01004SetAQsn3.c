#include <stdio.h>
#include <math.h>

int main() {
    float a,b,c,D,r,p,q;
    printf("enter coefficients");
    scanf("%f" "%f" "%f",&a,&b,&c);
    D=(b*b)-(4*a*c);
    r=-b/2*a;
    p= (-b+pow(D,0.5))/(2*a);
    q= (-b-pow(D,0.5))/(2*a);


    if (D > 0) {
    printf("Distinct roots\n");
    printf("first root is %f\n",p);
    printf("second root is%f\n",q);
    }
    else if (D==0) {
    printf("Equal roots\n");
    printf("Both roots are %f\n", r);
    }
    else { 
    printf("Imaginary roots");

    }

    return 0;
}