//WACP to find the second largest number in a given set of array!
#include <stdio.h>
int main()
{
    int arr[20],n,i,large_num,large_pos,second_large_num,second_large_pos;
    printf("enter the no of elements in a array:");
    scanf("%d",&n);
    printf("enter array:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    large_num=arr[0];
    second_large_num=arr[0];
    for(i=0;i<n;i++)
        if(arr[i]>large_num)
                {
                    large_num=arr[i];
                    large_pos=i;
                }

   for(i=0;i<n;i++)
        while(arr[large_pos]!=arr[i])
           {
              if(arr[i]>second_large_num)
                {
                    second_large_num=arr[i];
                    second_large_pos=i;
                }
                break;
           }
    for(i=0;i<n;i++)
        printf(" %d",arr[i]);
    printf("\nsecond largest number is %d in %d index position\nlargest number is %d in %d index position",second_large_num,second_large_pos,large_num,large_pos);
    return 0;
}
