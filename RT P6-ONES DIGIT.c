// WACP to print the one's digit of a given numer
#include <stdio.h>
int main()
{
    int num,one;
    printf("enter any number:");
    scanf("%d",&num);
    one=num%10;
    printf("the ones place of the given no %d is %d",num,one);
    return 0;
}
