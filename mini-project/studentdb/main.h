#include<stdio.h>
#include<string.h>
#include<stdbool.h>

typedef struct Student{
    char name[25];
    char email[50];
    int roll;
    char dept[10];
    float cgpa;
    int year;
    int batch;
    char fee;
}Student;

void start_app();
void start_app(){
    printf("\t\t|---------------------------------------------------------------|");
    printf("\n\t\t|\t\t\t\t\t\t\t\t|");
    printf("\n\t\t|\t\t\t\t\t\t\t\t|");
    printf("\n\t\t|\t\t\t\t\t\t\t\t|");
    printf("\n\t\t|\t\t\tWelcome to Student Database\t\t|");
    printf("\n\t\t|\t\t\t\t\t\t\t\t|");
    printf("\n\t\t|\t\t\t\t\t\t\t\t|");
    printf("\n\t\t|\t\t\tChoose the Option Below\t\t\t|");
    printf("\n\t\t|\t\t\t\t\t\t\t\t|");
    printf("\n\t\t|\t\t\t1.Insert Student Record\t\t\t|");
    printf("\n\t\t|\t\t\t2.See Student Record\t\t\t|");
    printf("\n\t\t|\t\t\t3.See Each Student Record\t\t|");
    printf("\n\t\t|\t\t\t4.Check Each Student Fee\t\t|");
    printf("\n\t\t|\t\t\t5.Delete Student Record\t\t\t|");
    printf("\n\t\t|\t\t\t6.Exit\t\t\t\t\t|");
    printf("\n\t\t|\t\t\t\t\t\t\t\t|");
    printf("\n\t\t|\t\t\t\t\t\t\t\t|");
    printf("\n\t\t|---------------------------------------------------------------|\n");
}
void insert_data();
void display_all();
void display_each();
void check_fee();
void delete_student();
