#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int i = 0 ;
    int count = 0 ;
    int j = 0;
    int n1;
    do
    {
        n1 = get_int("Minimum: ");
    }
    while (n1 < 1);

    int n2;
    do
    {
        n2 = get_int("Maximum: ");
    }
     while (n1 >= n2);

    for (j = n1; j <= n2; j++)
    {
      for (i = 1; i <= j; i++)
	{
	  if (j % i == 0)
	    {
	      count++;
	    }
	}
      if (count == 2)
	{

	  printf ("%i\n ", j);
	}
  count =0;

}
}

