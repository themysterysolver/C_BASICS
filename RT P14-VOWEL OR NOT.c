// to check whether the given character has VOWEL or NOT!!
#include <stdio.h>
int main()
{
    char ch;
    printf("enter any character:");
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        printf("character %c is a VOWEL",ch);
    else
        printf("character %c is a CONSONANT",ch);

	return 0;
}
