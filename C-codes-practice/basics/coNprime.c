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
    int n,a=3;
    printf("Enter the number to find the co N Primes:  ");
    scanf("%d", &n);
    printf("Co N Primes are \n");
    for (int i = 2; i <=n; i++)
    {   
        if(CoPrime(i,a)){
            printf("%d and %d\n", i,a);
        }
        a++;
    }
}
