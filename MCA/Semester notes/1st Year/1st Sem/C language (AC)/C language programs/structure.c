#include<conio.h>
#include<stdio.h>
#include<string.h>

struct employee 
{
    int id;
    char name[20];
    struct DOJ
    {
        int dd;
        int mm;
        int yyyy;
    }doj_1;
    
}emp_1,emp_2;


void main(){
    emp_1.id = 101;
    strcpy(emp_1.name, "Anurag");
    emp_2.id = 102;
    strcpy(emp_2.name, "Manish");
    emp_1.doj_1.dd = 10;
    emp_1.doj_1.mm = 11;
    emp_1.doj_1.yyyy = 2023;
    emp_2.doj_1.dd = 18;
    emp_2.doj_1.mm = 8;
    emp_2.doj_1.yyyy = 2003;

    printf("Employee 1 id is : %d\n",emp_1.id);
    printf("Employee 1 name is : %s\n",emp_1.name);
    printf("Employee 1 date of joining is (dd/mm/yyyy) : %d/%d/%d\n",emp_1.doj_1.dd, emp_1.doj_1.mm, emp_1.doj_1.yyyy);
    printf("Employee 2 id is : %d\n",emp_2.id);
    printf("Employee 2 name is : %s\n",emp_2.name);
    printf("Employee 2 date of joining is (dd/mm/yyyy) : %d/%d/%d\n",emp_2.doj_1.dd, emp_2.doj_1.mm, emp_2.doj_1.yyyy);
}