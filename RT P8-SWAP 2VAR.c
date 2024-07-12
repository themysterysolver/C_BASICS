//swapping two numbers without the use of temporary varaible
#include <stdio.h>
int main()
{
    int a,b;
    printf("enter the value of NUMBER-1:");
    scanf("%d",&a);
    printf("enter the value of NUMBER-2:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the value of NUMBER-1:%d\nthe value of NUMBER-2:%d",a,b);
	return 0;
}
