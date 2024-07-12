//WACP to display square and cube root of first n natural numbers!! using DO WHILE loop!!!!
#include <stdio.h>
int main()
{
    int num,n;
    printf("enter the upper limit of value till which the number should be printed along square and cube root!!:");
    scanf("%d",&n);
    num=1;
    do
    {
      printf("\"the number is %d\" and \"the square is %d\" and \"the cube is %d\"\n",num,num*num,num*num*num);
      num++;
    }
    while(num<=n);
	return 0;
}
