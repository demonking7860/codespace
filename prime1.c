#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int i ;
    int count = 0 ;
    int j ;
    int n1;
    do
    {
        n1 = get_int("Minimum: ");
    }
    while (n1 < 1);

    int n2;
    do
    {
        n2 = get_int("Maximum: ");
    }
     while (n1 >= n2);

    for ( i = n1; i <= n1; i++)
    {
        for ( j = 1 , j<=i , j++);
        {
            if ( j % i == 0)
            {
            count ++ ;
            }
            {
                if ( count == 2)
                printf(" %i , i")
            }

        }


        {
            printf("%i\n", n);

        }
    }
}

