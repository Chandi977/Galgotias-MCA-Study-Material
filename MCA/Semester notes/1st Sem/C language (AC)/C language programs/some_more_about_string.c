#include<conio.h>
#include<stdio.h>
#include<string.h>

void salting(char password[]);
void slice(char str[], int n, int m);
int countvowel(char str[]);
void checkstring(char str[], char ch);

void main(){
    // strlen function
    char name[] = "Anurag";
    int length = strlen(name);
    printf("length is : %d\n", length);

    //strcpy function
    char oldstr[] = "oldstr";
    char newstr[] = "newstr";
    strcpy(newstr, oldstr);
    puts(newstr);

    // strcat function
    char firststr[100] = "Hello"; // mandatory to give the size of first string
    char secondstr[] = "World";
    strcat(firststr, secondstr);
    puts(firststr); 

    // strcmp compare the first letter ascii of the both strings
    char string1[] = "Apple";
    char string2[] = "Banana";
    printf("%d\n", strcmp(string1, string2));

    // enter the name of the user
    char str[100];
    char ch;
    int i = 0;
    while(ch != '\n'){
        scanf("%c", &ch);
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
    puts(str);

    // salting 
    char password[100];
    scanf("%s", password);
    salting(password);

    // slicing the string
    char string[] = "HelloWorld";
    slice(string, 3, 6);

    // occurence of the vowel
    char string4[] = "AnuragVarshney";
    // printf("Enter any string to count number of vowels\n");
    // scanf("%s", &string);
    // fgets(string4, 100, stdin);
    printf("vowels in the string %d\n",countvowel(string4));

    // character is present in string 
    char stri[] = "AnuragVarshney";
    char chr = 'y';
    checkstring(stri, chr);
}

void checkstring(char str[], char ch){
    for(int i=0; str[i] != '\0'; i++){
        if(str[i] == ch){
            printf("character is present");
            return;
        }
    }
    printf("character is not present");
}

int countvowel(char str[]){
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i'  || str[i] == 'o' || str[i] == 'u' ){
            count++;
        }
    }
    return count;
}

void salting(char password[]){ 
    char salt[] = "123";
    char newpass[200];

    strcpy(newpass, password);
    strcat(newpass, salt);
    puts(newpass);
}

void slice(char str[], int n, int m){
    char newstr[100];
    int j = 0;
    for(int i = n; i<=m; i++, j++){
        newstr[j] = str[i];
    }
    newstr[j] = '\0';
    puts(newstr);
}