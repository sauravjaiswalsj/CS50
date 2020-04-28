// Sum  of 1st and last digit

#include<stdio.h>
int sum(int x){
    int lastD,firstD;
    lastD=x%10;
    while(x!=0){
         int i=x%10;
         if(x<10){
             firstD=x;
            
         }
         x/=10;
    }
    return (firstD+lastD);
}

int main(void){
    int num;
    printf("Enter the Number whose 1st and Last digit sum has to be calculated: ");
    scanf("%d",&num);
    printf("%d",sum(num));
}