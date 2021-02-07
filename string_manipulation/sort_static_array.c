#include <stdio.h>
int main()
{
    int a[5] = {3, 7, 12, 19, 27};
    int b[5] = {2, 5, 14, 20, 28};
    int c[10], i = 0, j = 0, m = 0;
    while (i < 5 || j < 5)
    {
        if (a[i] < b[j])
        {
            c[m] = a[i];
            i++;
        }
        else
        {
            c[m] = b[j];
            j++;
        }
        m++;
    }

    for (i = 0; i < 5; i++)
    {
        printf(" %d", a[i]);
    }
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        printf(" %d", b[i]);
    }
    printf("\n");
    for (i = 0; i < 10; i++)
    {
        printf(" %d", c[i]);
    }
    printf("\n");
    return (0);
}