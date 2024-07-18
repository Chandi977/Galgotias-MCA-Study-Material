#include<conio.h>
#include<stdio.h>

void printString(char arr[]);
int countlength(char arr[]);

void main(){
    char name[] = {'A', 'N', 'U', 'R', 'A', 'G', '\0'};
    char naam[] = "ANURAG VARSHNEY"; // this is same as above
    
    char firstname[] = "Anurag";
    char secondname[] = "Varshney"; 
    printString(firstname);
    printString(secondname);

    char yourname[50];
    scanf("%s", yourname); // but here our full name is not printed to solve this we can use fgets and puts function
    printf("your name is '%s'\n", yourname);

    char str[100];
    // fgets(str, 100, stdin);
    // puts(str);

    char *canchange = "Hello World"; // it is the character pointer it can be changed
    puts(canchange);
    canchange = "Hello";
    puts(canchange);

    // input the user name and print its length
    char fname[100];
    fgets(fname, 100, stdin); // this is not working see it later
    printf("length is : %d\n", countlength(fname)); 

}

int countlength(char arr[]){
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++){
        count++;
    }
    return count-1;
}

void printString(char arr[]){
    for(int i = 0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}