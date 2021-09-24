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
            Create do while loop that loops until they enter 'q' or guess right
                Check if input is correct variable and display if they guessed right
                Else check if input is too high and display
                Else display too low
                Prompt the user to enter a number and guess
        Else check if user enters 2:
            Prompt user to enter a new max value
            Take input. If input is not negative and less than integer MAX_VALUE set as new max
        Else
            Display not valid selection
        Display prompt for the menu
        Take input from user
    Display Thank you message and end program
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    FILE *fp;
    int max = 10;
    char selection;

    if (fp = fopen("userValues.txt", "r")) {
        char prevMax[50];
        fscanf(fp, "%s", prevMax);
        max = atoi(prevMax);
        fclose(fp);
    }

    printf("Press 1 to play a game\n");
    printf("Press 2 to change the max number\n");
    printf("Press 3 to quit\n");
    selection = getchar();
    while ((getchar()) != '\n');
    
    while (selection != '3') {
        if (selection == '1') {
            time_t t;
            srand((unsigned) time(&t));
            int num = (rand() % max) + 1;
            char guess[50];
            
            do
            {
                printf("Guess the number from 1 to %d: ", max);
                gets(guess);

                if (atoi(guess) == num)
                    printf("You guessed correct. You win!\n\n");
                else if (atoi(guess) > num)
                    printf("Your guess was too high.\n");
                else
                    printf("Your guess was too low.\n");
            } while ((guess[0] != 'q') && (atoi(guess) != num));
        }
        else if (selection == '2') {
            printf("Enter a new max value: ");
            long int newMax;
            scanf("%ld", &newMax);

            if (newMax > 0 && newMax < INT_MAX) {
                max = newMax;
                char text[50];
                fp = fopen("userValues.txt", "w+");
                sprintf(text, "%ld", newMax);
                fputs(text, fp);
                fclose(fp);
            }
            while ((getchar()) != '\n');
        }
        else
            printf("Not a valid selection.\n");
        
        printf("Press 1 to play a game\n");
        printf("Press 2 to change the max number\n");
        printf("Press 3 to quit\n");
        selection = getchar();
        while ((getchar()) != '\n');
    }

    printf("Thank you for playing the game.\n");
    return 0;
}