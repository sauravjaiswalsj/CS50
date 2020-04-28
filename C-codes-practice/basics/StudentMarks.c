// To calculate the 
#include<stdio.h>

int main(void){
    float m1,m2,m3,m4,m5,avg,total;

    printf("Enter the marks of Each subject by pressing tab:  ");

    scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
    total=m1+m2+m3+m4+m5;
    avg=total/5;
    printf("Average is:%.2f\n Total is: %.2f",avg,total);
}