// Global and Local variable
#include<stdio.h>

int myScore ; // This variable is visible for all the functions in this file

// This is function prototype of function myFun1
void myFun(void);

int main(){

   // Local Variable (exist only in this function)

  myScore = 900 ;

  printf("Value of the variable myScore = %d\n",myScore);

  /*This is the function call*/
  myFun();

  return 0;

}


/*This is the function definition*/
void myFun(void){  /* this function doesn't return anything (1st void)
 and does't takes any argument as an input (2nd void)*/

myScore = 800 ;
printf("002Value of the variable myScore = %d\n",myScore);

}