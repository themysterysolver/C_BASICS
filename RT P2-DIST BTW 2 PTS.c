//distance between two points
#include <stdio.h>
#include <math.h>
int main()
{
    int x1,y1,x2,y2;
    float d;
    printf("enter the coordinates of the points one:");
    scanf("%d %d",&x1,&y1);
    printf("enter the coordinates of the points two:");
    scanf("%d %d",&x2,&y2);
    d=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    printf("hence the distance between the two points (%d,%d) and (%d,%d) is %f",x1,y1,x2,y2,d);
    return 0;
}
