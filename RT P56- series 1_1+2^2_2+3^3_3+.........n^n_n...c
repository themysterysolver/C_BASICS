//to print the following series 1/1+2^2/2+3^3/3+.........n^n/n..
#include <stdio.h>
int main()
{
    int i,n;
    float sum=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum=sum+((float)pow(i,i)/(float)i);
    printf("sum of the series 1/1+2^2/2+3^3/3+.........%d^%d/%d.... is %.4f",n,n,n,sum);
    return 0;
}
