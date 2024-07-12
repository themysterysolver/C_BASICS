//WACP to read a nd display n natural numbers using ARRAY!!
#include <stdio.h>
int main()
{
    int n,i,arr[20];
    printf("enter the number of elements to be printed:");
    scanf("%d",&n);
    printf("enter the array of elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("the array is:");
    for(i=0;i<n;i++)
        printf(" %d",arr[i]);
	return 0;
}
