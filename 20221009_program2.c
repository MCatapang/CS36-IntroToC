/*
    Original Instructions:
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

/*
    Current Instructions:
        1. Update the first program.
        2. Use for loops to process the data for 
            5 employees.
            - If any of the entered fields are '-1', 
                break out of the loop.
        3. Use arrays to store the user input.
        4. The program logic will first load all of the
            data, until the user enters the max number
            of records or '-1' is entered for input 
            in one of the fields.
        5. After the data is loaded, it will then be 
            processed and output will then be generated. 
*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char name[5][20];
    float 
        hours_worked[5], hourly_rate[5], 
        amount_paid[5], amount_taxed[5], 
        amount_final[5], overtime_pay[5],
        base_pay[5];
    int should_print[5] = {0,0,0,0,0};

    for(int i=0; i<5; i++)
    {
        should_print[i] = 0;
        char tempName[20];
        float tempRate, tempWorked;

        /* Name */
        printf("\nEnter a name: ");
        scanf("%s", &tempName[0]);
        int check = strcmp(tempName, "-1");
        if(check == 0)
        {
            break;
        }
        else
        {
            strcpy(name[i], tempName);
        }
        
        /* Hourly Rate */
        printf("Enter hourly rate: ");
        scanf("%f", &tempRate);
        if(tempRate == -1)
        {
            break;
        }
        else
        {
            hourly_rate[i] = tempRate;
        }
        
        /* Hours Worked */
        printf("Enter hours worked: ");
        scanf("%f", &tempWorked);
        if(tempWorked == -1)
        {
            break;
        }
        else
        {
            hours_worked[i] = tempWorked;
            should_print[i] = 1;
        }

        if(should_print[i] == 1)
        {
            /* Overtime Logic */
            if(hours_worked[i] > 40) 
            {
                amount_paid[i] = hourly_rate[i] * 40;
                base_pay[i] = amount_paid[i];
                float hourly_otime = hourly_rate[i]*1.5;
                overtime_pay[i] = (hourly_otime) * (hours_worked[i]-40);
                amount_paid[i] += overtime_pay[i];
            } 
            else
            {
                amount_paid[i] = hourly_rate[i] * hours_worked[i];
                base_pay[i] = amount_paid[i];
                overtime_pay[i] = 0.00;
            }

            /* Taxed Amount, and Take-Home Amount 
            
            */
            amount_taxed[i] = amount_paid[i] * 0.20;
            amount_final[i] = amount_paid[i] - amount_taxed[i];
        }
    }

    for(int i=0; i<5; i++)
    {
        if(should_print[i] == 1)
        {
            printf("\n\nPay to: %s", name[i]);
            printf("\nHours worked: %.1f", hours_worked[i]);
            printf("\nHourly rate: $%.2f", hourly_rate[i]);
            printf("\nGross pay: $%.2f", amount_paid[i]);
            printf("\nBase pay: $%.2f", base_pay[i]);
            printf("\nOvertime pay: $%.2f", overtime_pay[i]);
            printf("\nTaxes paid: %.2f", amount_taxed[i]);
            printf("\nNet pay: %.2f", amount_final[i]);
        }
    }
}