/* this programs calculate the gross sallary of the person based on the basic sallry
 * gross sallary is the net sallary earned by a person before any allowance is applied on it
 * */

#include<stdio.h>
int main(void){
	float basic_salary,dearness_allowance, house_rent;
	printf("Enter the Basic sallary:  ");
	scanf("%f",&basic_salary);
	dearness_allowance=0.4*basic_salary;
	house_rent=0.2*basic_salary;
	float gross_salary=basic_salary+dearness_allowance+house_rent;
	printf("Gross Salary of the person is: %.2f",gross_salary);
}
