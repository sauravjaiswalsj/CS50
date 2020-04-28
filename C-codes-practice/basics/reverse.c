#include<stdio.h>
int reverse(int x){
    int sum=0;
    while(x!=0){
        int p=x%10;
        sum=p+sum*10;
        x/=10;
    }
    return sum;
}
int main(void){
    int x;
    printf("Enter the value to be reversed");
    scanf("%d",&x);
    printf("%d",reverse(x));
}