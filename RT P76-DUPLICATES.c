//WACP to find whether array contain DUPLICATES!!
#include <stdio.h>
int main()
{
    int n,arr[20],i,j,flag=0;
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("the elements are:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if(arr[i]==arr[j]) //each element is checked with all the elements by this way!!....each element is checked 1 by 1.
             flag=1;
    if(flag==0)
        printf("there are no DUPLICATES!!");
    else
        printf("the DUPLICATES EXISTS");
	return 0;
}
