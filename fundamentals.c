#include "fundamentals.h"
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE		80
#define NUM_INPUT_SIZE	10



void fundamentals(){
/* Version 2 */
    printf("*** Start of Measuring strings Demo ***\n");
    char buffer2[BUFFER_SIZE];
    do { //prompts the user to enter a numeric string until they enter "q" to quit and it will be executed at least once.
        printf("Type a string (q - to quit):\n"); 
        fgets(buffer2, BUFFER_SIZE, stdin); /*fgets() is used to read the user's input 
                                                    and store it in the buffer2 array. 
                                                    The function reads up to BUFFER_SIZE - 1 characters from the standard input (stdin) 
                                                    and stores them in buffer2. If the user enters more characters than the size of 
                                                    the array, the extra characters are discarded*/
        buffer2[strlen(buffer2) - 1] = '\0'; //the newline character at the end of the user's input by is removed by replacing it with a null terminator.
        if (strcmp (buffer2, "q") != 0) // checks if the user entered "q" to quit the program
            printf ("The length of \'%s\' is %d characters\n",
                     buffer2, (int)strlen(buffer2)); //prints the input string along with the length of the string which is determined by strlen function
    } while (strcmp(buffer2, "q") != 0) ; //The loop continues as long as the user does not enter "q" to quit.
   printf ("*** End of Measuring Strings Demo ***\n\n");
}



