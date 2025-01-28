#include <stdio.h>

//Function Format
//<return_type> <function_name> (<arguments(parameters, inputs) or empty>)
//{
//}
// The function doesnt take any arguments and doesnt return any value
void print_course(void){
    printf("You are in COP%d\n", 2271);
}
// Create draw_caret function
void draw_circle(void){
    printf("   *\n *   *\n  * *\n");
}

void draw_caret(void){
    printf("  /\\ \n");
    printf(" /  \\ \n");
    printf("/    \\ \n");
}

void draw_line(void){
    printf("------\n");
}

void draw_triangle(void){
    printf("  /\\ \n");
    printf(" /  \\ \n");
    printf("/    \\ \n");
    printf("------\n");
}

void draw_stick_figure(void){
    printf("   *\n");
    printf(" *   *\n");
    printf("  * *\n");
    printf("  /\\ \n");
    printf(" /  \\ \n");
    printf("/    \\ \n");
    printf("------\n");
    printf("  /\\ \n");
    printf(" /  \\ \n");
    printf("/    \\ \n");
}
int main() {
    //You cannot create a function inside another function
    // Function Call
    //print_course();
    //draw_circle();
    //draw_caret();
    //draw_line();
    //draw_triangle();
    //draw_caret();
    draw_stick_figure();
    
    return 0;
}

//Find the mistake