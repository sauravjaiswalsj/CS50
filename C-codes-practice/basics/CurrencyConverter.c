#include<stdio.h>
int NotesCount(int amount){
    int money[3]={100,50,10};
    int i=0,count=0;
    while(i<3){
        if(amount>=money[i]){
            amount=amount-money[i];
            count+=1;
            i=0;
        }else{i++;}
    }
    return count;
}
int main(void){
    int currency;
    printf("Enter the amount in the multiple of 10 or 100:  ");
    scanf("%d",&currency);
    printf("Number of notes: %d",NotesCount(currency));
}