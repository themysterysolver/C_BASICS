#include <stdio.h>
int main()
{
    int a;
    printf("enter the value of two numbers with a space:");
    scanf("%d",&a);
    if (a%2==0)
        printf("the given no is even");
    else
        printf("the given no is odd");
    return 0;
}
