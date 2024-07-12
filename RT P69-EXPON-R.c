//WACP to do POWER/EXPONENT OPERATION USING functions and recursion!!
#include <stdio.h>
int exp(int,int); //FUNCTION DECLARATION!!
int main()
{
    int base,power,ans;
    printf("enter the base and power:");
    scanf("%d %d",&base,&power);
    ans=exp(base,power); //FUNCTION CALL!!
    printf("%d^%d=%d",base,power,ans);
	return 0;
}
int exp(int b,int p) //FUNCTION DEFENITION!!
{
    if(p==0)
        return 1; //BASE CASE!!
    else
        return (b*exp(b,p-1)); //RECURSIVE CASE!!
}
