#include<stdio.h>
void linkfloat(){
	float a=0,*b;
	b=&a;
	a=*b;
}
struct book{
	char name;
	float prices;
	int pages;
};
struct book b[5];
int main(void){
	printf("book stores");
	for(int i=0;i<5;i++){
		printf("Name: pages: price: ");
		scanf("%c%f%d",&b[i].name,&b[i].prices,&b[i].pages);
	}
	for(int i=0;i<5;i++){
		printf("%c\t%2.f\t%d\n",b[i].name,b[i].prices,b[i].pages);
	}
}
