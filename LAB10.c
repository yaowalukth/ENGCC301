#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char Word[ 100 ] ;
    printf( "Enter word : " ) ;
    scanf( "%s", Word ) ;

    int e = strlen( Word ) - 1 ;
    int s = 0 ;
    int n = 1 ;
    while ( s < e ) {
        if( tolower( Word[ s ] ) != tolower( Word[ e ] ) ) {
            n = 0 ;
            break;
        } else {
            s ++ ;
            e -- ;
        }
    }

    if( n == 0 ) {
        printf( "Not Pass \n" ) ;
    } else {
        printf( "Pass \n" ) ;
    }

    return 0 ;
}
