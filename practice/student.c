#include <stdio.h>
#define maxval 20
#define counter 11

int main()
{
    float value[maxval];
    int i, low, high;
    int group[counter];

    for (i = 0; i < maxval; i++)
    {
        scanf("%f", &value[i]);
        ++group[(int)(value[i] / 10)];
    }
    printf("\n");
    printf("Group      Range      Frequency\n\n");
    for (i = 0; i < counter; i++)
    {
        low = i * 10;
        if (i == 10)
        {
            high = 100;
        }
        else
        {
            high = low + 9;
        }
        printf(" %2d %3d to %3d %d \n");
    }
}
