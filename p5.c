/* Write a C program to calculate area of circle */

#include<stdio.h>
int main(){
    int r;
    float A;
    
    printf("Enter the radius : ");
    scanf("%d",&r);

    A = 3.14 *r*r;
    printf("The value of area : %f \n", A);
    
    return 0;

}