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
    printf("*** Start of Tokenizing Phrases Demo ***\n");
    char phrases[BUFFER_SIZE]; 
    char* nextPhrase = NULL; //declaration of a pointer to char variable initialized to NULL
    int phrasesCounter;
    do {
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