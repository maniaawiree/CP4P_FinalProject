#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "fundamentals.h"

void fundamentals(){
/* Version 2 */
    printf("*** Start of Measuring strings Demo ***\n");
    char buffer2[BUFFER_SIZE];
    do { //prompt the user to enter a numeric string until they enter "q" to quit.
        printf("Type a string (q - to quit):\n"); 
        fgets(buffer2, BUFFER_SIZE, stdin); /*fgets() is used to read the user's input 
                                                    and store it in the buffer2 array. 
                                                    The function reads up to BUFFER_SIZE - 1 characters from the standard input (stdin) 
                                                    and stores them in buffer2 array. If the user enters more characters than the size of 
                                                    the array, the extra characters are discarded*/
        buffer2[strlen(buffer2) - 1] = '0'; //the newline character at the end of the user's input by is removed by replacing it with a null terminator.
        if (strcmp (buffer2, "q") != 0)
            printf ("The length of \'%s\' is %d characters\n",
                     buffer2, (int)strlen(buffer2));
    } while (strcmp(buffer2, "q") != 0) ; //The loop continues as long as the user does not enter "q" to quit.
   printf ("*** End of Measuring Strinas Demo ***\n\n");

}