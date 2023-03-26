#include <stdio.h>
#include "rps.h"

int judge (int choice, int computerChoice);

int main (void) {
  char name[100];
  int choice, computerChoice, numberWins, computerWins;

  initializeRandom ();

  printf("Welcome to ROCK PAPER SCISSORS.\n");
	printf("I, Computer, will be your opponent.\n");
	printf("Please type in your name and press return: \n");
  scanf ("%s", name);

  // FOR ROUND ONE
  printf ("Choose from one of the following:\n 1 for ROCK, 2 for PAPER, and 3 for SCISSORS\n");
  scanf("%d", &choice);

  computerChoice = getComputerChoice ();

  printf("Humain Choice: %d\nComputer Choice: %d\n", choice, computerChoice);
  numberWins = judge (choice, computerChoice);

  // FOR ROUND TWO
  printf ("Choose from one of the following:\n 1 for ROCK, 2 for PAPER, and 3 for SCISSORS\n");
  printf("\n");
  scanf("%d", &choice);
  printf("\n");

  computerChoice = getComputerChoice ();

  printf("Humain Choice: %d\nComputer Choice: %d\n", choice, computerChoice);
  numberWins = judge (choice, computerChoice);

  // FOR ROUND THREE
  printf ("Choose from one of the following:\n 1 for ROCK, 2 for PAPER, and 3 for SCISSORS\n");
  printf("\n");
  scanf("%d", &choice);
  printf("\n");
  computerChoice = getComputerChoice ();

  printf("Humain Choice: %d\nComputer Choice: %d\n", choice, computerChoice);
  numberWins = judge (choice, computerChoice);

  computerWins = 3 - numberWins;

  return 0;
}

int judge (int choice, int computerChoice) {

  int humanWins = 0;

  // FOR HUMAN CHOICE 1
  if (choice == 1 && computerChoice == 1) {
    printf("Its a DRAW!\n");
  } else if (choice == 1 && computerChoice == 2) {
    printf ("Computer WINS!");
  } else if (choice == 1 && computerChoice == 3) {
    printf ("You WIN!");
    humanWins++;
  }

  // FOR HUMAIN CHOICE 2
  if (choice == 2 && computerChoice == 1) {
    printf("You WIN!\n");
    humanWins++;
  } else if (choice == 2 && computerChoice == 2) {
    printf ("It's a DRAW!");
  } else if (choice == 2 && computerChoice == 3) {
    printf ("You LOOSE!");
  }

  // FOR HUMAIN CHOICE 3
  if (choice == 3 && computerChoice == 1) {
    printf("You LOOSE!\n");
  } else if (choice == 3 && computerChoice == 2) {
    printf ("You WIN!");
    humanWins++;
  } else if (choice == 3 && computerChoice == 3) {
    printf ("It's a DRAW!");
  }

  return humanWins;
}
