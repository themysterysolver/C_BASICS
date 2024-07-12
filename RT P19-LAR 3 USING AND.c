// to find the greatest among 3 numbers using LOGICAL OPERATOR!
#include <stdio.h>
int main()
{
    int num1,num2,num3;
    printf("enter three numbers:");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>num2 && num1>num3) //CHECK 1 greater than 2 and 3 via &&
        printf("%d is greatest among %d,%d,%d",num1,num1,num2,num3);
    else if(num2>num1 && num2>num3) //CHECK 2 is greater than 1 and via &&
        printf("%d is greatest among %d,%d,%d",num2,num1,num2,num3);
    else
        printf("%d is greatest among %d,%d,%d",num3,num1,num2,num3);

    return 0;
}
/*
OUTPUT:
1 2 3.......
3 2 1.......
1 3 2
*/
