#include <stdio.h>

int main()
{
    int matrix[10][10], i, j, m, n, c, d, transpose[10][10];

    printf("Enter no. of rows :: ");
    scanf("%d", &m);
    printf("\nEnter no. of cols :: ");
    scanf("%d", &n);
    printf("\nEnter values to the matrix :: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\nEnter a[%d][%d] value :: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe given matrix is \n\n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            printf("\t%d", matrix[i][j]);
        }
        printf("\n");
    }

    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
        {
            transpose[d][c] = matrix[c][d];
        }
    }
    printf("Transpose of the matrix:\n");

    for (c = 0; c < n; c++)
    {
        for (d = 0; d < m; d++)
        {
            printf("%d\t", transpose[c][d]);
        }
        printf("\n");
    }
    return (0);
}