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
    /* Individual 1 */
    char name1[20];
    float 
        hours_worked1, hourly_rate1, 
        amount_paid1, amount_taxed1, 
        amount_final1;

    printf("Enter a name: ");
    scanf("%s", name1);
    printf("Enter hourly rate: ");
    scanf("%f", &hourly_rate1);
    printf("Enter hours worked: ");
    scanf("%f", &hours_worked1);

    if(hours_worked1 > 40) {
        amount_paid1 = hourly_rate1 * 40;
        float hourly_otime1 = hourly_rate1*1.5;
        amount_paid1 += (hourly_otime1) * (hours_worked1-40);
    } else /* worked less than 40 hrs */ {
        amount_paid1 = hourly_rate1 * hours_worked1;
    }

    amount_taxed1 = amount_paid1 * 0.20;
    amount_final1 = amount_paid1 - amount_taxed1;

    printf("Pay to: %s", name1);
    printf("\nHourly rate: %.2f", hourly_rate1);
    printf("\nHours worked: %.1f", hours_worked1);
    printf("\nAmount paid: %.2f", amount_paid1);
    printf("\nTaxes paid: %.2f", amount_taxed1);
    printf("\nTake home: %.2f", amount_final1);


    /* Individual 2 */
    char name2[20];
    float 
        hours_worked2, hourly_rate2, 
        amount_paid2, amount_taxed2, 
        amount_final2;

    printf("Enter a name: ");
    scanf("%s", name2);
    printf("Enter hourly rate: ");
    scanf("%f", &hourly_rate2);
    printf("Enter hours worked: ");
    scanf("%f", &hours_worked2);

    if(hours_worked2 > 40) {
        amount_paid2 = hourly_rate2 * 40;
        float hourly_otime2 = hourly_rate2*1.5;
        amount_paid2 += (hourly_otime2) * (hours_worked2-40);
    } else /* worked less than 40 hrs */ {
        amount_paid2 = hourly_rate2 * hours_worked2;
    }

    amount_taxed2 = amount_paid2 * 0.20;
    amount_final2 = amount_paid2 - amount_taxed2;

    printf("Pay to: %s", name2);
    printf("\nHourly rate: %.2f", hourly_rate2);
    printf("\nHours worked: %.1f", hours_worked2);
    printf("\nAmount paid: %.2f", amount_paid2);
    printf("\nTaxes paid: %.2f", amount_taxed2);
    printf("\nTake home: %.2f", amount_final2);


    /* Individual 3 */
    char name3[20];
    float 
        hours_worked3, hourly_rate3, 
        amount_paid3, amount_taxed3, 
        amount_final3;

    printf("Enter a name: ");
    scanf("%s", name3);
    printf("Enter hourly rate: ");
    scanf("%f", &hourly_rate3);
    printf("Enter hours worked: ");
    scanf("%f", &hours_worked3);

    if(hours_worked3 > 40) {
        amount_paid3 = hourly_rate3 * 40;
        float hourly_otime3 = hourly_rate3*1.5;
        amount_paid3 += (hourly_otime3) * (hours_worked3-40);
    } else /* worked less than 40 hrs */ {
        amount_paid3 = hourly_rate3 * hours_worked3;
    }

    amount_taxed3 = amount_paid3 * 0.20;
    amount_final3 = amount_paid3 - amount_taxed3;

    printf("Pay to: %s", name3);
    printf("\nHourly rate: %.2f", hourly_rate3);
    printf("\nHours worked: %.1f", hours_worked3);
    printf("\nAmount paid: %.2f", amount_paid3);
    printf("\nTaxes paid: %.2f", amount_taxed3);
    printf("\nTake home: %.2f", amount_final3);


    /* Individual 4 */
    char name4[20];
    float 
        hours_worked4, hourly_rate4, 
        amount_paid4, amount_taxed4, 
        amount_final4;

    printf("Enter a name: ");
    scanf("%s", name4);
    printf("Enter hourly rate: ");
    scanf("%f", &hourly_rate4);
    printf("Enter hours worked: ");
    scanf("%f", &hours_worked4);

    if(hours_worked4 > 40) {
        amount_paid4 = hourly_rate4 * 40;
        float hourly_otime4 = hourly_rate4*1.5;
        amount_paid4 += (hourly_otime4) * (hours_worked4-40);
    } else /* worked less than 40 hrs */ {
        amount_paid4 = hourly_rate4 * hours_worked4;
    }

    amount_taxed4 = amount_paid4 * 0.20;
    amount_final4 = amount_paid4 - amount_taxed4;

    printf("Pay to: %s", name4);
    printf("\nHourly rate: %.2f", hourly_rate4);
    printf("\nHours worked: %.1f", hours_worked4);
    printf("\nAmount paid: %.2f", amount_paid4);
    printf("\nTaxes paid: %.2f", amount_taxed4);
    printf("\nTake home: %.2f", amount_final4);


    /* Individual 5 */
    char name5[20];
    float 
        hours_worked5, hourly_rate5, 
        amount_paid5, amount_taxed5, 
        amount_final5;

    printf("Enter a name: ");
    scanf("%s", name5);
    printf("Enter hourly rate: ");
    scanf("%f", &hourly_rate5);
    printf("Enter hours worked: ");
    scanf("%f", &hours_worked5);

    if(hours_worked5 > 40) {
        amount_paid5 = hourly_rate5 * 40;
        float hourly_otime5 = hourly_rate5*1.5;
        amount_paid5 += (hourly_otime5) * (hours_worked5-40);
    } else /* worked less than 40 hrs */ {
        amount_paid5 = hourly_rate5 * hours_worked5;
    }

    amount_taxed5 = amount_paid5 * 0.20;
    amount_final5 = amount_paid5 - amount_taxed5;

    printf("Pay to: %s", name5);
    printf("\nHourly rate: %.2f", hourly_rate5);
    printf("\nHours worked: %.1f", hours_worked5);
    printf("\nAmount paid: %.2f", amount_paid5);
    printf("\nTaxes paid: %.2f", amount_taxed5);
    printf("\nTake home: %.2f", amount_final5);
}