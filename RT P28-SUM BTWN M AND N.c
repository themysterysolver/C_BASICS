// To find the sum between m to n numbers using WHILE LOOP!
#include <stdio.h>
int main()
{
    int m,n,sum=0,temp;
    printf("enter the value of lower limit and upper limit number:");
    scanf("%d %d",&m,&n);
    temp=m;
    while(m<=n)
    {
        sum=sum+m;
        m=m+1;
    }
    m=temp;
    printf("the sum of numbers from %d to %d is %d",m,n,sum);
	return 0;
}
