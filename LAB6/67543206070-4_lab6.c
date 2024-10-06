#include <stdio.h>

int main() {
    int number ;
    printf( "Enter value: " ) ;
    scanf( "%d" , &number ) ;
    printf( "Series: " ) ;
    if(number % 2 == 1) {
        for(int i = 1 ; i <= number ; i += 2 ) {
            printf( "%d ", i ) ;
        }
    } else if(number % 2 != 1) {
        for(int i = number ; i >= 0 ; i -= 2) {
            printf( "%d " , i ) ;
        }
    }
    return 0 ;
}
