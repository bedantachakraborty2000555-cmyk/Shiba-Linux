/* Write a C program to calculate the simple interest */

#include<stdio.h>
int main(){

    float TM, p, r, t;

    printf("Enter the principle amount :");
    scanf("%f",&p);

     printf("Enter the rate per year :");
     scanf("%f",&r);

     printf("Enter the time :");
     scanf("%f",&t);

     TM = (p * r * t)/100;
     printf("The total amount is : %f \n", TM);

     return 0;

}