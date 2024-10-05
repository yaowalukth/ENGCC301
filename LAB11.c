#include <stdio.h>
#include <string.h>

int power( int base , int e ) {
    int result = 1 ;
    for ( int i = 0 ; i < e ; i++ ) {
        result *= base ; 
    }
    return result;
}

void Armstrong( char Number[] ) {
    int c = strlen( Number ) ;
    int i ;
    int ans = 0 ;

    for( i = 0 ; i < c ; i ++ ) {
        int num = Number[ i ] - '0' ;
        ans += power( num , c ) ;
    }

    int Usernumber = 0 ;
    for ( i = 0 ; i < c ; i++ ) {
        Usernumber = Usernumber * 10 + ( Number[ i ] - '0' ) ;
    }

    if( Usernumber != ans ) {
        printf( "Not Pass" ) ;
    } else {
        printf( "Pass" ) ;
    }
}

int main() {

    char Number[ 100 ] ;
    printf( "Enter number : " ) ;
    scanf( "%s" , Number ) ;
    Armstrong( Number ) ;
    
    
    return 0 ;
}
