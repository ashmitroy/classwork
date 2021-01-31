#include<stdio.h>
int main ()
{
    int i,j,count=0,input;
    printf("Enter the iteration no. : ")
    scanf("%d",&input);
    for ( i = input; i >=0; i--)
    {
    for ( j = 0;j <=i; j++)
    {
        if (i<=j)
        { 
          int x ;
          for (x = 0; x <= count; x++)
           {

            printf("* ");
           }
            
            

        }
        else
        {
            printf(" ");
        }
        
    }

printf("\n");    
count++;

    }
    



    return(0);
}