#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long apex ;
    apex = get_long("Number : ");

    if(( apex/1000000000000 ) ==( 35) )
    {
        printf("APEX CARD\n");
    }
    else
    {
        printf("INVALID\n");
    }
}