//find HCF AND LCM
#include <stdio.h>
int main()
{
    int num1,num2,dividend,divisor,remainder=1,hcf,lcm;
    printf("enter 2 numbers:");
    scanf("%d %d",&num1,&num2);
    if(num1>num2)
        {
            divisor=num2;
            dividend=num1;
        }
    if(num2>num1)
    {
        divisor=num1;
        dividend=num2;
    }
    while(remainder!=0)
    {
        remainder=dividend%divisor;
        dividend=divisor;
        divisor=remainder;
    }
    hcf=dividend;
    printf("the HCF of %d and %d is %d\n",num1,num2,hcf);
    lcm=(num1*num2)/dividend;
    printf("the LCM of %d and %d is %d",num1,num2,lcm);
    return 0;
}
