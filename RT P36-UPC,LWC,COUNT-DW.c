//WACP to read a CHARACTER until * is encountered.also COUNT the UPPER CASE,LOWER CASE and NUMBER entered(USING DO-WHILE LOOP)................
#include <stdio.h>
int main()
{
    char ch;
    int uc_count=0,lc_count=0,num_count=0;
    do
    {
        printf("enter any character:");
        scanf("%c",&ch);
        fflush(stdin); /*REMEMBER TO USE IT!! ( Its purpose is to clear (or flush) the output buffer
                                               and move the buffered data to console (in case of stdout) or disk (in case of file output stream).*/
        if(ch=='*')
            break;
        if(ch>='A' && ch<='Z')
            uc_count+=1;
        else if(ch>='a' && ch<='z')
            lc_count+=1;
        else if(ch>='0' && ch<='9')
            num_count+=1;
    }
    while(1);
    printf("the number of upper case letters are %d\n",uc_count);
    printf("the number of lower case letters are %d\n",lc_count);
    printf("the number of numbers entered are %d\n",uc_count);
    return 0;
}
