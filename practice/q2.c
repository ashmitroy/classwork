#include <stdio.h>

int main()
{
    char name[20] = "ashmit deb roy";
    char name_space[200];
    int i, j = 0, y;
    for (i = 0; i < 15; i++)
    {
        name_space[i] = name[i];
        for (y = j + 1; y < j + 4; y++)
        {
            name_space[y] = ' ';
        }
    }j=j+5;
    printf("%s\n", name_space);

    return (0);
}