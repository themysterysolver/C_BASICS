//WACP to print numbers from m to n and classify them as odd and even
#include <stdio.h>
int main()
{
    int m,n,i;
    printf("enter the value of m and n:");
    scanf("%d %d",&m,&n);
    if(m>n)
        {
        printf("ERROR,then the no are reversed\n");
        m=m+n;
        n=m-n;
        m=m-n;
        }
    for(i=m;i<=n;i++)
    {
    if(i%2==0)
        printf("\n%d is even",i);
     else
        printf("\n%d is odd",i);
    }
    return 0;
}
