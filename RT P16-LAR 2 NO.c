//to find the greatest among 2numbers....
#include <stdio.h>
int main()
{
    int num1,num2;
    printf("enter any 2 numbers of your choice:");
    scanf("%d %d",&num1,&num2);
    if(num1==num2)
        printf("the given two numbers %d,%d are equal",num1,num2);
    else
        if(num1>num2)
            printf( "%d is greater than %d",num1,num2);
        else
            printf("%d is greater than %d",num2,num1);

	return 0;
}
