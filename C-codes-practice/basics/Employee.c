#include<stdio.h>
int main(void){
	int hr,i=1;
	while(i<=10){
		printf("Hey Employee %d\nHow many hour did your work for?  ",i);
		scanf("%d",&hr);
		if(hr>=40){
			printf("Hey Employee %d your Bonus is %d \n",i,(hr-40)*12);
		}
		else{
			printf("No bonus for you\n");
		}
		i++;
	}
}
		
