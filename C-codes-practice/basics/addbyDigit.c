#include<stdio.h>
int reverse(int);
int addbyDigit(int num){
     int sum=0;
     while(num!=0){
         int r=num%10;
         r+=1;
         sum=sum*10+r;
         num/=10;
     }
     int number=reverse(sum);
     return (number);
}
int reverse(int sum){
    int s=0;
    while(sum!=0){
        int r=sum%10;
        s=s*10+r;
        sum/=10;
    }
    return s;
}
int main(void){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);    
    printf("%d",addbyDigit(num));
}