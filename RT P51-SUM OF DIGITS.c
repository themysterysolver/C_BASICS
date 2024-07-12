//sum of digits....
#include <stdio.h>
int main()
{
    int num,temp,rem,sum=0;
    printf("enter any number:");
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    printf("the sum of digits of %d is %d",temp,sum);
    return 0;
}
