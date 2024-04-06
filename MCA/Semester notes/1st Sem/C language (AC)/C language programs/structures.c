#include<conio.h>
#include<stdio.h>
#include<string.h>

// user defined datatype
struct student {
    int roll;
    float cgpa;
    char name[100];
};

void printinfo(struct student s1); // this is not declared before user defined

// typedef keyword
typedef struct employee {
    int emp_no;
    float salary; 
    char name[100];
} emp;

void main(){

    emp.e1; 
    e1.emp_no = 1001;
    e1.salary = 200000;
    strcpy(e1.name, "Anurag");

    struct student s1;
    s1.roll = 101;
    s1.cgpa = 9.8;
    // s1.name = "Anurag";// here we cannot use it 
    strcpy(s1.name, "Anurag");

    printf("Student name is: %s \n", s1.name);
    printf("Student roll no is: %d \n", s1.roll);
    printf("Student cgpa is: %f\n", s1.cgpa);

    struct student s2;
    s2.roll = 101;
    s2.cgpa = 9.7;
    // s1.name = "Anurag";// here we cannot use it 
    strcpy(s2.name, "Vikas");

    printf("Student name is: %s \n", s2.name);
    printf("Student roll no is: %d \n", s2.roll);
    printf("Student cgpa is: %f\n", s2.cgpa);

    struct student s3;
    s3.roll = 103;
    s3.cgpa = 9.0;
    // s1.name = "Anurag";// here we cannot use it 
    strcpy(s3.name, "Sanskar");

    printf("Student name is: %s \n", s3.name);
    printf("Student roll no is: %d \n", s3.roll);
    printf("Student cgpa is: %f\n", s3.cgpa);

    // array of structures
    struct student ece[100];
    ece[0].roll = 104;
    ece[1].cgpa = 8.7;

    // initialization of structure
    struct student s4 = {105, 7.6, "Sanskar"};
    printf("Student roll no : %d \n", s4.roll);

    // pointers to structures
    struct student *ptr = &s4;
    printf("Student roll no : %s \n", (*ptr).name);

    // arrow operator
    printf("Student roll no with arrow: %s \n", ptr->name); // same as above 

    // passing structure to function
    printinfo(s1);

}


    // passing structure to function call by value
void printinfo(struct student s1){
    printf("Student information : \n");
    printf("Student roll no : %d \n", s1.roll);
    printf("Student name: %s \n", s1.name);
    printf("Student cgpa : %f \n", s1.cgpa);
}