#include<stdio.h>
#include<stdlib.h>
#define SIZE 16
int stack[SIZE];
int top=-1;
void push(int value){
	if(top<SIZE-1){
		if(top<0){
			stack[0]=value;
			top=0;
		}
		else{
			stack[top+1]=value;
			top++;
		}
	}
}
int pop(){
	if(top>=0){
		int n=stack[top];
		top--;
		return n;
	}
}

void cardValidator(long unsigned int card_no){
	long unsigned int crd_no=card_no;
	
	int count=0,x,tmp;
	while(crd_no!=0){
		tmp=-1;
		tmp=crd_no%10;
		push(tmp);
		crd_no/=10;
		count++;
	}
	int cardArray[SIZE],copycardArray[SIZE];
	for(int i=0;i<count;i++){
		x=pop();
		cardArray[i]=x;
		copycardArray[i]=x;
	}
	int sumE=0,sumO=0;
	for(int i=0;i<count;i+=2){
		cardArray[i]=cardArray[i]*2;
		sumE=sumE+cardArray[i];
	}	
	for(int i=1;i<count;i+=2){
		sumO=sumO+cardArray[i];
	}
	int total=sumO+sumE;
	printf("sumE:%d\tsum0:%d\t total:%d\n",sumE,sumO,total);
	if(total%10==0){
		if(copycardArray[0]==4){
			printf("VISA");
		}
		else if(copycardArray[0] == 3 && (copycardArray[1]==4 || copycardArray[1]==7)){
				printf("American Express");
		}
		else{
			printf("Master card");
		}
	}else{
		printf("invalid card");
	}


}
int main(void ){
	long unsigned int card_no;
	do{
		scanf("%lu",&card_no);
	}while(card_no>=9999999999999999);
	if(card_no<=999999999999){
		printf("INVALID");
	}else{
		cardValidator(card_no);
	}
}


