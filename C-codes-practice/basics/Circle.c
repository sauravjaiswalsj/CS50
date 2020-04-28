/**
 * to find the points lies on or in or outside the circle use we need to use the formula
 *      ________________________ 	
 *     /       2            2
 *d= \/ (X1-C1)   +  (X2-C2)

 */

#include<stdio.h>
#include <math.h>
#include<stdbool.h>
int points(int c1,int c2, int x1,int y1){
	return (sqrt(pow((x1-c1),2)+pow((y1-c2),2)));
}
int main(void){
	int c1,c2,r;
	printf("Enter the Centre Points and then the radius   ");
	scanf("%d%d%d",&c1,&c2,&r);
	int x1,y1;
	printf("Enter the points Whole Geometry has to find:  ");
	scanf("%d%d",&x1,&y1);
	int d= points(c1,c2,x1,y1);
	if(d<=r)
		printf("In the circle");
	else if(d==r)
		printf("On the Circle");
	else
		printf("Outside the circle");
}

	
