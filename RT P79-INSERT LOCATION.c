//INSERT  a number at a given LOCATION in a ARRAY!!
#include <stdio.h>
int main()
{
    int n,i,arr[20],num,pos;
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("the elements are:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("enter the position of index where it should be inserted in the array:\n");
    scanf("%d",&pos);
    printf("enter the number to be inserted:");
    scanf("%d",&num);
    //how to INSERTT?? watch:)
    for(i=n;i>=pos;i--) //SHOULD COME FROM BACKwards!!
        arr[i+1]=arr[i];
    arr[pos]=num;
    n++;
    printf("\nthe new array after insertion of %d at %d position of index is:",num,pos);
    for(i=0;i<n;i++)
        printf(" %d",arr[i]);
    return 0;
}
