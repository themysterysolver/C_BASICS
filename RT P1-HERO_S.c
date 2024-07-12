//TO FIND THE AREA OF THE TRIANGLE USING HERO'S FORMULA
// given 3 sides of a traiangle
#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,area,s;
    printf("get the 3 sides of the traiangle: \n");
    scanf("%f %f %f",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%f",area);
}
