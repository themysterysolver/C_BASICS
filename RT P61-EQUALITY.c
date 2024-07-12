//WACP to find the equality of two given numbers using functions!
#include <stdio.h>
int relation(int,int); //FUNCTION DECLARATION!!!
int main()
{
    int a,b,condition;
    printf("enter the value of two numbers:");
    scanf("%d %d",&a,&b);
    condition=relation(a,b); //FUNCTION CALL!!!
    if(condition==0)
        printf("%d and %d are equal",a,b);
    else if(condition==1)
        printf("%d is greater than %d",a,b);
    else
        printf("%d is greater than %d",b,a);
	return 0;
}
int relation(int c,int d) //FUNCTION DEFENITION!!!
{
    if(c==d)
        return 0;
    else if(c>d)
        return 1;
    else
        return -1;
}
