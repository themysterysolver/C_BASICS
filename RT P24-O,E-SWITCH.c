// WACP to check whether the given number is ODD or EVEN using switch case!!!
#include <stdio.h>
int main()
{
    int num,rem;
    printf("enter any number:");
    scanf("%d",&num);
    rem=num%2;
    switch(rem)
    {
    case 0:
        printf("the given number %d is EVEN coz the remainder is %d when it is divided by 2",num,rem);
        break;
    case 1:
        printf("the given number %d is ODD coz the remainder is %d when it is divided by 2",num,rem);
        break;
    default:
        printf("GO TO HELL");
    }
	return 0;
}
