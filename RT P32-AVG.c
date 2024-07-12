//average of the number without using WHILE as while(1)
#include <stdio.h>
int main()
{
    int num,sum=0,count=0;
    float average;
    printf("enter 0 to terminate the loop\n");
    printf("enter a number:");
    scanf("%d",&num);
    while(num!=0)
    {
        count+=1;
        sum=sum+num;
        printf("\'enter a number\':");
        scanf("%d",&num);
    }
    printf("the sum and count are %d,%d\n",sum,count);
    printf("the average of the numbers are sum/count=%d/%d=%.2f",sum,count,(float)sum/count);
	return 0;
}
