#include <stdio.h>

int main() {
    float score = 0 ;
    printf( "Input your score : " ) ;
    if(scanf( "%f" , &score  ) !=1 ) {
           printf( "Please enter number only") ;
    } else if( score >= 80 ) {
            printf( "Grade : A" ) ;
    } else if( score >= 75 && score < 80 ) {
            printf( "Grade : B+" ) ;
    } else if( score >= 70 && score < 75 ) {
            printf( "Grade : B" ) ;
    } else if( score >= 65 && score < 70 ) {
            printf( "Grade : C+" ) ;
    } else if( score >= 60 && score < 65 ) {
            printf( "Grade : C" ) ;
    } else if( score >= 55 && score < 60 ) {
            printf( "Grade : D+" ) ;
    } else if( score >= 50 && score < 55 ) {
            printf( "Grade : D" ) ;
    } else {
            printf( "Grade : F \n" ) ;
    }
    return 0 ;
}
