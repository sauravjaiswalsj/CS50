#include<stdio.h>
int main(){
	int arr[]={10,20,30,40,50,60,70};
	int *i,*j;
	i=&arr[2];
	j=arr+4;
	printf("%d\n",*j);
	printf("%p\n",arr);
	printf("%p\n",&arr[0]);
	//1024
	//printf("%p\n",y);//102
	
	if(i==j){
		printf("yes");
	}else{
		printf("No");
	}
	return 0;
}
