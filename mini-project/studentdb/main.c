#include<stdio.h>
#include<time.h>
#include "main.h"

void insert_data(){
    int n;
    printf("Enter the Number of student of student data you would like to enter: ");
    scanf("%d",&n);
    Student record;
    printf("\nname: ");
    scanf("%[^\n]*c",record.name);
    printf("\nemail: ");
    scanf("%[^\n]*c",record.email);
    printf("\nRoll Number: ");
    scanf("%d",&record.roll);
    printf("\nDepartment(cse): ");
    scanf("%s",record.dept);
    printf("\nCGPA: ");
    scanf("%f",&record.cgpa);
    printf("\nCurrent Year: ");
    scanf("%d",&record.year);
    printf("\nYear of Passing: ");
    scanf("%d",&record.batch);
    printf("\nFee(y:Yes/ n:No): ");
    scanf("%c", &record.fee);
}
void display_all(){

}
void display_each(){
    
}
void check_fee(){
    
}
void delete_student(){
    
}
int main(int argc, char* argv[argc]){
    start_app();
    int choice;
    printf("\n\t\t\t\t\tChoose the Option Below: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            insert_data();
            break;
        case 2:
            display_all();
            break;
        case 3:
            display_each();
            break;
        case 4:
            check_fee();
            break;
        case 5:
            delete_student();
            break;
        case 6:
            printf("\n\t\t\t\t\tGood Bye!\n");

            break;
        default:
            printf("\n\t\t\t\t\tOpps! You entered wrong choice! Please enter again");
            break;
    }
    return 0;
}