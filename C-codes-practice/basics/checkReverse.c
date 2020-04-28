#include<stdio.h>
int reverse(int num){int sum=0;while(num!=0){int r=num%10;sum=sum*10+r;num/=10;}return sum;}
int main(void){int n;scanf("%d",&n);int x=reverse(n);printf("Reversed: %d\n",x);if(x==n){printf("Not revsesd\n");}else{printf("Reversed\n");}}
