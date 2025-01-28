/*
Practice with non void functions
*/

// Function Prototypes
//The function getFive which returns an interger and takes no arguments

#include <stdio.h>

int getFive(void);

// Function named printCourse which returns nothing and takes one interger argument
int printCourse(int course_number);

// Void function that takes an interger and describes the weather
void describeWeather(int temp);


int main(void) {
    int var = 0;

//Call getFive function
    
    var = getFive();

    printf("var is %d\n", var);

    //Call printCourse
    printCourse(2271);

    //Test descibeWeather
    int temp = 0;
    printf("Enter a temperature: ");
    scanf("%d", &temp);
    describeWeather(temp);


    return 0;
}

// getFive implimentation
int getFive(void) {
    int five =5;

    return five;
    
}

/*************************************/

int printCourse(int course_number) {
    printf("You are in COP%d course. \n", course_number);
    
}

/************************************/

void describeWeather(int temp) {
    //if statements
    if (temp > 70) {
        puts("HOT!!");
    }
    if (temp <= 70) {
        puts("COLD!!");
    }
}
