// UFR to find factorial of a number!! USR-use factorial and recursion!
#include <stdio.h>
int fact(int); //function declaration!
int main()
{
    int num,factorial;
    printf("enter the number:");
    scanf("%d",&num);
    factorial=fact(num); //FUNCTION call!!
    printf("the factorial of %d is %d",num,factorial);
    return 0;
}
int fact(int num) //function defenition!!!
{
    if(num==1)                   //BASE CASE!
        return 1;
    else
        return (num*fact(num-1)); //function call! + RECURSIVE CASE!!
}
