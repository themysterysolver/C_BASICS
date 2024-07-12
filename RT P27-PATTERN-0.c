//WACP to print 5,10 asterisks(*) horizontally!!!
#include <stdio.h>
int main()
{
    int i=0,j=0;
    for(i=1;i<=5;i++)
        printf("*");
    j=1;
    printf("\n");
    while(j<=10)
    {
        printf("*");
        j++;
    }
	return 0;
}
