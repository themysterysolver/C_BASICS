//WACP to find the leap years from the year 1900 to 2100!!{using DO-WHILE LOOP}
#include <stdio.h>
int main()
{
    int year_i=1900,year_f=2100,count_of_years=0;
    do
    {
        if(year_i%4==0 && year_i%100!=0 || year_i%400==0)
            {
            printf("\t\tthe LEAP YEAR is %d\n",year_i);
            count_of_years+=1;
            }
        else
            printf("this is a NOT a LEAP YEAR %d\n",year_i);
        year_i++;
    }
    while(year_i<=year_f);
    printf("\n\n\nthe no of leap years from 1900 to 2100 is %d\n\n\n",count_of_years);
    return 0;
}
