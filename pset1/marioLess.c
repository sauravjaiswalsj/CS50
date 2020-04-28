#include<stdio.h>

int main(void){
    int user_input;
    do{
        printf("Height: ");
        scanf("%d",&user_input);
      }while(user_input<=0 || user_input>=9);
      printf("%d\n",user_input);
      
      for(int i=1;i<=user_input;i++){
          for(int j=user_input;j>i;j--){
              printf(" ");
          }
          for(int k=0;k<i;k++){
              printf("*");
          }printf("\n");
      }
}

