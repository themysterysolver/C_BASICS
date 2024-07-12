//BUBBLE SORT in a array using FUNCTIONS!!
#include <stdio.h>
void bubble_sort(int arr[],int n); //FUNCTION DECLARATION!!
int main()
{
    int i,n,temp,arr[20];
    printf("enter the no elements:");
    scanf("%d",&n);
    printf("enter the array of elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    bubble_sort(arr,n); //FUNCTION CALL!!
    printf("array elements in sorted order:");
    for(i=0;i<n;i++)
        printf(" %d",arr[i]);
	return 0;
}
void bubble_sort(int arr[],int n) //FUNCTION DEFENITION!!
{
    int i,temp,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
            if(arr[j]>arr[j+1])
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
