#include <stdio.h>

int main() {

    char character ;
    int a, b ;
    float c ;
    char string[100] ;

    printf( "Enter a character: " ) ;
    scanf( "%c", &character ) ;
    printf( "Enter two integers: " ) ;
    scanf( "%d %d", &a, &b ) ;
    printf( "Enter a floating-point number: " ) ;
    scanf( "%f", &c ) ;
    printf( "Enter a string: " ) ;
    scanf( "%s", string ) ;

    printf( "You entered character: %c\n", character ) ;
    printf( "You entered integers: %d and %d\n", a, b ) ;
    printf( "You entered floating-point number: %.2f\n", c ) ;
    printf( "You entered string: %s\n", string ) ;
    return 0 ;
}
