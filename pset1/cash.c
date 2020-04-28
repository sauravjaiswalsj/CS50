#include<stdio.h>
int main(void){
    float dlrs;
    scanf("%f",&dlrs);    
    int cent=(int)((dlrs-(int)dlrs)*100);
    int money[4]={25,10,5,1};
    int count=0,i=0;
    while(i<4){
        if(cent>=money[i]){
            i=0;
            printf("cent:%d\t money:%d\n",cent,money[i]);
            cent=cent-money[i];
             count+=1;
            printf("cent:%d\t count:%d \t i:%d\n ",cent,count,i);
            }else{i++;}
           
        }
    printf("%d",count);
}

