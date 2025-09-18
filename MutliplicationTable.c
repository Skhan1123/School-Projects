/*
 * AHPA #6:Multiplication Table
 *
 * Write a program in C to display the 
 * multiplication table for numbers 1-12 in 
 * a square table.
 *
 * Create a number guessing game that sets 
 * a number and then allows the user to 
 * guess it. The number will be between 1 
 * and 10.
 *
 * To calculate a random number between 
 * 1-10 for the game use:
 * int guessAnswer = (rand() % 20) + 1;
 *                          // random number
 *
 * Student Name: SAAJID KHAN
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    printf("Multiplicaiton Table: \n");

    int mult1 = 13;
/* FOR LOOPS FOR MULT TABLE*/

    for(int i =1; i < mult1; i++){
        int x = 1 * i;

        printf("%4d ", x);
    };

    printf("\n");

    for(int i =1; i < mult1; i++){
        int x = 2 * i;

        printf("%4d ", x);
    };

    printf("\n");

    for(int i =1; i < mult1; i++){
        int x = 3 * i;

        printf("%4d ", x);
    };

    printf("\n");

    for(int i =1; i < mult1; i++){
        int x = 4 * i;

        printf("%4d ", x);
    };

    printf("\n");

    for(int i =1; i < mult1; i++){
        int x = 5 * i;

        printf("%4d ", x);
    };

    printf("\n");

    for(int i =1; i < mult1; i++){
        int x = 6 * i;

        printf("%4d ", x);
    };

    printf("\n");

    for(int i =1; i < mult1; i++){
        int x = 7 * i;

        printf("%4d ", x);
    };

    printf("\n");

    for(int i =1; i < mult1; i++){
        int x = 8 * i;

        printf("%4d ", x);
    };

    printf("\n");

    for(int i =1; i < mult1; i++){
        int x = 9 * i;

        printf("%4d ", x);
    };

    printf("\n");

    for(int i =1; i < mult1; i++){
        int x = 10 * i;

        printf("%4d ", x);
    };

    printf("\n");

    for(int i =1; i < mult1; i++){
        int x = 11 * i;

        printf("%4d ", x);
    };

    printf("\n");

    for(int i =1; i < mult1; i++){
        int x = 12 * i;

        printf("%4d ", x);
    };

printf("\n \n \n");


/*NUMBER GAME*/


int userguess;

int guessAnswer = (rand() % 10) + 1;



do{
    printf("Enter your guess (1 - 10): ");

    scanf(" %d", &userguess);

    if(userguess == guessAnswer){
        printf("You guessed it!");
    }
    
    else if (userguess > guessAnswer){
        printf("Too high! \n");
    }
    else if (userguess < guessAnswer){
        printf("Too low! \n");
    }

    } while(userguess != guessAnswer);
 
  return 0;
}