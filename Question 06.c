#include <stdio.h>

int main(){
/*
 Quesstion 05.c
 5. Write a C program to determine an employee weekly salary based on the following information.
 • Read the employee regular hourly pay rate from user.
 • Read the employee hours worked from the user.
 • Calculate the total weekly pay for the employee. (No overtime pay for this example.)
 • Then, display the results in the following example:
 Test data and expected output:
 Enter hourly pay rate:200
 Enter hours worked: 50
 ********* Weekly Salary *********
 Hourly Rate:
 200.00
 Hours Worked:
 50.00
 Weekly Salary:
 10000.00
 */

    printf("Enter hourly pay rate:");
    float hrRate;
    scanf("%f",&hrRate);
    printf("Enter hours worked:");
    float hrs;
    scanf("%f",&hrs);
    
printf("********* Weekly Salary *********\n");
    printf("Hourly Rate:\n%.2f",hrRate);
    printf("\nHours Worked:\n%.2f",hrs);printf("\nWeekly Salary:\n%.2f\n",hrs*hrRate);
    


return 0;
}
