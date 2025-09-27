/* Write a C program to convert Celcius to Fehrenheit and Fehrenheit to Celcius */

#include<stdio.h>
int main (){

    float C ,F ;

    printf("Enter the Celcius value :");
    scanf("%f",&C);

    F = ((C*9)/5)+32 ;
    printf("The Fehrenheit value is :%f\n",F);


    printf("Enter the Fehrenheit value :");
    scanf("%f",&F);

    C = ((F - 32)*5)/9;
    printf("The celcius value is :%f\n",C);

    return 0;
}