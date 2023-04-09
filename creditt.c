#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long apex ;
    apex = get_long("Number : ");

    if(( apex/100000000000000 ) ==( 34 | 35) )
    {
        printf("APEX CARD\n");
    }
    else
    {
        printf("INVALID\n");
    }
}