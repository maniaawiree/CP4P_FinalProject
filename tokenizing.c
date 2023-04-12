#include "tokenizing.h"
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300

void tokenizing() {
/* Version 2 */
printf("*** Start of Tokenizing Phrases Demo ***\n");
    char phrases[BUFFER_SIZE]; 
    char* nextPhrase = NULL;
    int phrasesCounter;
    do {
        printf("Type a few phrases seperated by comma(q - to quit):\n");
        fgets(phrases, BUFFER_SIZE, stdin); 
        phrases[strlen(phrases) - 1] = '\0'; 
        if ((strcmp(phrases, "q") != 0)) {
            nextPhrase = strtok(phrases, ","); 
            phrasesCounter = 1; 
            while (nextPhrase) {
                printf("Phrases #%d is \'%s\'\n", phrasesCounter++, nextPhrase);
                nextPhrase = strtok(NULL, ","); 
            }
        }
    } while (strcmp(phrases, "q") != 0);
    printf("*** End of Tokenizing Phrases Demo ***\n\n");
}