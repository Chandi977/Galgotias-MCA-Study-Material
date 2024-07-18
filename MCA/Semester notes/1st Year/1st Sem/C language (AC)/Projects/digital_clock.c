#include<conio.h>
#include<stdio.h>
#include<time.h> // for sleep() function
// #include<unistd.h> 
#include<stdlib.h>

int main(){
    time_t s, val = 1;
    struct tm* current_time;

    // time in seconds
    s = time(NULL);

    // to get current time
    current_time = localtime(&s);

    // print the time in hour minute and second
    printf("%02d:%02d:%02d", current_time->tm_hour, current_time->tm_min, current_time -> tm_sec);
    return 0;
}