#include<conio.h>
#include<stdio.h>

float changetemp(float celsius);

int main(){
    float celsius;
    printf("Enter the temprature in celsius");
    scanf("%f", &celsius);

    float far = changetemp(celsius);
    printf("far = %f\n", far);
    return 0;
}

float changetemp(float celsius){
    float far = ((celsius*9)/5)+32;
    return far;
}