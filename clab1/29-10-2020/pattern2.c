#include<stdio.h>
int main ()
{
 int i,j,n,a=1;
    printf("Enter the no. of rows to be printed");
    scanf("%d",&n);


for ( i = 0; i < n; i++)
{
    for ( j = 0; j < n-1-i; j++)
    {
        printf(" ");
    }
    for (j= 0; j < 2*i+1; j++)
    {
       printf("%d",a);
    }
     for ( j = 0; j < n-1-i; j++)
    {
        printf(" ");
    }
for ( j = 0; j < n-1-i; j++)
    {
        printf(" ");
    }


    for (j= 0; j < 2*i+1; j++)
    {
      printf("%d",a);
    }
    a=a+1;
    printf("\n");
}

for ( i = n; i > 1 ; i--)
{
   for ( j = n; j < n; ++j)

   {
       printf("a ");
   }
   

}







    return(0);
}