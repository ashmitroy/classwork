#include <stdio.h>
int main()
{
    int x1,y1, x2,y2, x3,y3 , x4,y4 ,m,n,s,dec ;
    printf("Input the value of x1:");
scanf("%d",&x1);
    printf("Input the value of y1:");
scanf("%d",&y1);
    printf("Input the value of x2:");
scanf("%d",&x2);
    printf("Input the value of y2:");
scanf("%d",&y2);
    printf("Input the value of x3:");
scanf("%d",&x3);
    printf("Input the value of y3:");
scanf("%d",&y3);
    printf("Input the value of x4:");
scanf("%d",&x4);
    printf("Input the value of y4:");
scanf("%d",&y4);

m = (y2-y1)/(x2-x1);
n = (y3-y4)/(x3-x4);
s = m == n ;
dec=(s==1?:0);

printf("\n Are the given lines are parallel  to eachother? display 1 for yes : %d",dec);
return(0);
}