//SELECTION SORT using functions!!
#include <stdio.h>
int smallest(int arr[],int k,int n);
void selection_sort(int arr[],int n);
int main()
{
    int i,n,temp,arr[20],j;
    printf("enter the no elements:");
    scanf("%d",&n);
    printf("enter the array of elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    selection_sort(arr,n); //FUNCTION CALL!!
    printf("array elements in sorted order:");
    for(i=0;i<n;i++)
        printf(" %d",arr[i]);
	return 0;
}
void selection_sort(int arr[],int n)
{
    int k,temp,pos;
    for(k=0;k<n;k++)
    {
        pos=smallest(arr,k,n);
        temp=arr[pos];
        arr[pos]=arr[k];
        arr[k]=arr[pos];
    }
}
int smallest(int arr[],int k,int n)
{
    int small=arr[k],pos=k,i;
    for(i=k+1;i<n;i++)
    {
            if(small<arr[i])
            {
                pos=i;
                small=arr[i];
            }
    }
    return pos;
}
