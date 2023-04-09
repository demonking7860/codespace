// Calculate your half of a restaurant bill
// Data types, operations, type casting, return value

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float total = 0 ;
    float bill_amount = get_float("Bill before tax and tip: ");
    float tax_percent = get_float("Sale Tax Percent: ");
    float tip_percent = get_float("Tip percent: ");

    tax_percent = (tax_percent/100) * bill_amount;

    tip_percent = (tip_percent/100) * (bill_amount+tax_percent) ;

    total = ( bill_amount + tax_percent + tip_percent )/2 ;

    printf("You will owe $%.2f each!\n", total );
}
