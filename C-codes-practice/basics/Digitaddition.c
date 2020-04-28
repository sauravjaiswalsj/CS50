#include<stdio.h>
int sum(int temp){
    int sum=0;
    while(temp!=0){
        int x=temp%10;
        sum=sum+x;
        temp=temp/10;
    }
    return sum;
}

int main(void){
    int x;
    scanf("%d",&x);
    printf("sum is: %d",sum(x));
}