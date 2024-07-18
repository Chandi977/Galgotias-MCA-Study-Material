#include<stdio.h>
// #include<conio.h>

int main(){
    FILE *fptr;

    // open the file
    fptr = fopen("test.txt", "r");

    // checking the file exits or not

    // if (fptr == NULL)
    // {
    //     printf("file does not exits\n");
    // } else {
    //     fclose(fptr);
    // }
    
    // read and print from the file
    char ch;
    fscanf(fptr, "%c", &ch);
    printf("Characters in file are = %c\n", ch);

    // write the data in the file
    fprintf(fptr, "%c", "N");

    // read the character in file
    printf("%c\n", fgetc(fptr));

    // write the character in the file
    printf("%c\n", fputc('M', fptr));

    // read the full file using loop
    char ch1;
    ch1  = fgetc(fptr);
    while(ch1 != EOF){
        printf("%c", ch1);
        ch1 = fgetc(fptr);
    }
    printf("\n");

    // close the file
    fclose(fptr);

    return 0;
}