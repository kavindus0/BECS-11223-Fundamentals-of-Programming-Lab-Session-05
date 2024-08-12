#include <stdio.h>

int main(){
/*

Write a C program to implement a simple receipt generator. This shop sells only two products and calculate
the total bill amount based on the quantity purchased by the user and display receipt according the following
guidelines.
• Unit price for the Laptop is 120,000.00 and Mobile Phone is 55,000.00.
• Read number of laptops purchased by the customer.
• Read number of phones purchased by the customer.
• Then, calculate the total amount for the receipt and display it in the following format:
Enter Number of Laptop Purchased:2
Enter Number of Phones Purchased: 10
********* Welcome UoK Digital Store ********************
Description No of Units Unit Price Sub Total
Laptop 2 120000.00 240000.00
Phone 10 55000.00 550000.00
Total Amount 790000.00
----------------------------------------------------------------------------------------------------
 */

float unitLaptop = 120000;
float unitMobile = 55000;
printf("Enter Number of Laptop Purchased:");
int laptopNo,mobileNo;
scanf("%d",&laptopNo);
printf("Enter Number of Phones Purchased:");
scanf("%d",&mobileNo);
printf("********* Welcome UoK Digital Store ********************\n");
printf("Description\tNo of Units\tUnit Price\tSub Total");
printf("\nLaptop\t\t%d\t%.2f\t%.2f\n",laptopNo,unitLaptop,laptopNo*unitLaptop);
printf("Phone\t\t%d\t%.2f\t%.2f",mobileNo,unitMobile,mobileNo*unitMobile);


return 0;
}
