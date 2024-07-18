#include<stdio.h>
#include<conio.h>

void main(){
    FILE *fptr;


    // read the integer from the file
    fptr = fopen("integer.txt", "r");
    
    char ch1;
    ch1  = fgetc(fptr);
    while(ch1 != EOF){
        printf("%c", ch1);
        ch1 = fgetc(fptr);
    }
    printf("\n");

    // input student information and enter into the file
    fptr = fopen("student.txt", "w");

    char name[100];
    int age;
    float cgpa;

    printf("Enter the name : \n");
    scanf("%s", &name);

    printf("Enter the age : \n");
    scanf("%d", &age);

    printf("Enter the cgpa : \n");
    scanf("%f", &cgpa);
    
    fprintf(fptr, "Student name : %s\n", name);
    fprintf(fptr, "age : %d\n", age);
    fprintf(fptr, "cgpa : %f", cgpa);

    // write all the odd numbers from 1 to n in a file.
    fptr = fopen("odd.txt", "w");

    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);

    for(int i = 1; i<=n; i++){
        if(i%2 !=0){
            fprintf(fptr, "%d\n", i);
        }
    }

    // two numbers are already written in file we have replace them with their sum
    fptr = fopen("sum.txt", "r");

    int a;
    fscanf(fptr, "%d", &a);
    int b;
    fscanf(fptr, "%d", &b);

    fclose(fptr);

    fptr = fopen("sum.txt", "w");
    fprintf(fptr, "%d", a + b);

    fclose(fptr);
}
