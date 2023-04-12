#include "tokenizing.h"
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300

void tokenizing() {
/* Version 1 */
printf("*** Start of Tokenizing Words Demo ***\n");

char words[BUFFER_SIZE];
char* nextWord = NULL;
int wordsCounter;

do{
    printf("Type a few words separated by sapce (q - to quit):\n"); //typo in sapce
    fgets(words, BUFFER_SIZE, stdin); //gets and assigns the user input into words, initializing the size of words to BUFFER_SIZE; indicating it is a user input(via keyboard);
    //fgets return words as [char or int](any number of characters or ints)[\n][\0]
    words[strlen(words) - 1] = '\0'; //it sets the index number (length of the words string - 1) from \n to NULL ;unexpected results can be avoided in subsequent concatenation operations
    if (strcmp(words, "q") != 0) {  //it checks if words and q are not identical;strcmp will return 0 if string1 and q are identical.
        nextWord = strtok(words, " "); //strtok breaks string words into series of tokens using " "
        wordsCounter = 1; //assign 1 to wordsCounter for the first word
        while (nextWord){ //loop executes while there is a word in nextWord and its not NULL
            printf("Words #%d is \'%s\'\n", wordsCounter++, nextWord); //words counter is displayed and then increases by 1 for the next word
            nextWord = strtok(NULL, " "); //Hey/0/0 so it breaks the NULL string which is left after the first word into series of tokens using " "; if this is not done, the next word wont be printed properly;
        }
    }

} while (strcmp(words, "q") != 0); //the loop will end if user enters q, strcmp will return 0 is words and q are identical. 
printf("*** Ends of Tokenizing Words Demo ***\n\n");


/* Version 2 */
// >> insert here
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


/* Version 3 */
// >> insert here


}