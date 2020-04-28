#include<stdio.h>
#include <stdbool.h>
bool CoPrime(int a,int b){
    int count=0;
    int min=a<b?a:b;
    for(int i=2;i<=min;i++){
        if(a%i==0 && b%i==0){
            count++;
        }
    }
    if(count>0){return false;}
    else
    {
        return true;    
    }
    
    
}
int main(void){
    int a,b;
    printf("Enter the number to check wether co prime or not:  ");
    scanf("%d%d", &a,&b);
    if(CoPrime(a,b)){
        printf("%d and %d are Co Prime Numbers", a,b);
    }else{
           printf("%d and %d are not Co Prime Numbers",a,b);
         
    }
}