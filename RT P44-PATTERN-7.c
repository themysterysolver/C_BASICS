/* TO PRINT THE FOLLOWING PATTERN
   0
   12
   345
   6789*/
#include <stdio.h>
int main()
{
    int i,j,count=0;
    for(i=1;i<=4;i++)
    {
        for(j=2;j<=i;j++)
            printf("%d", count++);
        printf("\n");
    }
	return 0;
}
