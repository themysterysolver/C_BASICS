/*to find the powers of any order
   -11.12.20228*/
#include <stdio.h>
int main()
{
    float base,power,ans;
    printf("enter the value of base and power respectively with a space:\n");
    scanf("%f %f",&base,&power);
    ans=pow(base,power);
    printf("the answer for base=%.2f and power %.2f will be %.2f",base,power,ans);
    return 0;
}
