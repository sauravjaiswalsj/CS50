/*  12345678901234
 *  ------1-------		i=1
 *  ----2   3-----		2
 *  --4   5   6---		3
 *  7   8   9   10	4
 *  
 */
#include<stdio.h>
int main(void){
	int count=1;
	for(int i=7;i>=1;i--){
		for(int j=1;j<i;j++){
			printf(" ");
		}
		for(int k=7;k>=i;k-=2){
			printf("%d",count);
			count++;
		}
		printf("\n");
	}
}


