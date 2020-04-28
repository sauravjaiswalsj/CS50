#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int ip;
    do{
        printf("Height: ");
        scanf("%d",&ip);
    }while(ip<=0 || ip>=9);
    for(int i=1;i<=ip;i++){
        for(int j=ip;j>i;j--){
            printf(" ");
        }
        for(int k=0;k<i;k++){
            printf("*");
        }
        printf("  ");
        for(int a=0;a<i;a++){
        printf("*");
        }    
        printf("\n");
    }
    
}

