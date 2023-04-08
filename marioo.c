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

    for( int i = 1 ; i<=h ; i++)
    {

     for (int j = 2 ; j<=h+1-i;j++)
    {
        printf(" ");

      }

      for(int k = 1 ; k<=i;k++)
      {
        printf("#");
      }

      printf("\n");

    }


}