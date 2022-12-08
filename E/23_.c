#include <stdio.h>

int main()
{
    int i;
    int sum = 0;

    for (i = 1; i <= 100; i++)
    {
        sum += (i * 13) - 6;
    }

    printf("The sum of the series 7+20+33+...+up to 100 terms is: %d\n", sum);

    return 0;
}
