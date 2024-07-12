#include <stdio.h>
int main()
{
    int a,b;
        printf("enter the value of two numbers with a space:");
        scanf("%d %d" ,&a,&b);
        if(a>b)
            printf("a is greater than b");
        else
            printf("b is greater than a");
        return 0;
}

