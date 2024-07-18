/**
 * @file decTObin.c
 * @author Chandi Charan Mahato (pappumahato000@gmail.com)
 * @brief programme to calculate binary to decimal.
 * @version 0.1
 * @date 2024-03-26
 */

#include <math.h>
#include <stdio.h>

void main(){
    int num;
    scanf("%d",&num);
    int ans = 0;
    int i = 0;
    while(num != 0){
        int bit = num & 1;

        ans = (bit * pow(10,i))+ ans;

        num = num >> 1;

        i++;
    }
    printf("Decimal %d",ans);
}