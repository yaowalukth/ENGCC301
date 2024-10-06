#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int play ;
    int playAgain ;

    printf( "Do you want to play game (1=play, -1=exit) : (Score=100)\n" ) ;
    scanf( "%d", &play ) ;

    if( play == 1 ) {
        do {
            int number ;
            int guess ;
            int score = 100 ;
            int min = 1 ;
            int max = 100 ;

            number = rand() % 100 + 1 ;
            srand( time( NULL ) ) ;

            while( score > 0  ) {
                printf( "Guess the winning number (%d-%d): ", min , max ) ;
                scanf( "%d", &guess ) ;
                if( guess < 1 && guess > 100 ) {
                    printf( "Your guess is out of the current bounds (%d-%d)! Try again. \n", min , max ) ;
                    continue ;
                }

                if( guess == number ) {
                    printf( "That is correct! The winning number is %d.\n", guess ) ;
                    printf( "Score this game: %d\n", score ) ;
                    break ;
                } else {
                    score -= 10 ;
                    if( score <= 0 ) {
                        printf( "Your point are all gone \n" ) ;
                        printf( "The correct number is : %d. \n", number ) ;
                        break ;
                    }
                    if( guess < number ) {
                        if( guess > min ) {
                            min = guess + 1 ;
                        }
                        printf( "Sorry, the winning number is HIGHER than %d. (Score=%d) \n", guess , score ) ;
                    } else {
                        if( guess < max ) {
                            max = guess -1 ;
                        }
                        printf( "Sorry, the winning number is LOWER than %d. (Score=%d)\n", guess , score ) ;
                    }
                }
            }
            printf( "Do you want to play game (1=play, -1=exit) : \n" ) ;
            scanf( "%d", &playAgain ) ;
        }while( playAgain == 1 ) ;
    } 
    return 0 ;
}
