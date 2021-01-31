#include<stdio.h>
#include<math.h>
int main ()
{
    int x1,x2,y1,y2;
    double d,peri,area;
printf("Enter the coordinates of : x1 ");
scanf("%d",&x1);
printf("Enter the coordinates of : y1 ");
scanf("%d",&y1);
printf("Enter the coordinates of : x2 ");
scanf("%d",&x2);
printf("Enter the coordinates of : y2 ");
scanf("%d",&y2);
d = sqrt((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
printf("the distance between the points is : %lf",d);
printf("\n");
int radius;
radius = d/2;
peri = 2*pi*radius;
area = pi*radius*radius;
printf("the perimeter of the circle is : %lf\n",peri);
printf("the area of the circle is : %lf",area);
    return(0);
}