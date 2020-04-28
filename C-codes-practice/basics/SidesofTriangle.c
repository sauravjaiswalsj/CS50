#include<stdio.h>
#include<math.h>
char sidesChecker(int a,int b,int c){
	if((a==b)&&(a==c)&&(b==c))
		return 'e';
	else if((a==b)||(a==c)||(b==c))
		return 'i';
	else if(pow(a,2)==(pow(b,2)+pow(c,2)))
		return 'r';
	else
		return 's';
}

int main(void){
	int s1,s2,s3;
	printf("Enter the sides of as H,P,b:  ");
	scanf("%d%d%d",&s1,&s2,&s3);
	char c=sidesChecker(s1,s2,s3);
	if(c=='e')
		printf("Equilateral\n");
	else if(c=='i')
		printf("Isoceles Triangle\n");
	else if(c=='r')
		printf("Right Angled Triangle\n");
	else
		printf("Scalene Triangle\n");
}
