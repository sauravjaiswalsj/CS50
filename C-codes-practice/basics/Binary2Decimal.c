
#include<stdio.h>

long todecimal(long n){
    long rem,sum=0,i=1;
    while(n!=0){
        rem=n%10;
        sum=sum+(rem*i);
        n/=10;
        i*=2;
    }
    return sum;
}
int main(void){
    long n;
    printf("Enter the Binary Value:  ");
    scanf("%ld",&n);
    printf("Binary to Decimal Conversion is:  %ld",todecimal(n));
}
