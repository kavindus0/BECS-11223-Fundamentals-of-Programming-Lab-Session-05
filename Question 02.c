//
//  Question 02.c
//
//  Created by kavindu on 2024-08-12.
//

#include <stdio.h>

int main(){
//    Write a C program that reads two values from the user, then swaps their values and prints out the result.
//    Test data and expected output:
//    Enter two real values to be swapped:2.4 5.7
//    Values entered are a=2.400000 and b=5.700000
//    Values after swap are a=5.700000 and b=2.400000
//    
    printf("Enter two real values to be swapped:");
    float a,b;
    scanf("%f %f",&a,&b);
    printf("Values entered are a=%f and b=%f\n",a,b);
    float z;
    z = a;
    a = b;
    b = z;
    printf("Values after swap are a=%f and b=%f\n",a,b);
    
    return 0;
    
}
