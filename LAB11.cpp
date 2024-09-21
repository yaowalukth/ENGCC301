#include <stdio.h>
#include <string.h>

int power( int base , int e ) {
    int result = 1 ;
    for ( int i = 0 ; i < e ; i++ ) {
        result *= base ; 
    }//end for
    return result;
}//end function

void Armstrong( char Number[] ) {
    int c = strlen( Number ) ;
    int i ;
    int ans = 0 ;

    for( i = 0 ; i < c ; i ++ ) {
        int num = Number[ i ] - '0' ;
        ans += power( num , c ) ;
    }//end for
    printf( "%d \n", ans ) ;

    int Usernumber = 0 ;
    for ( i = 0 ; i < c ; i++ ) {
        Usernumber = Usernumber * 10 + ( Number[ i ] - '0' ) ;
    }//end for

    if( Usernumber != ans ) {
        printf( "Not Pass" ) ;
    } else {
        printf( "Pass" ) ;
    }//end if-else
}//end function

int main() {

    char Number[ 100 ] ;
    printf( "-------------------------------------\n" ) ;
    printf( "Enter your number : " ) ;
    scanf( "%s" , Number ) ;
    printf( "Your number is : %s", Number ) ;
    printf( "\n-------------------------------------\n" ) ;

    Armstrong( Number ) ;
    printf( "\n-------------------------------------\n" ) ;
    
    return 0 ;
}//end function
