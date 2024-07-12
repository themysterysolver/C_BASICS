// find the area and the circumference of the circle
#include <stdio.h>
int main()
{
    float area,cir,r;
    printf("enter the radius of the circle(r):");
    scanf("%f",&r);
    area=3.14*r*r;
    cir=2*3.14*r;
    printf("\nthe area of the circle of radius %.2f is %.2f \n",r,area);
    printf("the circumference of the circle of radius %.2f is %.2f",r,cir);
    return 0;
}
