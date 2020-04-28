/** Input l,b and radius
 * rect area=l*b;
 * perimeter 2*(l+b)
 * circumference=2*pi*r
 * area=pi*r*r
 * */
#include<stdio.h>
#define PI 3.14

void Circle(float );
void Rectangle(float ,float);
int main(void){
    float len,breadth,radius;
    printf("Enter the length, breadth and Radius to compute:  ");
    scanf("%f%f%f",&len,&breadth,&radius);
    Circle(radius);
    Rectangle(len,breadth);
}
void Circle(float r){
    printf("Circumference is :%.2f\nArea is: %.2f\n",2*PI*r, PI*r*r);
}
void Rectangle(float l,float b){
    printf("Perimeter is: %.2f\nArea is: %.2f",2*(l*b),l*b);
}