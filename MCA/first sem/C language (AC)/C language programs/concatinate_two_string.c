#include <stdio.h>
#include <string.h>

void main(){
    char str1[20] = "jenny";
    char str2[10] = "khatri";
     
    // int l1 = strlen(str1);
    // int l2 = strlen(str2);

    // for(int i = 0; i < l2; i++){
    //     str1[l1+i] = str2[i];
    // }
    // printf("%s",str1);
    
    //strcpy

    strcpy(str1,str2);
    printf("%s",str1);  
}