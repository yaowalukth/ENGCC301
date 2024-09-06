#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int play ;
    int playAgain ;

    printf( "Do you want to play game? ( 1 = play , -1 = exit ) \n" ) ;
    scanf( "%d", &play ) ;

    if( play == 1 ) {
        printf( "Let's play \n" ) ;

        do {
            int number ;
            int guess ;
            int score = 100 ;
            int min = 1 ;
            int max = 100 ;

            number = rand() % 100 + 1 ;
            srand( time( NULL ) ) ;

            printf( "Your score is : %d \n", score ) ;
            printf( "%d", number ) ;
            while( score > 0  ) {
                printf( "Guess  the wining number ( %d - %d ) : \n", min , max ) ;
                scanf( "%d", &guess ) ;
                
                if( guess < 1 || guess > 100 ) {
                    printf( "Please enter number between 1 -100 \n" ) ;
                    continue ;
                }//end if

                if( guess == number ) {
                    printf( "That is correct! The winning number is %d \n", guess ) ;
                    printf( "Your score is %d \n", score ) ;
                    break ;
                } else {
                    score -= 10 ;
                    if( score <= 0 ) {
                        printf( "Your point are all gone \n" ) ;
                        printf( "The correct number is : %d \n", number ) ;
                        break ;
                    }//end if
                    if( guess < number ) {
                        if( guess > min ) {
                            min = guess + 1 ;
                        }//end if
                        printf( "Sorry, the winning number is higher than %d \n", guess ) ;
                    } else {
                        if( guess < max ) {
                            max = guess -1 ;
                        }//end if
                        printf( "Sorry, the winning number is lower than %d \n", guess ) ;
                    }//end else-if
                    printf( "Your score now is %d \n", score ) ;
                }//end else-if
            }// while
            printf( "Do you want to playagain? ( 1 = playAgain , -1 = exit ) \n" ) ;
            scanf( "%d", &playAgain ) ;
            if( playAgain != 1 ) {
                printf( "Thank you for playing \n" ) ;
            } else {
                printf( "Let's play" ) ;
            }//end else-if
        }while( playAgain == 1 ) ;//do-while
    } else {
        printf( "Thank you \n" ) ;
    }//end if
    return 0 ;
}//end function
