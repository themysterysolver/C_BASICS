//INSERT a number in a ARRAY that is already sorted in ascending order!!!
#include <stdio.h>
int main()
{
    int n,i,arr[20],num,pos,j;
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("the elements are:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("enter the number to be inserted:");
    scanf("%d",&num);
    for(i=0;i<n;i++) //this for loop used to find the POSITION of the number which is being inserted  in what position of sorted order of array!!
        if(arr[i]>num) //this condition testifies and find outs the orginal position of the value if it's sorted in ascending order! "WENT WRONG IN arr[i]"
            {
                for(j=n;j>=i;j--)//this loop is to rearrange the them! "WENT WRONG in j>=i",where i is the position of the 'num'-number to be inserted!
                    arr[j+1]=arr[j];
                arr[i]=num;
                break;
            }
    n++;
    printf("\nthe new array after insertion of %d is:",num);
    for(i=0;i<n;i++)
        printf(" %d",arr[i]);
    return 0;
}
