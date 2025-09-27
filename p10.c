/* Write a C program to swap two numbers without using third variable */

#include<stdio.h>
int main(){

    int a ,b ;
    
    printf("Enter the no before swap : ");
    scanf("%d",&a);

    printf("Enter the no before swap : ");
    scanf("%d",&b);

    a = a + b;
    b = a - b;
    a = a - b;
    

    printf("After swap the value is:%d \n",a);

    printf("After swap the value is:%d \n",b);

    return 0;

}