#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long apex ;
    apex = get_long("Number : ");

    if( apex > 35e13 || apex <34e13 )
    {
        printf("APEX CARD\n");
    }
    else
    {
        printf("INVALID\n");
    }

}