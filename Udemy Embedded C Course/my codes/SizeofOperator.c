/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    long long myLongHistory = 900;

    char size = sizeof(myLongHistory);

    printf("Size of char data type = %d\n", sizeof(char));
    printf("Size of short data type = %d\n", sizeof(short));
    printf("Size of int data type = %d\n", sizeof(int));
    printf("Size of long data type = %d\n", sizeof(long));
    printf("Size of long long data type = %d\n", sizeof(myLongHistory));
    
    return 0;
    
}