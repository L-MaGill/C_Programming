/*

This program converts the given number of seconds to hours minutes and seconds

65 seconds -> 0 hrs, 1 minute, 5 seconds

*/

#include <stdio.h>

int main() {
    int seconds = 0;
    int minutes = 0;
    int hours = 0;
    int remaining_seconds = 0;
    int remaining_minutes = 0;
    // get the number of seconds
    puts("enter the number of seconds");
    scanf("%d", &seconds);

    // calculate the number of minutes
    minutes = seconds / 60;
    hours =  minutes / 60 ;

    //calculate remaining seconds
    remaining_seconds = seconds % 60;
    remaining_minutes = minutes % 60;

    //print the result
    printf("%d seconds is %d hours, %d minutes, and %d seconds\n", seconds, hours, remaining_minutes, remaining_seconds);

    //TODO by Thursday
    //Calculate the number of hours!!!!!!!!!!!!!!!!!!

    return 0;

}