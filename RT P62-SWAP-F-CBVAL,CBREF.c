//SWAP the value of two variables using FUNCTIONS!
#include <stdio.h>
void swap_cv(int,int); //cv-call by value FUNCTION DECLARATION!
void swap_cr(int*,int*); //cr-call by reference FUNCTION DECLARATION!!
int main()
{
    int a,b;
    printf("enter the value of two numbers:");
    scanf("%d %d",&a,&b);
    printf("two numbers before swapping in main() is a=%d and b=%d\n",a,b);
    void swap_cv(a,b); // FUNCTION CALL!!
    printf("in main() after swap_call by value a=%d and b=%d\n",a,b);
    //void swap_cr(&a,&b); //FUNCTION CALL!!
    printf("in main() after swap_call by reference a=%d and b=%d\n",a,b);
	return 0;
}
void swap_cv(int c,int d) //FUNCTION DEFENITION!!
{
    int temp;
    temp=c;
    c=d;
    d=temp;
    printf("in swap_cv function a=%d and b=%d",c,d);
}
void swap_cr(int *c,int *d) //FUNCTION DEFENITION!!
{
    int temp;
    *c=*d;
    *d=temp;
    printf("in swap_cr fucntion a=%d and b=%d",*c,*d);
}
