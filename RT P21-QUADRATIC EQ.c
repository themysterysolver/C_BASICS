/*WACP to calculate the SOLUTIONS of quadratic eq
   given the form ax^2+bx+c=0 */
#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    float root1,root2,D;
    printf("enter the value of a,b,c from the quadratic equation in the form(ax^2+bx+c=0) :");
    scanf("%d %d %d",&a,&b,&c);
    D=b*b-4*a*c;
    if(D<0)
        printf("the root is imaginary root,since D is negative.ie)D=%.2f",D);
    else if(D==0)
            {
                root1=-b/2*a;
                root2=-b/2*a;
                printf("the roots of %dx^2+%dx+%d=0 are %.2f,%.2f\n here D is zero",a,b,c,root1,root2);
            }
    else
            {
                root1=(-b+pow(D,0.5))/2*a;
                root2=(-b-pow(D,0.5))/2*a;
                printf("the roots of %dx^2+%dx+%d=0 are %.2f and %.2f",a,b,c,root1,root2);
            }
	return 0;
}
/* EXAMPLE: x^2-9x+14=0(2,7)..........
            x^2+2x-15=0(3,-5)...........
            2x^2+8x+8=0.....D=0.....(-8)
            x^+4x+5=0.....D<0
     */
