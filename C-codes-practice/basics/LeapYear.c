#include<stdio.h>
#include<stdbool.h>
bool leapYear(int yr){
	if(yr%400==0)
		return true;
	else if((yr%100==0)&&(yr%400!=0))
		return false;
	else if((yr%4==0)&&(yr%400!=0)||(yr%100!=0))
		return true;
	else
		return false;
}

int main(void){
	int year;
	scanf("%d",&year);
	bool x=leapYear(year);
	if(x){
		printf("Leap Year");
	}else{
		printf("Not a leap year");
	}
}
