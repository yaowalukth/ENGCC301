#include <stdio.h>

int main() {

    int n = 0 ;
    int i = 0 ;

    printf( "Enter Array Size : " ) ;
    scanf( "%d", &n ) ;
    int Num[ n ] ;
    printf( "------------------------ \n" ) ;

    for( i = 0 ; i < n ; i ++ ) {
        printf( "Array[%d] : ", i ) ;
        scanf( "%d", &Num[ i ] ) ;
    }
    printf( "------------------------ \n" ) ;

    for( i = 0 ; i < n ; i ++ ) {
        printf( " %d", Num[ i ] ) ;
    }
    printf( "\n------------------------ \n" ) ;

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
