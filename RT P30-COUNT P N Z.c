//WACP to read a number until -1 is typed and also count the positive,negative and zero!!!!
#include <stdio.h>
int main()
{
    int num,positive_count=0,negative_count=0,zero_count=0;
    printf("enter -1 to terminate the loop!!\n");
    while(1)
    {
        printf("enter a number:");
        scanf("%d",&num);
        if(num>0)
            positive_count+=1;
        else if(num<0 && num!=-1)
            negative_count+=1;
        else if(num==0)
            zero_count+=1;
         else if(num==-1)
            break;
    }
    printf("the number of positive,negative,zeroes are %d,%d,%d",positive_count,negative_count,zero_count);
    return 0;
}
