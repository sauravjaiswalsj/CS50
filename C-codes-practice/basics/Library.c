#include<stdio.h>
void manageBook(int book_days){
  if(book_days<6){
    printf("You need to pay 50 Paise");
  }else if(book_days>=6 && book_days<11){printf("You need to pay Rs. 1");}
  else if(book_days>10 && book_days<=31){printf("You need to pay Rs. 5");}
  else{printf("We are happy to inform you that your subscription is canceled :)");}
}

int main(void){
	printf("Library Management \n");
	int book_days;
	printf("Enter the no. of days the book was borrowed for:   ");
	scanf("%d",&book_days);
	manageBook(book_days);
	printf("\n");
}
