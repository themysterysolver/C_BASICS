//to print the following series 1/1+1/2+1/3+1/4+1/5.........1/n..
#include <stdio.h>
int main()
{
    int i,n;
    float sum=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum=sum+(1.0/i);
    printf("sum of the series 1+1/2+1/3+1/4.........1/%d is %.4f",n,sum);
    return 0;
}
