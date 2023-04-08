#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long apex ;
    apex = get_long("Number : ");

    do
    {
        printf("INVALID\n");
    }
    while(apex < 340000000000000 || apex > 359999999999999 );
}