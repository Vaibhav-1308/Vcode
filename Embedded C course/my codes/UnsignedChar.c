/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    unsigned char distanceA2B = 160;
    unsigned char distanceB2C = 40;
    
    unsigned char distanceA2C;
    
    distanceA2C = distanceA2B + distanceB2C;
    
    printf("%c is the Total distance from A2C.",distanceA2C );
    
    return 0;
    
}