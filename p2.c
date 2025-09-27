/* Write a C program to add floating no taking value from user */

#include<stdio.h>
int main(){

    float a, b, c;

    printf("Enter the value of a: ");
    scanf("%f",&a);

    printf("Enter the value of b: ");
    scanf("%f",&b);

    c = a + b ;

    printf("The sum is: %f \n", c);
    
    return 0;



}