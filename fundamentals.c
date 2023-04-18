#include "fundamentals.h"
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE		80
#define NUM_INPUT_SIZE	10


void fundamentals(){
/* Version 1 */
    printf("*** Start of Indexing Strings Demo ***\n");
	char	buffer1[BUFFER_SIZE];
	char	numInput[NUM_INPUT_SIZE];
	size_t	position;
	do {
		printf("Type not empty string (q - to quit):\n");
		fgets(buffer1, BUFFER_SIZE, stdin); /*fgets() is used to read the user's input 
                                                    and store it in the buffer1 array. 
                                                    The function reads up to BUFFER_SIZE - 1 characters from the standard input (stdin) 
                                                    and stores them in buffer1 array. If the user enters more characters than the size of 
                                                    the array, the extra characters are discarded*/
		buffer1[strlen(buffer1) - 1] = '\0'; //it sets the index number (length of the buffer1 string - 1) from \n to NULL ;unexpected results can be avoided in subsequent concatenation operations
		if (strcmp(buffer1, "q") != 0) { //it checks if buffer1 and q are not identical;strcmp will return 0 if buffer1 and q are identical.
			printf("Type the character position within the string;\n");
			fgets(numInput, NUM_INPUT_SIZE, stdin); //gets and assigns the user input into numInput; initializing the size of numInput to NUM_INPUT_SIZE
			numInput[strlen(numInput) - 1] = '\0'; //the newline character at the end of the user's input by is removed by replacing it with a null terminator.
			position = atoi(numInput); //atoi converts the string argument which is numInput to an integer and returns the value
			if (position >= strlen(buffer1)) { //checks if the length of buffer1 string is less than or equal to the value of position and if true; if statements executes
				position = strlen(buffer1) - 1; // the length of buffer1 minus 1 is assigned to poisition
				printf("Too big... Position reduced to max. availbale\n");
			}
			printf("The character found at %d position is \'%c\'\n",
							(int)position, buffer1[position]);
            //bug : buffer1[position] should be buffer1[position-1] instead to get the actual element position character
		}
	} while (strcmp(buffer1, "q") != 0); //The loop continues as long as the user does not enter "q" to quit.
	printf("*** End of Indexing Strings Demo ***\n\n");


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

/* Version 3 */
    printf("*** Start of copying strings Demo **\n"); // Print a message to indicate the start of the program
    char destination[BUFFER_SIZE]; // Declare a character array called destination with a size of BUFFER_SIZE
    char source[BUFFER_SIZE]; // Declare a character array called source with a size of BUFFER_SIZE
    do {
        destination[0] = '\0'; // Set the first character of the destination array to a null terminator to reset the array to an empty string
        printf("Destination string is reset to empty\n"); // Print a message to indicate that the destination string has been reset to an empty string
        printf("Type the source string (q - to quit);\n"); // Prompt the user to input a string
        fgets(source, BUFFER_SIZE, stdin); /*fgets() is used to read the user's input 
                                                    and store it in the source array. 
                                                    The function reads up to BUFFER_SIZE - 1 characters from the standard input (stdin) 
                                                    and stores them in source array. If the user enters more characters than the size of 
                                                    the array, the extra characters are discarded*/
        source[strlen(source) - 1] = '\0'; //the newline character at the end of the user's input by is removed by replacing it with a null terminator.
        if (strcmp(source, "q") != 0) { // The line if (strcmp(source, "q")!=0) checks that the user input stored in source is not equal to the string "q" (zero if source is q). If the input is not "q", the strcpy() function is used to copy the string stored in source to the destination array. The new value of destination is then printed using printf().
            strcpy(destination, source); //copies the string in source to destination array
            printf("New destination string is \'%s\'\n", destination); //prints the string in destination to the console
        }
    } while (strcmp(source, "q") != 0); //The loop continues as long as the user does not enter "q" to quit.
    printf("*** End of Copying strings Demo ***\n\n"); 
}




