#include <stdio.h>
#define g 9.8
int main ()
{
int u,t;
float v,s;
printf("Input the intial velocity  ");
scanf ("%d",&u);

t =1;
    v = u*t + g*t;
 printf("\n velocity =%fm/s and distance covered = %f m after 1s",v,s);
 t =2;
 v = u*t + g*t;
 s = u*t +g*t*t/2;

 printf("\n velocity =%fm/s and distance covered = %f m after 2s",v,s);
t =3;
  v = u*t + g*t;
  s = u*t +g*t*t/2;
 ("\n velocity =%fm/s and distance covered = %f m after 3s",v,s);
t =4;
 v = u*t + g*t;
 s = u*t +g*t*t/2;
 printf("\n velocity =%fm/s and distance covered = %f m after 4s",v,s);
t =5;
 v = u*t + g*t;
 printf("\n velocity =%fm/s and distance covered = %f m after 5s",v,s);
return(0);
}
