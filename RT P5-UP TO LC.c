//CONVERTING uppercase to lowercase
#include <stdio.h>
int main()
{
    char ch;
    printf("enter any alphabet in uppercase:");
    scanf("%c",&ch);
    printf("\n the charachter in upper case is %c and it's lower case charachter is %c",ch,ch+32);
	return 0;
}
