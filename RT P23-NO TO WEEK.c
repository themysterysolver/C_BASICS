//WACP to enter number from 1-7 to print days from Monday to Sunday correspondingly!
#include <stdio.h>
int main()
{
    int num;
    printf("enter number from 1-7 to print days from Monday to Sunday correspondingly:");
    scanf("%d",&num);
    switch(num)
     {
        case 1:
            printf(" %d is MONDAY",num);
            break;
        case 2:
            printf(" %d is TUESDAY",num);
            break;
        case 3:
            printf(" %d is WEDNESDAY",num);
            break;
        case 4:
            printf(" %d is THURSDAY",num);
            break;
        case 5:
            printf(" %d is FRIDAY",num);
            break;
        case 6:
            printf(" %d is SATURDAY",num);
            break;
        case 7:
            printf(" %d is SUNDAY",num);
            break;
        default:
            printf("sikeee that's a wrong number!! ohhhhhh ");  //don't miss the colon
     }

	return 0;
}
