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
		fgets(buffer1, BUFFER_SIZE, stdin); //gets and assigns the user input into buffer1, initializing the size of buffer1 to BUFFER_SIZE; indicating it is a user input(via keyboard);
        //fgets return buffer1 as [char or int](any number of characters or ints)[\n][\0]
		buffer1[strlen(buffer1) - 1] = '\0'; //it sets the index number (length of the buffer1 string - 1) from \n to NULL ;unexpected results can be avoided in subsequent concatenation operations
		if (strcmp(buffer1, "q") != 0) { //it checks if buffer1 and q are not identical;strcmp will return 0 if buffer1 and q are identical.
			printf("Type the character position within the string;\n");
			fgets(numInput, NUM_INPUT_SIZE, stdin); //gets and assigns the user input into numInput; initializing the size of numInput to NUM_INPUT_SIZE
			numInput[strlen(numInput) - 1] = '\0'; //it sets the index number (length of numInput string - 1) from \n to NULL
			position = atoi(numInput); //atoi converts the string argument which is numInput to an integer and returns the value
			if (position >= strlen(buffer1)) { //checks if the length of buffer1 string is less than or equal to the value of position and if true; if statements executes
				position = strlen(buffer1) - 1; // the length of buffer1 minus 1 is assigned to poisition
				printf("Too big... Position reduced to max. availbale\n");
			}
			printf("The character found at %d position is \'%c\'\n",
							(int)position, buffer1[position]);
            //bug : buffer1[position] should be buffer1[position-1] instead to get the actual element position character
		}
	} while (strcmp(buffer1, "q") != 0);//the loop will end if user enters q, strcmp will return 0 if buffer1 and q are identical.
	printf("*** End of Indexing Strings Demo ***\n\n");


/* Version 2 */
// >> insert here


/* Version 3 */
// >> insert here


}



