#include<cs50.h>
#include<stdio.h>
int main (void)
{
    string first = get_string("whats ur first name ?");
    string last = get_string("whats ur last name ?");
    printf("hello, %s %s\n" , first ,last);

}