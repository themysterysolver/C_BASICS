//WACP to FORM A number using the elements of a ARRAY!
#include <stdio.h>
#include<math.h>
int main()
{
    int n,i,arr[20],num=0;
    printf("enter the number of elements of a array:");
    scanf("%d",&n);
    printf("enter the array of elements:\n");
    for(i=0;i<n;i++) //reverse  of the number can be obtained by for(i=n;i>=0;i--) LOL!!! xD
        {
            scanf("%d",&arr[i]);
            num=num+arr[i]*pow(10,i);
        }
    printf("the number is: %d",num);
	return 0;
}
/* at LOOP-1 num=0+1*1
 * at LOOP-2 num=1+2*10
 * at LOOP-2 num=21+3*100
 * at LOOP-4 num=321+4+1000........*/
