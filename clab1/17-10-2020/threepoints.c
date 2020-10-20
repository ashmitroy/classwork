#include<stdio.h>
int main()
{

int x1,y1,x2,y2,x3,y3, m1, m2, m3;

printf("give the coordinates of x1:");
scanf("%d",&x1);

printf("give the coordinates of y1:");
scanf("%d",&y1);

printf("give the coordinates of x2:");
scanf("%d",&x2);

printf("give the coordinates of y2:");
scanf("%d",&y2);

printf("give the coordinates of x3:");
scanf("%d",&x3);

printf("give the coordinates of y3:");
 scanf("%d",&y3);


 

if (m1 != m2 && m2 != m3 && m3 != m1)
{
    printf("the given coordinates are that of trinagle");
}


else
{
    printf("the coordinates are of a parallel lines");

}


return(0);

}