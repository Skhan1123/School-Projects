/*
 * AHPA #8: The C ATM Machine
 *
 * Two people, "a" and "b", have checking and savings accounts. 
 *
 * Create a 2x2 array to hold their amounts: a ‚Äì checking: $500, savings: 
 * $1,000; b ‚Äì checking: $750, savings: $325.
 *
 * Have the ATM machine ask the user their name.
 *
 * Ask the user if they want to withdraw from their checking or their 
 * savings account.
 *
 * Use a switch statement to process different types of accounts.
 *
 * Create software that will provide an ATM user with the  proper change 
 * for any dollar amount up to $200.
 *
 * Example: Run the code for $19, $55, and $200.
 *
 * Student Name: Saajid Khan
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>


int main(void) {
  int bank_accounts[2][2] = {
        {500, 1000}, {750, 325}
    };
  /*get input*/  
  char name; 
    printf("Enter Your Name: \n");
    scanf(" %c", &name);

  char option; 
    printf("Would you like to withdraw from (c)hecking or (s)avings? \n");
    scanf(" %c", &option);

  int withdraw; 
    printf("How much would you like to withdraw? \n");
    scanf("%d", &withdraw);
  
  int withdraw_og = withdraw;


  /*balance holder for end print*/
  int remaining_balance = 0; 

  /*logic to relate accounts and name*/
  if(name == 'a'){
    if (option == 'c') {
      bank_accounts[0][0] -= withdraw;
      remaining_balance = bank_accounts[0][0];
    }
    else if (option == 's') {
      bank_accounts[0][1] -= withdraw;
      remaining_balance = bank_accounts[0][1];
    }

  }

  else if(name == 'b'){
    if (option == 'c') {
      bank_accounts[1][0] -= withdraw;
      remaining_balance = bank_accounts[1][0];
    }
    else if (option == 's') {
      bank_accounts[1][1] -= withdraw;
      remaining_balance = bank_accounts[1][1];
    }

  }

  /*make the print function thing to split the bills*/
  int hundreds = withdraw / 100;
  withdraw = withdraw %100;

  int fifties = withdraw / 50;
  withdraw = withdraw % 50;

  int twenties = withdraw / 20;
  withdraw = withdraw % 20;

  int tens = withdraw / 10;
  withdraw = withdraw % 10;

  int fives = withdraw / 5;
  withdraw = withdraw % 5;

  int ones = withdraw / 1;
  withdraw = withdraw %1;

  printf("Amount to be withdrawn: $ %d \n", withdraw_og);

 /*othr method didnt work, loop prints to get total values*/ 
  for (int i = 0; i < hundreds; i++) {
    printf("$ 100 bill\n");
  }
  for (int i = 0; i < fifties; i++) {
    printf("$ 50 bill\n");
  }
  for (int i = 0; i < twenties; i++) {
    printf("$ 20 bill\n");
  }
  for (int i = 0; i < tens; i++) {
    printf("$ 10 bill\n");
  }
  for (int i = 0; i < fives; i++) {
    printf("$ 5 bill\n");
  }
  for (int i = 0; i < ones; i++) {
    printf("$ 1 bill\n");
  }

  
  printf("Amount in account after withdrawl: $ %d", remaining_balance);
    
  
  return 0;
}