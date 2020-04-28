// Swap to number without using the third Variable

#include<stdio.h>
void swap(int,int);
int main(void){
    int a,b;
    printf("Enter the number: ");
    scanf("%d%d",&a,&b);
    printf("Before Swap\n");
    printf("a: %d\nb: %d\n\n",a,b);
    swap(a,b);
}
void swap(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After Swap\n");
    printf("a: %d\nb: %d\n",a,b);
}