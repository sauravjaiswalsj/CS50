#include<stdio.h>
#include<stdbool.h>
bool checkSlope(int x1,int y1,int x2,int y2,int x3, int y3){
	int m1=(y2-y1)/(x2-x1);
	int m2=(y3-y1)/(x3-x1);
	printf("m1: %d,  m2: %d",m1,m2);
	if(m1==m2)
		return true;
	else
		return false;
}
int main(void){
	int x1,x2,x3,y1,y2,y3;
	printf("Enter the points in the format of x,y:  ");
	scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
	if(checkSlope(x1,y1,x2,y2,x3,y3)){
		printf("On Same Line");
	}else{
		printf("Not on same Line");
	}
}

