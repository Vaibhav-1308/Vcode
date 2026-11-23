/*Assignment Predict the output of the program*/

/*
### Notes about the next Lecture

global variable : they are accessble for the every function in the code
*/

#include<stdio.h>

int a; // global variable

int main(){
    
        a = 25;

        {
            int my_var;
            my_var = 45;

            printf("001Value of the local variable 'my_var is %d\n",my_var);
            printf("002Value of the global variable 'a' is %d\n",a);
        }

        int my_var;

        /* left handside expression*/ my_var = my_var +10; // right hand side expression

        printf("003Value of the local variable 'my_var' is %d\n", my_var);

        return 0;

    }
    
