/*
    The introduction to variables
    
    */

// Processor Directive
// stdio - standard input output
   #include <stdio.h>

// create a main function
int main() {
   // Create a variable
   int first_number;
   //Assign the value to the variable
   first_number = 100;

   //create and initialize
   int second_number = -19;

   //Print the value of the variable
   printf("The first number is %d\n", first_number);
   
   //Create a sum of two numbers
   int sum = first_number + second_number;
   printf("%d + %d = %d\n", first_number, second_number, sum);
   

      return 0;
   }