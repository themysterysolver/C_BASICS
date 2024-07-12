//WACP to find the fibonacci series of n natural numbers using FUNCTIONS AND RECURSIONS!!
#include <stdio.h>
int fib(int); //FUNCTION DECLARATION!!
int main()
{
    int n,i=0,sum=0;
    printf("enter the upper bound:");
    scanf("%d",&n);
    printf("FIBONACCI SERIES:");
    for(i=0;i<n;i++)
    {
        sum=fib(i); //FUNCTION CALL!!
        printf("%d ",sum);
    }
	return 0;
}
int fib(int n) //FUNCTION DEFENITION!!
{
    if(n==0)        //BASE CASE-1!
            return 0;
    else if(n==1)   //BASE CASE-2!
            return 1;
    else            //RECURSIVE CASE!!
            return (fib(n-2)+fib(n-1));
}
