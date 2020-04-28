#include<stdio.h>
void func(){
	auto int i=0;
	register int j=0;
	static int k=0;
	i++;
	j++;
	k++;
	printf(" %d %d %d\n",i,j,k);
}
int main(){
	func();
	func();
	return 0;
}
