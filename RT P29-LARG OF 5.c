//WACP to display the largest of 5 numbers
#include <stdio.h>
int main()
{
    int i=1,num,large=-1000;
    i=1;
    while(i<=5)
    {
        printf("enter the number:");
        scanf("%d",&num);
        if(num>large)  //we can also use TERNARY OPERATR.ie) num>large ? num:large;
            large=num;
        i++;
    }
    printf("the largest number is %d",large);
	return 0;
}
