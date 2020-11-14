#include<stdio.h>
int main()
{
    int i,j;
    char ch;
    printf("what charecter to be printed and the no. of times : ");
    scanf("%c",&ch );
    scanf("%d",&j);
for ( i = 0; i < j; i++)
{
    printf("%c",ch);
}
    return(0);
}