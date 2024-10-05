#include <stdio.h>

int main() {
    
    int num ;
    printf( "Plese enter your number : " ) ;
    scanf( "%d" , &num ) ;
    if(num % 2 != 0 ) {
        for( int a = 1 ; a <= num ; a++ ) {
            for (int b = 1 ; b <= num ; b++ ) {
                if( b == num - a + 1 ){
                     printf( "1" );
                }else{
                    printf( "0" ) ;
                }
            }
            printf( "\n" ) ;
        }
    }else{
        for( int a = 1 ; a <= num ; a++ ) {
            for (int b = 1 ; b <= num ; b++ ) {
                if( b == a  ){
                     printf( "1" );
                }else{
                    printf( "0" ) ;
                }
            }
            printf( "\n" ) ;
        }
    }
    return 0 ;
}
