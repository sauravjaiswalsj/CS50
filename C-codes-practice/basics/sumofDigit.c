#include<stdio.h>
int add(int x){
    int sum=0;
    while(x!=0){
        int p=x%10;
        sum=p+sum;
        x/=10;
    }
    return sum;
}
int main(void){
    int x;
    printf("Enter the value to be find sum of:  ");
    scanf("%d",&x);
    printf("%d",add(x));
}