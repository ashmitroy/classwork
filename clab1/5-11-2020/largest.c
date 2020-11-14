#include<stdio.h>
int find_max (int n)
{
    int next_num, largest=0,i;
    for ( i = 0; i < n; i++)
    {
        printf("\n Enter the next no : ");
        scanf(" %d",&next_num);
        if (next_num> largest)
        {
            largest=next_num;
        }
        
    }
    return(largest);
}
int main()
{
    int a;
    a=find_max(10);
    printf("\n Max is %d",a);
    printf("\n Max is %d", find_max(15));
    return(0);
}