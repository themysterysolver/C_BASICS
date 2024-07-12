//TO REVERSE A NUMBER
#include <stdio.h>
int main()
{
    int num,temp,rev=0,rem;
    printf("enter a number:");
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10;
        rev=rev+rem;
        num=num/10;
    }
    printf("the reversed number is %d and the original number is %d",rev,temp);
    return 0;
}
