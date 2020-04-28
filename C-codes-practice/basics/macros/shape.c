#include<stdio.h>
#include "areaperi.h"

int main(){
	int a,b,c,r,s;
	printf("Enter the Sides of the Triangle followed by radius of the circle and finally the sides of the square\n");
	scanf("%d%d%d%d%d",&a,&b,&c,&r,&s);
	int SUM=((a+b+c)/2);
	printf("Perimeter of Triangle is: %d\nCircle is: %1.f\nSquare is: %d\n",PTRIANGLE(a,b,c),PCIRCLE(r),PSQUARE(s));
	printf("Area of Triangle is: %1.f\nCircle is: %1.f\nSquare is: %d",TRIANGLE(a,b,c,SUM),CIRCLE(r),SQUARE(s));
	return 0;
}
