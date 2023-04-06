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
    while( h > 8 ||  h < 1 );

    for (int j = h ; j<=h;j--)
    {
        for( int i = h ; i<=j ; i--)
    {

        printf("# ");
      }

      printf("\n");

    }


}