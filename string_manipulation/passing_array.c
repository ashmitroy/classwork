#include <stdio.h>
float largest(float a[], int n);
int main()
{
    int i,size;
   printf("The size of the array is \n");
   scanf("%d",&size);
    float value[size];
    printf("Enter 4 random no.s\n");
    for (i = 0; i < size; i++)
    {
        scanf("%f", &value[i]);
    }

    printf("%f\n", largest(value, size));
    return (0);
}
float largest(float a[], int n)
{
    int i;
    float max;
    max = a[0];
    for (i = 0; i < n; i++)
        if (max < a[i])
        {
            max = a[i];
        }
    return (max);
}