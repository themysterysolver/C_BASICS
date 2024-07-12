//WACP to print the FIBONACCI SERIES of first n numbers!!
#include <stdio.h>
int main()
{
    int n,t1=0,t2=1,temp,sum=0;
    printf("enter the number of series should be printed:");
    scanf("%d",&n);
    printf("fibonacci series for %d numbers are:",n);
    if(n==0)
        printf("0");
    printf(" %d %d",t1,t2);
    for(int i=1;i<n-1;i++)
    {
        sum=t1+t2;
        t1=t2;
        t2=sum;
        printf(" %d",sum);
    }
    return 0;
}
