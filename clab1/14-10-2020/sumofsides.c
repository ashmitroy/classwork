#include <stdio.h>
int main()
{
    int a,b,c,t,s;
printf("\n Give value of a: ");
    scanf("%d",&a);
    printf("\n Give value of b: ");
    scanf("%d",&b);
    printf("\n Give value of c: ");
    scanf("%d",&c);
     
     t = (a+b>c)&&(b+c>a)&&(c+a>b);
     s = t*(a+b+c);
     
   printf("\n Do they satisfy triangle property?");
   printf("Display : 0 for No, sum of all sides for Yes : %d",s);
   return(0);

}