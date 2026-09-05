#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	char username[30];
	int temp = 0;
	int replay = 1;
	int guess = 0;
	int KeepGoing = 0;
	int correctNum = 1;
	int totalTurns = 0;
	int games = 0;
	int turns = 0;
	int lose = 1;
	int wins = 0;
	int goodNum = 0;

	printf("\nWhat is your name?   ");
	scanf("%s", username);
	while(replay == 1) {
		guess = 0;

		// The code for getting the random number
		srand(time(NULL));
		correctNum = (rand() % 100) + 1;

		// The beginning of the game loop
		while(KeepGoing < 10) {
			goodNum = 0;
			turns++;
			printf("\nOkay %s this is turn %d \n", username, turns);
			printf("Enter a number 1-100:   ");
			scanf("%d", &guess);

			// The code for telling the user if they're in the correct number range
			if (guess > 0 ) {
				if (guess < 101) {
					KeepGoing++;
					goodNum = 1;
				} else {
					turns--;
					printf("That number is too high, it needs to be below 101");
				}
			} else {
				turns--;
				printf("That number is too low, it needs to be above 0");
			}
			
			// The code for giving the user feedback
			if (goodNum == 1) {
				if (guess > correctNum) {
					if (KeepGoing < 10) {
						temp = guess-50;
						if (temp > correctNum) {
							printf("You're way too high");
						} else {
							printf("You need to go lower");
						}
					}
				} else if (guess < correctNum) {
					if (KeepGoing < 10) {
						temp = guess + 50;
						if (temp < correctNum) {
							printf("You're way too low");
						} else {
							printf("You need to go higher");
						}
					}
				}else if (guess == correctNum) {
					printf("Wow, you actually got it right.");
					wins++;
					KeepGoing = 10;
					lose = 0;
				}
			}
			printf("\n");
		}
		totalTurns += turns;
		games++;
			// results
		if (turns == 1) {
			printf("You won in %d turn.\nThats amazing!", turns);
		} else if (turns >= 7) {
			if (lose == 0) { 
				printf("You won in %d turns.\nTry to do a little better next time.", turns);
			} else {
				printf("Wow, you actually lost, do better next time. The correct number was %d.", correctNum);
			}
		} else {
			printf("You won in %d turns.\nNot bad.", turns);
		}
		printf("\n");
		if (lose == 0) {
			wins++;
		}

		// current stats
		if (games == 1) {
			if (totalTurns == 1) {
				printf("So far you've played 1 game and only needed 1 turn to beat it.");
			} else if ( lose == 0) {
				printf("So far you've played 1 game and it took you %d turns to beat it.", turns);
			} else {
				printf("So far you've lost the only game that you've played");
			}
		} else if (wins == games) {
			if (games > 2 ) {
				printf("\nSo far you've played %d games, winning all of them, and its taken you %d turns to beat them.", games, totalTurns);
			} else {
				printf("\nSo far you've played %d games, winning both of them, and its taken you %d turns to beat them.", games, totalTurns);
			}
		} else {
			printf("\nSo far you've played %d games, winning %d of them, and its taken you %d turns to beat them.", games, wins, totalTurns);
		}
		turns = 0;
		printf("\nWould you like to play again 1/0 (1 being yes and 0 being no):");
		int again = 0;
		scanf(" %d", &again);
		if (again == 0) {
			printf("Okay, goodbye");
			replay = 0;
		} else if (again == 1) {
			KeepGoing = 0;
			for (int i = 0; i < 10; i++) {
				printf("\n");
			}
		} else {
			printf("that wasn't one of the choices, please choose either 1 or 0");
		}
	}
}
