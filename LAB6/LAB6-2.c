#include <stdio.h>
int main() {
    
    int num ;
    printf( "Plese enter your number : " ) ;
    scanf( "%d" , &num ) ;
    for( int a = 1 ; a <= num ; a++ ) {
        for (int b = 1 ; b <= num ; b++ ) {
            if( (num % 2 != 0 && b == num - a + 1 ) || ( num % 2 == 0 && b == a )) {
                printf( "1" );
            } else {
                printf( "0" ) ;
            }
        }
        printf( "\n" ) ;
    }
    return 0 ;
}
