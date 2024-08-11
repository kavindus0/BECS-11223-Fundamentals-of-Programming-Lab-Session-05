#include <stdio.h>

int main(){
/*
Write a C program that read a temperature in Fahrenheit and prints the corresponding temperature in Celsius.
C = ((F − 32)*5)/9
Test data and expected output:
Enter temp in Farenheit:98.4
Temp 98.40 in Farenheit = 36.89 Centigrade
*/

printf("Enter temp in Farenheit:");
float y;
scanf("%f",&y);
printf("Temp %.2f in Farenheit = %.2f Centigrade\n",y,((y-32)*5)/9);


return 0;
}
