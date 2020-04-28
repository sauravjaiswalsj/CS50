/* n=5
 * n=5*4*3*2*1;
 *
 * */

#include<stdio.h>
int main(void){
	int n,s=1;
	printf("Enter the factorial number:  ");
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
		s=s*i;
	}
	printf("Factorial is %d\n",s);
}

