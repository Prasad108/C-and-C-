/** domentation
 * Author Prasad Ashok Dukale
 * 
 */


// preprocessor directives
#include <stdio.h>

// global variable declaration
int K=10;

// main method
int main()
{
    printf("Hello, World!\n");

    printf("Global variable is %d \n",K);
    
    userDifienedFunction();
    return 0;
}

//user difined methods

void userDifienedFunction(){
    printf("Hello World from the Function");
}
