#include <stdio.h>
int main()
{

    int matrix[3][3];
    int i, j;
    for (i = 0; i <= 3; i++)
    {
        for (j = 0; j <= 3; j++)
        {
            printf("Enter the array elements for matrix[%d][%d]: ", i, j);
            scanf("%d\n", &matrix[i][j]);
        }
    }
    printf("Printing the values enterd:\n");
    for (i = 0; i <= 3; i++)
    {
        for (j = 0; j <= 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
    }
    return (0);
}