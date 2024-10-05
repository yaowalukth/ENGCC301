#include <stdio.h>

int main() {
    char ID[ 10 ] ;
    int WorkingHour, Salary ;
    printf( "\n\nInput the Employees ID(Max. 10 chars): " ) ;
    scanf( "%s", ID ) ;
    printf( "Input the working hrs: " ) ;
    scanf( "%d", &WorkingHour ) ;
    printf( "Salary amount/hr: " ) ;
    scanf( "%d", &Salary ) ;

    printf( "Employees ID = %s\n", ID ) ;
    printf( "Salary = U$ %d", WorkingHour * Salary ) ;

    printf( "\n\n" ) ;
    return 0 ;
}
