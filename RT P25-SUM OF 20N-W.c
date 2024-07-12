// WACP to find the sum of first 20 numbers using WHILE LOOP!
#include <stdio.h>
int main()
{
    int i=1,sum=0 ;
    while(i<=20)
     {
         sum=sum+i;
         i++;
     }
    printf("sum of the first 20 numbers is %d",sum);
	return 0;
}
