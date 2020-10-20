#include<stdio.h>
int main ()
{
int p,c,m,e,b,per;
printf("Enter the marks in five subjects ");
scanf("%d%d%d%d%d",&p, &c, &m,&e, &b);
per = p+c+m+e+b/5;
if (per >=60)
{
    printf("First divison");
}
if ((per >= 50) && (per < 60))
{
    printf("second division");
}

if ((per >= 40) && (per < 50))
{
    printf("Third division");

}
if (per < 40)
{
    printf("FAIL");
}


    return(0);
}