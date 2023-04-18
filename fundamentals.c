#include "fundamentals.h"
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE		80
#define NUM_INPUT_SIZE	10



void fundamentals(){
/* Version 3 */
    printf("*** Start of Copying Strings Demo ***");
    char destination[BUFFER_SIZE];
    char source[BUFFER_SIZE];
    do {
        destination[0] = '\0';
        printf("Destinstion string is reset to empty\n");
        fgets(source, BUFFER_SIZE, stdin);
        source[strlen(source) - 1] = '\0';
        if (strcmp(destination, source) != 0) {
            strcpy(destination, source);
            printf("New destination string is \'%s\'\n", destination);
        }
    } while (strcmp(source, "q") != 0);
    printf("*** End of Copying Strings Demo ***\n\n");


}



