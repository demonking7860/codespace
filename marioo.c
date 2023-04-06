#include<stdio.h>
#include<cs50.h>

int main(void)
{
    // prompt the user for input
    int h ;

    do
    {
        h = get_int("height: ");
    }
    while( h > 8 && h < 1);

}