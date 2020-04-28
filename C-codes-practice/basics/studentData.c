#include<stdio.h>
int n=100;
struct student{
	int roll;
	char name[30];
	char dept[10];
	char course[20];
	int year;
};
struct student *info, s[n];
void insertData(struct *data,int n){
	for(int i=0;i<n;i++){
		scanf("%d %[^\n]s%s%s%d",s[i]data->roll,data->name,data->dept,data->course,data->year);
	}
}
int main(){
	int ch;
	printf("Welcome to student database system\n");
	printf("1.Insert Info\n2.View Data\n");
	printf("Enter the Option below: ");
	scanf("%d",&ch);
	int n;
	switch(ch){
		case 1:
			printf("Enter the number of student data you would like to insert: ");
			scanf("%d",&n);
			insertData(&info,n);
			break;
		case 2:
			display(&info


