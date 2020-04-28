#include<stdio.h>/*
int youngest(int x,int y, int z){
  return ( x >= y ? ( y >= z ? x : z ) : y );
}*/
int main(void){
	int x,y,z;
	printf("Enter the number of ages of the Ram, Shayam and Ajay:  ");
	scanf("%d%d%d",&x,&y,&z);
	int big= ( x >= y ? ( y >= z ? x : z ) : y);
	printf("THe age with %d is bigger: ",big);
			//youngest(x,y,z));
}
