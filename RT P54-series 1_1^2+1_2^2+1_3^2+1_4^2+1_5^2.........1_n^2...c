//to print the following series 1/1^2+1/2^2+1/3^2+1/4^2+1/5^2.........1/n^2..
#include <stdio.h>
#include <math.h>
int main()
{
    int i,n;
    float sum=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum=sum+(1.0/pow(i,2));
    printf("sum of the series 1/1^2+1/2^2+1/3^2+1/4^2+.........+1/%d^2 is %.4f",n,sum);
    return 0;
}
