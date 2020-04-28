#include<stdio.h>
#include<math.h>

int main(void){
	float a,b,c,x,y,d;
	printf("Enter the equation coefficient ax^2 + by+c:   ");
	scanf("%f%f%f",&a,&b,&c);
	d=(pow(b,2)-4*a*c);
	printf("d is: %2.f",d);
	if(d<0){
		printf("Imaginary Roots");
	}
	else if(d==0){
		x=-b/(2*a);
		printf("Roots are %.3f %.3f\n",x,x);
	}
	else{
		x=(-b+sqrt(d))/(2*a);
		y=(-b-sqrt(d))/(2*a);
		printf("Roots are %.3f %.3f",x,y);
	}
}
