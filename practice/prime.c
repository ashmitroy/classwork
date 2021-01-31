#include <stdio.h>
#include <math.h>

int as_isPrime(int as_num)
{
    int as_inum = sqrt(as_num), as_prime = 1, as_count;

    for (as_count = 2; as_count <= as_inum; as_count++)
    {
        if (as_num % as_count == 0)
        {
            as_prime = 0;
            break;
        }
    }

    return (as_prime);
}

int main()
{
    int as_start, as_end, as_temp, as_num, as_slno = 0, as_on_off;

    printf("Enter the value\n");
    scanf("(%d%d", &as_start, &as_end);
as_start= (20051134%10)+10;
as_end = (20051134%100)+20;
    printf("Do you want to print prime numbers? (yes = 1, no = 0)\n");
    scanf("%d", &as_on_off);

    if (as_start > as_end)
    {
        as_temp = as_start;
        as_start = as_end;
        as_end = as_temp;
    }

    if (as_on_off)
        printf("\nPrime numbers between %d and %d are:\n\n", as_start, as_end);

    for (as_num = as_start; as_num <= as_end; as_num++)
    {
        if (as_num == 1)
        {
            continue;
        }

        if (as_isPrime(as_num))
        {
            as_slno++;

            if (as_on_off)
            {
                printf("%d. %d is prime number.\n", as_slno, as_num);
            }
        }
    }

    printf("\nThere are %d prime numbers between %d and %d.\n",
           as_slno, as_start, as_end);

    return (0);
}