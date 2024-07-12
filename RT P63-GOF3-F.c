// WACP to find the greatest of three numbers using FUNCTIONS!!
#include <stdio.h>
int greatest(int num1,int num2,int num3); //function declaration
int main()
{
    int num1,num2,num3,great;
    printf("enter the values of two numbers:");
    scanf("%d %d %d",&num1,&num2,&num3);
    great=greatest(num1,num2,num3); //function call
    printf("the greatest among %d %d %d is %d",num1,num2,num3,great);
    return 0;
}
int greatest(int num1,int num2,int num3) //function definition !!
{
    if(num1>num2 && num1>num3)
        return num1;
    else if (num2>num1 && num2>num3)
        return num2;
    else
        return num3;
}
