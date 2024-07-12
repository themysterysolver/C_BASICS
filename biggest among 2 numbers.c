#include <stdio.h>
int main()
{
    int a,b;
        printf("enter the value of two numbers with a space:");
        scanf("%d %d" ,&a,&b);
        (a>b)? printf("a is greater than b") : printf("b is greater than a");
        return 0;
}
