//finding GCD with the help of FUNCTIONS and RECURSIONS!
#include <stdio.h>
int GCD(int,int); //FUNCTION DECLARATION!!
int main()
{
    int num1,num2,temp,ans=0;
    printf("enter two numbers:");
    scanf("%d %d",&num1,&num2);
    ans=GCD(num1,num2); //FUNCTION CALL!!
    if(num1<num2)
    {
        temp=num1;
        num1=num2;
        num2=temp;
    }
    printf("the gcd of the numbers %d and %d is %d",num1,num2,ans);
    return 0;
}
int GCD(int num1,int num2) //FUNCTION DEFENITION
{
    int rem;
    rem=num1%num2;
    if(rem==0) //BASE CASE!!
        return num2;
    else
        return (GCD(num2,rem)); //RECURSIVE CASE!!
}
