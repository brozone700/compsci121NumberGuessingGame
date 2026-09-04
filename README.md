# compsci121NumberGuessingGame
## Write a program that allows the user to input their name and then play a number guessing game with up to ten turns that stops when they win or run out of turns and tells them how many turns they took.
### ask the user for their name, generate a random number 1-100, ask the user for their guess, give the user feedback depending on how far they are from the correct number, repeat steps 2-4 until either 10 turns have passed or the user guesses it, give the user their results(win/loss and number of turns).
### will include <stdio.h>, <stdlib.h>, and <time.h>
### variables are turn, username, correctNum, guess, continue, and replay
### ask user for their name
### set seed for random to be the current time
### start the game
### tell user what turn they are on
### ask user to guess a number 1-100
### give user feedback depending on how far from the number they were
### increase turncount by 1
### check that turn count is less than 10
### repeat previous 5 steps until either 9 more turns have passed or the user guesses the number
### set continue to FALSE
### tell the user whether they won or lost
### if they won tell them how many turns they took and comment on how well/poorly they did
### ask the user if they would like to play again(y/n)
### if they say n then set replay to FALSE
