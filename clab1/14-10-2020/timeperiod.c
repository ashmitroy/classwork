#include<stdio.h>
#include <math.h>
#define g 9.8
int main ()
{
    int t1,t2,t3,t4,t5;
printf("\nfor pendulum length 10mm");

t1 = 2*M_PI*sqrt(10/g);


printf("\nfor pendulum length 20mm");
t2 = 2*M_PI*sqrt(20/g);
printf("\nfor pedulum length 30mm");
t3 = 2*M_PI*sqrt(30/g);
printf("\nfor pedulum length 40mm");
t4 = 2*M_PI*sqrt(40/g);
printf("\nfor pedulum length 50mm");
t5 = 2*M_PI*sqrt(50/g);

return(0);


}