//WACP to SWAP two numbers with the help of temporary varaile
#include <stdio.h>
int main()
{
    int a,b,temp;
    printf("enter the value of NUMBER-1:");
    scanf("%d",&a);
    printf("enter the value of NUMBER-2:");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("the value of NUMBER-1 is %d\nthe value of NUMBER-2 is %d",a,b);
	return 0;
}
