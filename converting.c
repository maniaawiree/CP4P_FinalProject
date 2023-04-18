#include "converting.h"
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80

void converting() {
/* Version 3 */
    printf("*** Start of Converting Strings to long Demo ***\n");
    char longString[BUFFER_SIZE];
    long longNumber;
    do { //prompts the user to enter a numeric string until they enter "q" to quit.
        printf("Type the long numeric string (q - to quit):\n");
        fgets(longString, BUFFER_SIZE, stdin); /*fgets() is used to read the user's input 
                                                    and store it in the longString array. 
                                                    The function reads up to BUFFER_SIZE - 1 characters from the standard input (stdin) 
                                                    and stores them in longString. If the user enters more characters than the size of 
                                                    the array, the extra characters are discarded*/
        longString[strlen(longString)] = '\0'; //the newline character at the end of the user's input by is removed by replacing it with a null terminator.
        if (strcmp(longString, "q") != 0) { //if the user did not enter q to quit the function atol will be called
            longNumber = atol(longString); /*the function atol() is called to convert the string in longString to a long value, 
                                                then it is stored in longNumber variable */
            printf("Converted number is %ld\n", longNumber); //the value of longNumber is printed to the console
        }
    } while (strcmp (longString, "q") != 0); //The loop continues as long as the user does not enter "q" to quit.
    printf("*** End of Converting Strings to long Demo ***\n\n");
}

