#include <stdio.h>
int main() {
    int number_of_years = 1;
    int number_of_minutes = 0;

    puts("enter your age");

    scanf("%d", &number_of_years);

    number_of_minutes = number_of_years * 525600;

    printf("you are %d minutes old", number_of_minutes);
    return 0;
}