#include <stdio.h>
#include <stdlib.h>
//function_defination_here
int linear_search(int A[], int n, int d);
int main()

{
    int A[100], i, n, loc, d;
    printf("\nEnter the size of the list: ");
    scanf("%d", &n);
    if (n > 100)
    {
        printf("\nSize should be less or equal to 100");
        exit(0);
    }
    printf("\nEnter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        printf("\nEnter A[%d]: ", i);
        scanf("%d", &A[i]);
    }
    printf("\nEnter the data that meeds to be searched: ");
    scanf("%d", &d);
    loc = linear_search(A, n, d);
    if (loc == -1)
        printf("\nThe data %d is not in the array", d);
    else
    {
        printf("\nThe data %d is present at positon %d of the array", d, loc);
    }
    return(0);
}
int linear_search(int A[], int n, int d)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (A[i] == d)
        {
            return (i);
        }
        
    }
    return (-1);
}