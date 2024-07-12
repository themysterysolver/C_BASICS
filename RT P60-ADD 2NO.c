//ADD two numbers using FUNCTIONS
#include <stdio.h>
int add(int,int); //FUNCTION DECLARATION!
int main()
{
    int a,b,result=0;
    printf("enter the value of two numbers:");
    scanf("%d %d",&a,&b);
    result=add(a,b); //FUNCTION CALL!
    printf("the sum of two numbers %d and %d is %d",a,b,result);
	return 0;
}
int add(int c,int d) //FUNCTION FEFENITION
{
    int sum;
    sum=c+d;
    return sum;
}
