#include<stdio.h>
#define PRODUCT(x) (x*x)
int main(){
        int i=3,j,k;
        j=PRODUCT(i++);
	k=PRODUCT(++i);
        printf("%d\n%d",j,k);
}

