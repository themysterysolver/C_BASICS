//to print the first n natural number!!! using FOR LOOP!!
#include <stdio.h>
int main()
{
    int i,n;
    printf("enter till which number should be printed:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("%d\n",i);
    return 0;
}
