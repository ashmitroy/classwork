#include<stdio.h>
#include<math.h>
#define pi\\\ 3.14
int main ()
{
    int x1 =0 ,x2,y1=0,y2;
    double d,peri, area;
printf("Enter the coordinates of : x2 ");
scanf("%d",&x2);
printf("Enter the coordinates of : y2 ");
scanf("%d",&y2);
d = sqrt((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
printf("the radius of the circel from orgin : %lf",d);
printf("\n");
peri = 2*pi*d;
area = pi*d*d;
printf("the perimeter of the circle is : %lf\n",peri);
printf("the area of the circle is : %lf",area);



    return(0);
}