/* TO PRINT THE PATTERN
    1
    22
    333
    4444
    55555 */
#include <stdio.h>
int main()
{
        int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)  //remember this format!
            printf("%d",i);
        printf("\n");
    }

	return 0;
}
