/* Write a C program to swap two numbers with using third variable */

#include<stdio.h>
int main(){

    int a ,b ,c ;
    
    printf("Enter the no before swap : ");
    scanf("%d",&a);

    printf("Enter the no before swap : ");
    scanf("%d",&b);

    
    c = a;
    a = b;
    b = c;

    printf("After swap the value is:%d \n",a);

    printf("After swap the value is:%d \n",b);

    return 0;

}