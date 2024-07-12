//to print the following series 1/2+2/3+3/4+4/5+.........n/n+1..
#include <stdio.h>
int main()
{
    int i,n;
    float sum=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum=sum+((float)i/(i+1));
    printf("sum of the series 1/2+2/3+3/4+4/5+.........%d/%d.. is %.4f",n,n+1,sum);
    return 0;
}
