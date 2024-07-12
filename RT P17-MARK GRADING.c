//WACP to display examination result using IF ELSE LADDER!....this is gonna look like ladder.CHECK THIS OUT!
#include <stdio.h>
int main()
{
    int mark;
    printf("enter the mark:");
    scanf("%d",&mark);
    if(mark>=75)
        printf("DISTINCTION");
    else
        if(mark>=65 && mark<75)
            printf("FIRST CLASS");
        else
            if(mark>=50 && mark<65)
                printf("SECOND CLASS");
            else
                if(mark>=40 && mark<50)
                    printf("THIRD CLASS");
                else
                    if(mark<40)
                        printf("FAILED");

	return 0;
}
