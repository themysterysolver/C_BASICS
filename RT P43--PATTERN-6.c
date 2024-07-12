/* TO PRINT THE FOLOWING PATTERN
    A
    AB
    ABC
    ABCD
    ABCDE
    ABCDEF */
#include <stdio.h>
int main()
{
    char i,j;
    for(i='A';i<='F';i++) //we can also put for(i=65;i<=70;i++)
    {
        for(j='A';j<=i;j++)  // we can also put for(j=65;j<=i;j++)
            printf("%c",j);
        printf("\n");
    }

	return 0;
}
