/*Write a C program to find the last digit of an integer using modulus operator and without modulus operator */

#include<stdio.h>
int main(){

    int a ,b ,c ;
    printf("Enter the integer :");
    scanf("%d",&a);

    b = a % 10;
    printf("The last digit is : %d\n",b);

    c = a - ( a / 10 ) * 10 ;
    printf("The last digit is : %d\n",c);

    return 0;



}