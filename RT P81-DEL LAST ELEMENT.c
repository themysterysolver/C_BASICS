//WACP to DELETE the element from the last of a ARRAY!!!
#include <stdio.h>
int main()
{
    int n,i,arr[20],num,pos;
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("the elements are:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    n--;
    printf("\nthe new array after of last element is:",num);
    for(i=0;i<n;i++)
            printf(" %d",arr[i]);
	return 0;
}
