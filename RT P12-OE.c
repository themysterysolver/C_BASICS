//WACP to check whether the given number is ODD/EVEN number.USING IF-ELSE
#include <stdio.h>
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    if(num%2==0)
        printf("the number is even");
    else
        printf("the number is odd");
	return 0;
}
