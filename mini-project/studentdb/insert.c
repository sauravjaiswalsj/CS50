#include<stdio.h>
#include "main.h"
Student record;
void insert_data(){
    int n;
    printf("Enter the Number of student of student data you would like to enter: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    printf("\nname: ");
    scanf("%[^\n]s",&record.name[i]);

    printf("\nemail: ");
    scanf("%[^\n]s",record.email);
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
    
}
int main(void){
    insert_data();
    printf("%s,%s,%d,%s,%f,%d,%d,%c", record.name,record.email,record.roll,record.dept,record.cgpa,record.year,record.batch,record.fee);
    return 0;
}
