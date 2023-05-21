#include<stdio.h>
#include<cs50.h>

int main (void)
{

int a=1,b=3,c=3,d=2;
char points[]={a,b,c,d};

string player1 = get_string("word: ");

 int n = 0;
 int sum=0;
    while (player1[n] != '\0')
    {
        n++;
    }
    
    for(int m=0; m<=n; m++)
    {
       sum=sum + points[m] ;

    }
    printf("the output is %i\n",sum);
}