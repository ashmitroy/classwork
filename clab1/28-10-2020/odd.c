#include<stdio.h>
int main ()
{
int sum = 0,n,count=0,i;
printf("\n Enter the next number : ");
scanf("%d",&n);
count = count + n%2;
sum = sum + (n%2)*n;
printf("Number  of odd numbers = %d and sum = %d",count,sum);




    return(0);
}