//DELETE a number in a ARRAY that is already sorted in ascending order!!!
#include <stdio.h>
int main()
{
    int n,i,arr[20],num,pos,j;
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("the elements are:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("enter the number to be deleted:");
    scanf("%d",&num);
    for(i=0;i<n;i++) //this for loop used to find the POSITION of the number which DELETED in what position of sorted order of array!!
        if(arr[i]==num) //this condition testifies and find outs the orginal position.
            {
                for(j=i;j<=n;j++)//this loop is to rearrange the them! "WENT WRONG in j=i" i starting and n ending value!!
                    arr[j]=arr[j+1];
                break;
            }
    n--;
    printf("\nthe new array after insertion of %d is:",num);
    for(i=0;i<n;i++)
        printf(" %d",arr[i]);
    return 0;
}
