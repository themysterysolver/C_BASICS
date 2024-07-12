//TO PRINT THE TABLE OF n and how many no til it should be printed
#include <stdio.h>
int main()
{
    int i,n,N;
    printf("enter the table of n which it should be printed:");
    scanf("%d",&n);
    printf("enter till which value it should be printed:");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
        printf("%d x %d = %d\n",n,i,n*i);
    return 0;
}
