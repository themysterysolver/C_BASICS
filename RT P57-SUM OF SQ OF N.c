//to print the sum of square of the first n even natural numbers
#include <stdio.h>
#include <math.h>
int main()
{
    int i,n;
    float sum=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=2;i<=n;i=i+2)
        sum=sum+pow(i,2);
    printf("sum of square of the first %d even natural numbers is %f",n,sum);
    return 0;
}
