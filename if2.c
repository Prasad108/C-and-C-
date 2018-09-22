/* Demonstration of if statement */
#include <stdio.h>
int main( )
{
	int num ;
	printf ( "Enter a the percentage of the student" ) ;
	scanf ( "%d", &num ) ;
	if ( num <35 ){
	printf ( "Failed !\n" ) ;
	}
	else if (num<50){
	    printf ( "sencond class \n") ;
	}else if (num<65){
	    printf ( " higher sencond class \n") ;
	}else if (num< 70 ){
	    printf ( " first class \n") ;
	}else {
	    printf ( "First class with distinction \n") ;
	}




	 
}
