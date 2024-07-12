/*  Pass 1 - 1 2 3 4 5
    Pass 2 - 1 2 3 4 5
    Pass 3 - 1 2 3 4 5
    Pass 4 - 1 2 3 4 5
    Pass 5 - 1 2 3 4 5
To print the following pattern!!!!*/
#include <stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
       {
        printf("Pass %d -",i); // u could have given \n here to like "\nPass %d -"
        for(j=1;j<=5;j++)
            printf(" %d",j);
        printf("\n");
       }
	return 0;
}
