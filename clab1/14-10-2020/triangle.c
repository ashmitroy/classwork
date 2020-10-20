#include<stdio.h>
int main ()
{

    int a,b,c,t;
    printf("\n Give value of a: ");
    scanf("%d",&a);
    printf("\n Give value of b: ");
    scanf("%d",&b);
    printf("\n Give value of c: ");
    scanf("%d",&c);
  t = (a+b>c)&&(b+c>a)&&(c+a>b);
  printf("\n Do they statisfy trinagle property? 1 for yes, 0 for no : %d",t );
  return(0);
}