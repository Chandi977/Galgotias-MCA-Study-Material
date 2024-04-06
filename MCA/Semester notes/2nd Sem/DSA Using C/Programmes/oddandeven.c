/**
 * @file oddandeven.c
 * @author Chandi Charan Mahato (pappumahato000@gmail.com)
 * @brief Programme to check whether number is odd or even
 * @version 0.1
 * @date 2024-03-26
 * 
 * 
 */
#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(){
    int num;
    scanf("Enter a number: %d", &num);
    if(num/2==0){
        printf( "Even" );
    }else{
        printf( "Odd" );
    }
    
    getch();
}