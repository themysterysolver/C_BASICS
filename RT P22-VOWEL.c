//WACP to check weather given one is a VOWEL or not using SWITCH-CASE!!
#include <stdio.h>
int main()
{
    char ch;
    printf("enter any character to check it is a VOWEL OR NOT:");
    scanf("%c",&ch);
    switch(ch)
     {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("the entered character %c is a VOWEL",ch);
            break;
        default:
        printf("the entered word %c is NOT a VOWEL",ch);
     }
	return 0;
}
