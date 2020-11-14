#include<stdio.h>
int main ()
{
int score, i = 1 ,count = 0;

again:
printf("\nEnter the score of next player no %d = ",i);
scanf("%d,",&score);

if (score < 0)goto again;
{
     i++;
if (score >=100)
{
    count++;
   
}
if (i<10) goto again;
{
    printf("Total no. of players made century = %d",count);
}

}



    return(0);
}