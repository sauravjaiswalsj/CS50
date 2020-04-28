/**
 * Hardness >50
 * Carbon <0.7
 * Tensile>5600
 * grade 10 -> all met
 * grade 9 ->(i) and (ii)
 * grade 8 ->(ii) and (iii)
 * grade 7 ->(i) and (iii)
 * grade 6 ->if any one
 * grade 5 -> none
 * */
#include<stdio.h>
int main(void){
	int hardness, tensile;
	float carbon;
	printf("Enter the Hardness of the steel, Carbon content and tensile strength:  ");
	scanf("%d%f%d",&hardness,&carbon,&tensile);
	if(hardness>50 && carbon <0.7 && tensile>5600){
		printf("Grade 10\n");
	}
	//        1    &        2
	else if((hardness>50 && carbon<0.7)&&(tensile<5600)){
		printf("Grade 9\n");
	}
	else if(hardness<=50 && (carbon<0.7 && tensile>5600)){
                printf("Grade 8\n");
        }
	else if((hardness>50 && tensile>5600)&&(carbon>0.7)){
                printf("Grade 7\n");
        }
	else if(hardness>50 || carbon<0.7 || tensile>5600){
                printf("Grade 6\n");
        } 
	else{
	printf("Grade 5");
	}
}	

