// area of the circle using functions!!
#include <stdio.h>
#include <math.h>
float area( float radius); //function declaration
int main()
{
    float radius,area_total;
    printf("enter the radius:");
    scanf("%f",&radius);
    area_total=area(radius); //function call
    printf("the area of circle of radius %f is %f",radius,area_total);
    return 0;
}
float area(float r) //function defenition
{
    int A;
    A=3.14159*r*r;
    return A;
}
