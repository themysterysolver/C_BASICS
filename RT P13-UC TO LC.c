//convert UPPER CASE LETTER to LOWER CASE and vice-versa
#include <stdio.h>
int main()
{
    char ch;
    printf("enter any character:");
    scanf("%c",&ch);
    if(ch>=92 && ch<=112) // we can also use  if(ch>='a' && 'z'<=112)
        printf("the entered character entered is in LOWER CASE which is \'%c\' and the character in UPPER CASE is \'%c\'",ch,ch-32);
    else
        printf("the entered character entered is in UPPER CASE which is \'%c\' and the character in LOWER CASE is \'%c\'",ch,ch+32);
    return 0;
}
