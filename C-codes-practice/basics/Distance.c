/* This programs convert the distance between two cities in metre, feet,inches and centimetre
 * Given input in Km
 * */

#include<stdio.h>

int main(void){
	double distancein_Km,to_metre,to_feet,to_inches,to_cm;
	printf("Enter the distance between the two cities:   ");
	scanf("%lf",&distancein_Km);
	to_metre=distancein_Km*1000;
	to_feet=distancein_Km*3280.84;
	to_inches=distancein_Km*39370.1;
	to_cm=distancein_Km*1000*100;
	printf("Distance in KM: %lf\nTO metre: %.3lf\nTo feet: %.3lf\nTo Inches: %.3lf\nTo Centimetre: %.3lf\n",distancein_Km,to_metre,to_feet,to_inches,to_cm);

}

