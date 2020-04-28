/*
 * A B C D E F G F E D C B A
 * A B C D E F   F E D C B A
 * A B C D E       E D C B A
 * A B C D           D C B A
 * A B C               C B A
 * A B                   B A
 * A                       A
 *
 * */


#include<stdio.h>
int main(void){
	int n=7;
	int val=(int)'A'-1;
	for(int i=1;i<=7;i++){
		for(int j=1;j<=n;j++){
			printf("%c ",(char)val+j);
		}
		for(int a=1;a<i;a++){
			printf("  *  ");
		}
		for(int k=n;k>=1;k--){
			if(k!=7)
				printf("%c ",(char)val+k);
		} 
		printf("\n");
		n--;

	}

}

