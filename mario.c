#include<stdio.h>
#include<cs50.h>

int main (void)
{
    int s = get_int("size ");
    for(int i = s ; i<3 ; i++)
    {
    for(int j = 0 ; j<3 ; j++)
    {
        printf("#");
    }
    printf("\n");
    }
}