#include<stdio.h>
#define Print(x) (printf("%d\n",x))
int display(int *);
int show(int **);
int main(void){
	int arr[4]={10,25,35,64};
	for(int i=0; i<4;i++){
		display(&arr[i]);
	}
}
int display(int *p){
	show(&p);
	
}
int show(int **t){
	int r=**t;
	Print(r);
}
