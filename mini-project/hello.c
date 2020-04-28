#include<stdio.h>
typedef struct Student{
	char name[50];
	int roll;
	
}Student;
Student record;
void insert(){
	printf("Name \nRoll: ");
	scanf("%s%d",record.name,&record.roll);
}

void display(){
	printf("Name: %s\nRoll: %d",record.name,record.roll);
}
int main(){
	insert();
	display();
}
