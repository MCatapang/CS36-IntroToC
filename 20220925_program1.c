/*
    1. Write a program that reads in the name,
        hourly rate, and number of hours 
        worked - each for a total of 5 people.
    2. Print their respective names,
        weekly pay (sub tax), and how much they 
        owe in taxes (20% tax rate).
    3. If a worker worked for more than 40 hrs
        in a week, their hourly rate past 40
        hrs is at a 1.5 rate.
*/

#include <stdio.h>

int main(void) {
    char name[20];
    float 
        hours_worked, hourly_rate, 
        amount_paid, amount_taxed, 
        amount_final;

    printf("Enter a name: ");
    scanf("%s", name);
    printf("Enter hourly rate: ");
    scanf("%f", &hourly_rate);
    printf("Enter hours worked: ");
    scanf("%f", &hours_worked);

    if(hours_worked > 40) {
        amount_paid = hourly_rate * 40;
        float hourly_otime = hourly_rate*1.5;
        amount_paid += (hourly_otime) * (hours_worked-40);
    } else /* worked less than 40 hrs */ {
        amount_paid = hourly_rate * hours_worked;
    }

    amount_taxed = amount_paid * 0.20;
    amount_final = amount_paid - amount_taxed;

    printf("Pay to: %s", name);
    printf("\nHourly rate: %.2f", hourly_rate);
    printf("\nHours worked: %.1f", hours_worked);
    printf("\nAmount paid: %.2f", amount_paid);
    printf("\nTaxes paid: %.2f", amount_taxed);
    printf("\nTake home: %.2f", amount_final);
}