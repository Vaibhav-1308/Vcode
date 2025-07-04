
// Re watch the lecture 36

#include <stdio.h>
 // this is the Global Space of the Program

extern int myExamScore; // declaration 
/* (by using the variable declred with the extern key word,
 it is said that it is defined outside the scope of file)
*/

// extern is used to allocate the variable into the external memory.

int main()
{

    // Local Space of the program.

    int myExamScore; // Definition

    myExamScore =540;

    return 0;
    
}