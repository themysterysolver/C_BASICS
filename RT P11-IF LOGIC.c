//how the if logic works
#include <stdio.h>
int main()
{
    int num;
    char ch;
    printf("enter a number and any charachter:");
    if(scanf("%d %c",&num,&ch)==2)
        {
        printf("the entered inputs are valid\n");
        printf(" the entered number is %d, and the charachter is %c",num,ch);
        }
    else
        printf("inputs are invalid");
	return 0;
}
