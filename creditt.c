#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long apex ;
    apex = get_long_long("Number : ");

    if(apex/1000000000000 ||   apex  )
    {
        printf("INVALID\n");
    }
    else
    {
        printf("APEX CARD\n");
    }
}