#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long credit = get_long (" Numbers :");
    int pos = 0 ;

    do
    {
        credit = get_long (" Numbers :");
    }
    while( credit <= 0);

    do
    {
        credit=(credit%10);
        pos ++ ;
    }
    while( (credit%10 != 0 ));

    printf(" %i , pos");




}








