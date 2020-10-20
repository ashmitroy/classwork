#include <stdio.h>
int main()
{
    int a,b,c,d,r;
printf("\nInput the value of height");
scanf("%d",&a);
printf("\nInput the value of base");
scanf("%d",&b);
printf("\nInput the value of hypotenues");
scanf("%d",&c);
d = c*c==a*a+ b*b;
r =(d==1?:0);
printf("\n Display 1 if its right-agled display 0 if its not: %d",r);
return(0);
}