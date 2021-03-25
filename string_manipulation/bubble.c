#include <stdio.h>
#include <stdlib.h>
//function_defination_here
void selection_sort(int A[], int n);
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
    selection_sort(A, n);
    printf("\nThe sorted list is as follows: ");
    for (i = 0; i < n; i++)
    {
        printf("\nA[%d] = %d", i, A[i]);
    }
}
void selection_sort(int A[], int n)
{
    int i, j, pos, min;
    for (i = 0; i < n - 1; i++)
    {
        pos = i;
        min = A[i];
        for (j = i + 1; j < n; j++)
            if (A[j] < min)
            {
                min = A[j];
                pos = j;
            }
        A[pos] = A[i];
        A[i] = min;
    }
}
