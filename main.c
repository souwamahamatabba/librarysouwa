#include <stdio.h> 
#include <stdlib.h> 
#include "libry.h" 
int main( void ) { 
int result = power( 2, 3 ); 
printf( "2� == %d\n", result ); 
result = fact( 6 ); 
printf( "6! == %d\n", result ); 
return EXIT_SUCCESS; 
}
