//check weather given no is +ve,-ve,zero using TERNARY OPERATOR!
#include <stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    printf("the given number is %d\n",num);
    (num==0)? printf("the number is zero"):((num>0)? printf("the number %d is positive",num): printf("the number %d is negative",num));
	return 0;
}
