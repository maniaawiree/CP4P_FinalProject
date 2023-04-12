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
        fgets(longString, BUFFER_SIZE, stdin); 
        longString[strlen(longString)] = '\0';
        if (strcmp(longString, "q") != 0) {
            longNumber = atol(longString);
            printf("Converted number is %ld\n", longNumber);
        }
    } while (strcmp (longString, "q") != 0);
    printf("*** End of Converting Strings to long Demo ***\n\n");
}
