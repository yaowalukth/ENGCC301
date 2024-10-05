#include <stdio.h>

int main() {

    int n = 0 ;
    int i = 0 ;

    printf( "Enter n : " ) ;
    scanf( "%d", &n ) ;
    int Num[ n ] ;

    for( i = 0 ; i < n ; i ++ ) {
        printf( "Enter value[%d] : ", i ) ;
        scanf( "%d", &Num[ i ] ) ;
    }

    printf( "Index: " ) ;
    for( i = 0 ; i < n ; i ++ ) {
        printf( " %d", i ) ;
    }

    printf( "\n" ) ;
    printf( "Array: " ) ;
    int m ;
    for( m = 0 ; m < n ; m ++ ) {
        int value = Num[ m ] ;
        int k = 1 ;
        int j ;
        for( j = 2 ; j * j <= value ; j ++ ) {
            if( value % j == 0 ) {
                k = 0 ;
                break ;
            }
        }
        if( k == 1 ) {
            printf( " %d", value ) ;
        } else {
            printf( " #" ) ;
        }
    }   
    return 0 ;
}
