//WACP to interchange the largest and smallest elements of a given array!!!
#include <stdio.h>
int main()
{
    int n,large_pos=0,small_pos=0,large_num,small_num,i,arr[20],temp;
    printf("enter the no of elements in a array:");
    scanf("%d",&n);
    printf("enter array:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    large_num=arr[0];
    small_num=arr[0];
    for(i=0;i<n;i++)
        {
            if(arr[i]>large_num)
                {
                    large_num=arr[i];
                    large_pos=i;
                }
            if(arr[i]<small_num)
                {
                    small_num=arr[i];
                    small_pos=i;
                }
        }
    printf("array before swapping of largest and the smallest number:");
    for(i=0;i<n;i++)
        printf(" %d",arr[i]);
    printf("\nthe LARGEST number is %d in %d index position\nthe SMALLEST number is %d in %d index position",large_num,large_pos,small_num,small_pos);
    arr[small_pos]=large_num; //swapping
    arr[large_pos]=small_num;
    printf("\narray after swapping of largest and the smallest number:");
    for(i=0;i<n;i++)
        printf(" %d",arr[i]);
    return 0;
}
