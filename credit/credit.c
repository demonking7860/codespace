#include <cs50.h>
#include <stdio.h>

int main(void)
{

    long apex = get_long("Number : ");

    do
    {
        printf("INVALID\n");
    }
    while(Number < 340000000000000 || Number > 359999999999999 );
}