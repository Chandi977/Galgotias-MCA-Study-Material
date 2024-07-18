#include<stdio.h>
#include<stdlib.h>

int main() {
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(float));
    printf("%d\n", sizeof(char));

    // malloc (memory allocation) function - it returns the void pointer
    int *ptr;
    ptr = (int *) malloc(5 * sizeof(int));
    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;

    for(int i = 0; i < 5; i++){
        printf("%d\n", ptr[i]);
    }

    // allocate memory to store 5 prices -> same as above

    // calloc (continous allocation) function - it returns the void pointer
    // if we use calloc then it automatically store 0 in the memory.

    // free(ptr) - this function is used to free the memory

    // allocate memory for 5 numbers. then dynamically increase it to 8 numbers.
    int *ptr1;
    ptr1 = (int *) calloc(5, sizeof(int));

    printf("Enter 5 numbers : \n");
    for(int i=0; i<5; i++){
        scanf("%d", &ptr1[i]);
    }

    ptr1 = realloc(ptr1, 8);
    printf("Enter 8 numbers : \n");
    for(int i=0; i<8; i++){
        scanf("%d", &ptr1[i]);
    }

    // print
    for(int i=0; i<8; i++){
        printf("Number %d is %d\n", i, ptr1[i]);
    }

    //create an array of size 5 (using calloc) & enter its values from the user. - same as above

    //allocate memory to store first 5 odd numbers, then reallocate it to store 6 even number.

    int *ptr2;
    ptr2 = (int *) calloc(5, sizeof(int));
    ptr2[0] = 1;
    ptr2[1] = 3;
    ptr2[2] = 5;
    ptr2[3] = 7;
    ptr2[4] = 9;

    for (int i = 0; i<5; i++){
        printf("%d\n", ptr[i]);
    }

    ptr2 = realloc(ptr2, 6);
    ptr2[0] = 2;
    ptr2[1] = 4;
    ptr2[2] = 6;
    ptr2[3] = 8;
    ptr2[4] = 10;
    ptr2[5] = 12;

    for (int i = 0; i<6; i++){
        printf("%d\n", ptr[i]);
    }


    return 0;
}