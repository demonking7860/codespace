#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long apex ;
    apex = get_long("Number : ");

    if(apex < 340000000000000 || apex > 359999999999999 )
    {
        printf("INVALID\n");
    }
    else
    {
        printf("APEX CARD\n");
    }
}