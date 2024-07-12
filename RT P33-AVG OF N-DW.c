//average of first n natural numbers using DO-WHILE!!
#include <stdio.h>
int main()
{
    int num=1,n,sum=0;
    float average;
    printf("enter the limit till wich the average should be calculated:");
    scanf("%d",&n);
    do
    {
      printf("number %d is %d\n",num,num);
      sum=sum+num;
      num=num+1;
    }
    while(num<=n);
    average=(float)sum/n;
    printf("the sum is %d and the upper bound is %d\n",sum,n);
    printf("the average of the first %d natural numbers are:%.2f",n,average);
	return 0;
}
