//WACP to find the greatest of three numbers WITHOUT LOGICAL OPERATOR!
#include <stdio.h>
int main()
{
    int num1,num2,num3;
    printf("enter any three numbers:");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>num2)
    {
        if(num2>num3)
            printf("%d is greatest among %d,%d,%d",num1,num1,num2,num3);
        else // num3>num2
            if(num3>num1)
                printf("%d is greatest among %d,%d,%d",num3,num1,num2,num3);

    }
    else // (num2>num1)
    {
        if(num1>num3)
            printf("%d is greatest among %d,%d,%d",num2,num1,num2,num3);
        else //(num3>num1)
            if(num3>num2)
                printf("%d is greatest among %d,%d,%d",num3,num1,num2,num3);

    }
	return 0;
}
/*OUTPUT
100 101 102......
102 101 100......
101 100 102......
100 102 101......
*/
