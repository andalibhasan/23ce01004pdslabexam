#include <stdio.h>


int main() {
    float r, area, volume;
    printf("enter radius");
    scanf("%f",&r );
    area= (4*3.14*r*r);
    volume= (4/3*3.14*r*r*r);
    printf("Surface Area is %.2f\n", area);
    printf("Volume is %.2f\n", volume);


return 0;
} 