#include "tokenizing.h"
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300

void tokenizing() {
/* Version 3 */
    printf("*** Start of Tokenizing Sentences Demo ***\n");
    char sentences[BUFFER_SIZE];
    char* nextSentence = NULL;
    int sentenceCounter;
    do {
        printf("Type a few sentences seperated by dot(q - to quit):\n");
        fgets(sentences, BUFFER_SIZE, stdin);
        sentences[strlen(sentences) - 1] = '\0';
        if ((strcmp(sentences, "q") != 0)) {
            nextSentence = strtok(sentences, ".");
            sentenceCounter = 1;
            while (nextSentence) {
                printf("Sentence #%d is \'%s\'\n", sentenceCounter++, nextSentence);
                nextSentence - strtok(NULL, ".");
            }
        }
    } while (strcmp(sentences, "q") != 0);
    printf("*** End of Tokenizing Sentences Demo ***\n\n");

}