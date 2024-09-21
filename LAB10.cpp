#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char Word[ 100 ] ;
    printf( "Enter your word : " ) ;
    scanf( "%s", Word ) ;
    printf( "Your word is : %s \n", Word ) ;

    int e = strlen( Word ) - 1 ;
    printf( "Size of Word is : %d \n", e + 1 ) ;

    int s = 0 ; //ค่าเริ่มต้นของตำอักษรแรก
    int n = 1 ; //ค่าบูลีน
    while ( s < e ) {
        if( tolower( Word[ s ] ) != tolower( Word[ e ] ) ) {
            n = 0 ;
            break;
        } else {
            s ++ ;
            e -- ;
        }//end if-else
    }//end while

    if( n == 0 ) {
        printf( "Not Pass \n" ) ;
    } else {
        printf( "Pass \n" ) ;
    }//end if-else

    return 0 ;
}//end main function
