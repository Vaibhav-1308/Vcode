// Global and Local variable
#include<stdio.h>

int valueA = 4; // Global Variable


int main(){

    {
    int valueA = 67 ;
   // Local Variable (exist only in this function)
   // this variable is only valid for this loop.
    }

    printf("value A = %d\n",valueA);

    return 0;
    
}