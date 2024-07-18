#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char str[] = "Hello, World!";
    // use of strlen() function
    int len = strlen(str);
    printf("The length of the string is: %d\n", len);

    // use of strcpy() function
    char dest[20];
    strcpy(dest, str);
    printf("The copied string is: %s\n", dest);

    // use of strcat() function
    char str1[] = "Hello, ";
    char str2[] = "World!";
    strcat(str1, str2);
    printf("The concatenated string is: %s\n", str1);
    return 0;
}