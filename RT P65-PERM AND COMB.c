//WACP to find the p(n/r) and c(n/r)
#include <stdio.h>
int factorial(int); //function decllaration
int main()
{
    int n,r;
    float npr,ncr;
    printf("enter the value of n and r:");
    scanf("%d %d",&n,&r);
    npr= factorial(n)/factorial(n-r);               //function calls
    ncr=factorial(n)/(factorial(r)*factorial(n-r)); //function calls
    printf("p(n/r) and c(n/r) are %f and %f respectively",npr,ncr);
    return 0;
}
int factorial(int num) //function defenition
{
    int i,fact=1;
    for(i=1;i<=num;i++)
        fact=fact*i;
    return fact;
}
