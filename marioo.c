#include<stdio.h>
#include<cs50.h>

int main(void)
{
    // prompt the user for input
    int h = get_int("height: ");

    while( 1 < h , h<8 )
    {
        h = get_int("height: ");
    }
}