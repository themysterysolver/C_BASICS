//to print pow(x,n) without using math.h
#include <stdio.h>
int main()
{
    int x,n,i,power=1;
    printf("enter the base and the power:");
    scanf("%d %d",&x,&n);
    for(i=1;i<=n;i++)
        power=power*x;
    printf("the %d^%d=%d",x,n,power);
    return 0;
}
