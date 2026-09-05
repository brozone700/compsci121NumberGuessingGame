I made this because I was unsure if you wanted us to change our psuedocode after we started coding so i made this just in case.
This contains the updated psuedocode and variables.
# compsci121NumberGuessingGame
## Write a program that allows the user to input their name and then play a number guessing game with up to ten turns that stops when they win or run out of turns and tells them how many turns they took.
### ask the user for their name, generate a random number 1-100, ask the user for their guess, give the user feedback depending on how far they are from the correct number, repeat steps 2-4 until either 10 turns have passed or the user guesses it, give the user their results(win/loss and number of turns).
### will include <stdio.h>, <stdlib.h>, and <time.h>
### variables are turns, username, correctNum, guess, KeepGoing, replay, temp, totaTurns, games, lose, wins, and goodNum
### 1 and 0 will be used in place of TRUE and FALSE 
### ask user for their name
### set seed for random to be the current time
### start the game
### tell user what turn they are on
### ask user to guess a number 1-100
### prevent the rest of the code from running unless they actually guess a number 1-100 using goodNum
### give user feedback depending on how far from the number they were
### increase turns by 1
### check that turn count is less than 10
### repeat previous 5 steps until either 9 more turns have passed or the user guesses the number
### stop code from repeating
### add turns to total turns
### if they won increase wins by 1
### tell the user whether they won or lost
### if they won tell them how many turns they took and comment on how well/poorly they did
### display the user's current wins and totalTurns taken
### ask the user if they would like to play again(1/0) with 1 representing yes and 0 representing no
### if they say 0 then set replay to 0 so the game stops and say goodbye
### if they say 1 then create 10 new lines to seperate the current game from the last game and repeat every step below start the game
