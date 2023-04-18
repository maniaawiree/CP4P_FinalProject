#include "fundamentals.h"
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE		80
#define NUM_INPUT_SIZE	10



void fundamentals(){
/* Version 3 */
    printf("*** Start of copying strings Demo **\n");
    // Print a message to indicate the start of the program

    char destination[BUFFER_SIZE];
    // Declare a character array called destination with a size of BUFFER_SIZE

    char source[BUFFER_SIZE];
    // Declare a character array called source with a size of BUFFER_SIZE

    do {
        destination[0] = '\0';
        // Set the first character of the destination array to a null terminator to reset the array to an empty string
        printf("Destination string is reset to empty\n");
        // Print a message to indicate that the destination string has been reset to an empty string
        printf("Type the source string (q - to quit);\n");
        // Prompt the user to input a string

        fgets(source, BUFFER_SIZE, stdin);
        // When the program reaches the fgets() function call, it waits for the user to input a string of characters and press enter. Once the user presses enter, fgets() reads the input from stdin and stores it in the source array. If the user enters more than BUFFER_SIZE - 1 characters, fgets() will only read up to BUFFER_SIZE - 1 characters and store them in the source array.

        source[strlen(source) - 1] = '\0';
        // Remove the newline character from the input

        if (strcmp(source, "q") != 0) {
            // The line if (strcmp(source, "q")!=0) checks that the user input stored in source is not equal to the string "q" (zero if source is q). If the input is not "q", the strcpy() function is used to copy the string stored in source to the destination array. The new value of destination is then printed using printf().
            strcpy(destination, source);
            printf("New destination string is \'%s\'\n", destination);
        }

    } while (strcmp(source, "q") != 0);
    // Repeat the loop until the user enters "q"
    printf("*** End of Copying strings Demo ***\n\n");
    // Print a message to indicate the end of the program
}




