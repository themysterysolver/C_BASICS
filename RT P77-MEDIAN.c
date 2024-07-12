//FIN THE MEDIAN of the numbers using array! value in the middle is called median!
#include <stdio.h>
int main()
{
    int n,arr[20],i;
    float median;
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("the elements are:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    if(n%2==0)
        median=(arr[i/2]+arr[(i/2)+1])/2.0; //NOTE 2.0 coz int/int is int then it will be followed by zeroes only!!!!
    else
        median=arr[i/2];
    printf("the median of the array is %.2f",median);
	return 0;
}
