#include<stdio.h>
int main ()
{
int num,i,flag =1;
printf("Enter a number ");
scanf("%d",&num);
for(i=2;i<=num/2;i++)
{
    if (num %i==0)
    {
        flag=0
        break;
    }
    
}
if (flag)
{
   printf("Prime number ");
}
else
{
    printf("Not a prime number");
}


    return(0);
}