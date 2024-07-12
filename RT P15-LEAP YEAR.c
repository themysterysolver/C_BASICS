/*A leap year is exactly divisible by 4 except for century years (years ending with 00).
 The century year is a leap year only if it is perfectly divisible by 400.
 not a leap year if divisible by 100.*/
#include <stdio.h>
int main()
{
    int year;
    printf("enter the year u want to check it's a leap year or NOT??:\t");
    scanf("%d",&year);
    if(year%4==0 && year%100!=0 || year==4)
        printf("the year %d is a LEAP year",year);
    else
        printf("the year %d is NOT A LEAP YEAR",year);

	return 0;
}
