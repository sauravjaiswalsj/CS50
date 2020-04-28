#include<stdio.h>
#define AND &&
#define SMALL(x) (x>='a' AND x<='z')
#define UPPER(x) (x>='A' AND x<='Z')
#define LARGE(a,b) ((a)>(b)?a:b)
int main(){
	int a,b;
	char ca;
	printf("Two numbers and A letter\n");
	scanf("%c%d%d",&ca,&a,&b);
	if(SMALL(ca))
		printf("Letter is small: %c\n",ca);
	else if(UPPER(ca))
		printf("Letter is Upper: %c\n",ca);
	else
		printf("Not an alphabet\n");
	
	printf("Larger between %d and %d is: %d",a,b,LARGE(a,b));
	return 0;
}
