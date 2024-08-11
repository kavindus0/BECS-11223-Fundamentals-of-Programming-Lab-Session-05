#include <stdio.h>

int main(){
    
    //    Write a C program that accepts a distance in inches from the user and prints the corresponding value in cms. Note that 1 inch = 2.54 cm.
    //    Test data and expected output:
    //    Enter the distance in inches:3
    //    Distance 3.00 inches is = 7.62 cms
    //
    float x;
    printf("Enter the distance in inches ");
    scanf("%f",&x);
    printf("\nDistance %.2f inches is = %.2f cms\n",x,x*2.54);
    
}
