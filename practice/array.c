#include <stdio.h>
#define times 10
int main()
{
    int i, input, total=0;
    int number[times];
    for (i = 0; i < times; i++)
    {
        printf("Enter any no. ");
        scanf("%d", &input);
        number[i] = input;
        total = total + input * input;
    }
    for (i = 0; i < times; i++)
    {

        printf("%d ", number[i]);
    }
    for (i = 0; i < times; i++)
    {
        printf("\n");
        printf("x[%d] = %d", i + 1, number[i]);
    }
    printf("\n total = %d", total);
    return (0);
}
