#include<stdio.h>

#include<cs50.h>

int main()
{

    int s;
    do
    {
        s = get_int("starting size: ");
    }
    while (s<9);

    int e ;
    do
    {
        e = get_int("ending size : ");
    }
    while (e<s);

    int year = 0 ;

    while(s<e)
    {
        s = s + (s/3) - (s/4) ;
        year ++ ;
    }


    printf("YEARS: %i \n ",year );


}
