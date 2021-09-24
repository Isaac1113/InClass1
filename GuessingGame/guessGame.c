/*
    Include libraries for input/ouput and psuedorandom numbers
    Create main
    Create int variable for max value
    Display prompt for the menu
    Ask user to select an option from menu and assign to char variable
    Create a while loop that will loop until 3 is entered
        Check if user enters 1:
            Create an int variable and assign it a random number from 1 to max value
            Prompt the user to enter a number and guess
            Create while loop that loops until they enter 'q'
                Check if input is correct variable and display if they guessed right
                Else check if input is too high and display
                Else display too low
                Prompt the user to enter a number and guess
        Else check if user enters 2:
            Prompt user to enter a new max value
            Take input. If input is not negative and less than integer MAX_VALUE set as new max
        Else
            Display not valid selection
    Display Thank you message and end program
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int max = 0;
}