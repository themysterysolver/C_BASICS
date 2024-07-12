//INSERTING a element at the last of a ARRAY!!
#include <stdio.h>
int main()
{
    int n,i,arr[20],num;
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("the elements are:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("enter the number to be inserted in the LAST of the array:");
    scanf("%d",&num);
    n++;
    arr[n-1]=num;
    printf("\nthe array is:");
    for(i=0;i<n;i++)
        printf(" %d",arr[i]);
    return 0;
}
