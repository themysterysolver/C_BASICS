//average of numbers!
#include <stdio.h>
int main()
{
    int num,sum=0,count=0;
    float average;
    printf("enter -1 to come out of the loop!\n");
    while(1)
    {
        printf("enter a number:");
        scanf("%d",&num);
        if(num==-1)
            break;
        count+=1;
        sum=sum+num;
    }

    average=(float)sum/count;
    printf("\nthe sum of numbers and the count are %d,%d",sum,count);
    printf("\nthe average of the numbers are: %d/%d= %.2f",sum,count,average);
    return 0;
}
