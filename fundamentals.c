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
	printf("*** Start of Measuring Strings Demo ***\n");   // Print a message to indicate the start of the program
 	char buffer2[BUFFER_SIZE];  // In this program, buffer2 is declared as a character array with a size of BUFFER_SIZE, which is defined as 80 using the #define preprocessor directive. This means that buffer2 can store up to 79 characters plus a null terminator character.The purpose of buffer2 is to temporarily store the user's input when they type a string into the program. 
  	do{
    		printf("Type a string (q - to quit):\n");   // Prompt the user to input a string
    		fgets(buffer2, BUFFER_SIZE, stdin);   // when the program reaches the fgets() function call, it waits for the user to input a string of characters and press enter. Once the user presses enter, fgets() reads the input from stdin and stores it in buffer2. If the user enters more than BUFFER_SIZE - 1 characters, fgets() will only read up to BUFFER_SIZE - 1 characters and store them in buffer2.
	
    		buffer2[strlen(buffer2) - 1] = '\0';   // Remove the newline character from the input
    		if (strcmp(buffer2, "q") != 0) { // The line if (strcmp(buffer2, "q")!=0) checks that the user input stored in buffer 2 is not equal to the string "q" (zero if buffer2 is q). If the input is not "q", the length of the input string is printed using printf(). If the input is "q", the program exits without printing the length of the input string
      			printf("The length of \'%s\' is %d characters\n",
              		buffer2, (int)strlen(buffer2));   // Print the length of the input string and buffer2 string that user-inputted
    		}
  	   }while (strcmp(buffer2, "q") != 0);   // Repeat the loop until the user enters "q"
  	   printf("*** End of measuring Strings Demo ***\n\n");   // Print a message to indicate the end of the program
}



