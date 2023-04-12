#include "tokenizing.h"
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300

void tokenizing() {
/* Version 2 */
printf("*** Start of Tokenizing Phrases Demo ***\n");
    char phrases[BUFFER_SIZE]; //declaration of an array of characters
    char* nextPhrase = NULL; //declaration of a pointer to a character
    int phrasesCounter; //declaration of an inter variable
    do { //prompt the user to enter a numeric string until they enter "q" to quit.
        printf("Type a few phrases seperated by comma(q - to quit):\n");
        fgets(phrases, BUFFER_SIZE, stdin); /*fgets() is used to read the user's input 
                                                    and store it in the phrases array. 
                                                    The function reads up to BUFFER_SIZE - 1 characters from the standard input (stdin) 
                                                    and stores them in phrases. If the user enters more characters than the size of 
                                                    the array, the extra characters are discarded*/
        phrases[strlen(phrases) - 1] = '\0'; //the newline character at the end of the user's input by is removed by replacing it with a null terminator.
        if ((strcmp(phrases, "q") != 0)) { //if the user did not enter q to quit the function strtok will be called
            nextPhrase = strtok(phrases, ","); /*the strtok() function is used to tokenize the input string using the comma as a delimiter; 
                                                the first call to strtok() uses phrases array as an input */
            phrasesCounter = 1; 
            while (nextPhrase) {
                printf("Phrases #%d is \'%s\'\n", phrasesCounter++, nextPhrase); //phraseCounter is the number of the phrase and nextPhrase is the phrase extracted from the user input
                nextPhrase = strtok(NULL, ","); //the subsequesnt calls use NULL so the strtok function continue using the same string
            }
        }
    } while (strcmp(phrases, "q") != 0); //The loop continues as long as the user does not enter "q" to quit.
    printf("*** End of Tokenizing Phrases Demo ***\n\n");
}