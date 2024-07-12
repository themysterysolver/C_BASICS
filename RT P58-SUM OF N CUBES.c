//to print the sum of cubes of the first n natural numbers
#include <stdio.h>
#include <math.h>
int main()
{
    int i,n;
    float sum=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum=sum+pow(i,3);
    printf("sum of cubes of the first %d natural numbers is %f",n,sum);
    return 0;
}
