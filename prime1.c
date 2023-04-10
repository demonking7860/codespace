#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int min;
    do
    {
        min = get_int("Minimum: ");
    }
    while (min < 1);

    int max;
    do
    {
        max = get_int("Maximum: ");
    }
     while (min >= max);

    for (int n = min; n <= max; n++)
    {
        if ( n%i == 0)
        {
            printf("%i\n", n);
        }
    }
}

bool prime(int number)
{
    // TODO
    return false;
}
