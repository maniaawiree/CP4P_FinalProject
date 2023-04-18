#include "tokenizing.h"
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300

void tokenizing() {
/* Version 3 */
    printf("*** Start of Tokenizing Sentences Demo ***\n");
    char sentences[BUFFER_SIZE];
    char* nextSentence = NULL; //declaration of a pointer initialized to NULL
    int sentenceCounter; // declaration of an integer called sentenceCounter, which will be used to keep track of the sentence number.
    do {
        printf("Type a few sentences seperated by dot(q - to quit):\n");
        fgets(sentences, BUFFER_SIZE, stdin); /*fgets() is used to read the user's input 
                                                    and store it in the sentences array. 
                                                    The function reads up to BUFFER_SIZE - 1 characters from the standard input (stdin) 
                                                    and stores them in sentences. If the user enters more characters than the size of 
                                                    the array, the extra characters are discarded*/
        sentences[strlen(sentences) - 1] = '\0'; //the newline character at the end of the user's input by is removed by replacing it with a null terminator.
        if ((strcmp(sentences, "q") != 0)) { //if the user did not enter q to quit the function atol will be called
            nextSentence = strtok(sentences, "."); /*strtok is called on the input string using "." as the delimiter 
                                                        to tokenize the input. It sets nextSentence 
                                                        to the first token */
            sentenceCounter = 1; //sentenceCounter is set to 1.
            while (nextSentence) { //while loop iterates as long as nextSentence is not NULL
                printf("Sentence #%d is \'%s\'\n", sentenceCounter++, nextSentence); //the sentence number and the sentence(token)itself is printed to the console
                                                                                    //sentenceCounter is increased by 1
                nextSentence = strtok(NULL, "."); //nextSentence is set to the next token by calling strtok with NULL as the first argument and dot as delimiter.
            }
        }
    } while (strcmp(sentences, "q") != 0);
    printf("*** End of Tokenizing Sentences Demo ***\n\n");

}