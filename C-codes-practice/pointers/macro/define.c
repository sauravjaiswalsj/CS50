#include<stdio.h>
#define AND &&
#define OR ||
#define ARRANGE (a > 25 AND a < 50)
#define FOUND printf("The Books are here")

int main(){
	int a=30;
	if(ARRANGE){
		FOUND;
	}
	return 0;
}
