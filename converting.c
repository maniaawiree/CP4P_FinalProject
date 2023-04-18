#include "converting.h"
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80

void converting() {
/* Version 3 */
    printf("*** Start of Converting Strings to long Demo ***\n");
    char longString[BUFFER_SIZE];
    long longNumber;
    do {
        printf("Type the long numeric string (q - to quit):\n");
        fgets(longString, BUFFER_SIZE, stdin); /*fgets() is used to read the user's input 
                                                    and store it in the longString array. 
                                                    The function reads up to BUFFER_SIZE - 1 characters from the standard input (stdin) 
                                                    and stores them in longString. If the user enters more characters than the size of 
                                                    the array, the extra characters are discarded*/
        longString[strlen(longString)] = '\0';
        if (strcmp(longString, "q") != 0) {
            longNumber = atol(longString);
            printf("Converted number is %ld\n", longNumber);
        }
    } while (strcmp (longString, "q") != 0);
    printf("*** End of Converting Strings to long Demo ***\n\n");
}

