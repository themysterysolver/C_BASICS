//DELETE an element from a given location in an ARRAY!!!
#include <stdio.h>
int main()
{
     int n,i,arr[20],num,pos;
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("the elements are:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("enter the position of index where element should be deleted in the array:\n");
    scanf("%d",&pos);

    //how to DELETE?? watch:)
    for(i=pos;i<=n;i++) //SHOULD COME FROM BACKwards!!
        arr[i]=arr[i+1];
    n--;
    printf("\nthe new array after deletion at %d position of index is:",num,pos);
    for(i=0;i<n;i++)
        printf(" %d",arr[i]);
    return 0;
}
