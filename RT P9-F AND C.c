// convert celsius into farenheit and vicee versa
#include <stdio.h>
int main()
{
    int num;
    float c,f;
    printf("to convert celsius into farenheit enter 1:\nto convert farenheit into celcius enter 2:\n");
    scanf("%d",&num);
    if(num==1)
        {
        printf("enter the value of celcius:");
        scanf("%f",&c);
        f=1.8*c+32;
        printf("temperature %f in celsius is %f in farenheit",c,f);
        }
    else if(num==2)
        {
        printf("enter the value of farenheit:");
        scanf("%f",&f);
        c=(f-32)*0.56;
        printf("temperature %f in farenheit is %f in celsius",f,c);
        }
    else
            printf("invalid entry.....type one or two,run the code again!");
    return 0;
}
