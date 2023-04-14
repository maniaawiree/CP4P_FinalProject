#define _CRT_SECURE_NO_WARNINGS  // defines a preprocessor directive to turn off alerts for dangerous functions.
#define BUFFER_SIZE 80   // Specifies the size of the character arrays that are utilised in the code.
#include "manipulating.h"  // Includes header file "manipulating.h".   
void manipulating() {
/* Version 3 */
// Print start message
printf("***start of searching strings Demo ***\n");
// Declare character arrays for strings
char haystack[BUFFER_SIZE];
char needle[BUFFER_SIZE];
char* occurrence = NULL;

// This loop prompts the user to input a string and a substring to search for
// It terminates when the user enters "q" as the input string
do {
	// This line prompts the user to input a string
	printf("Type the string (q - to quit): \n");
// This line reads the user input from the console and stores it in the "haystack" array
fgets(haystack, BUFFER_SIZE, stdin);

// This line removes the trailing newline character from the input string
haystack[strlen(haystack) - 1] = '\0';

// This line checks if the user entered "q" to quit the program
if (strcmp(haystack, "q") != 0) {

	// This line prompts the user to input a substring to search for
	printf("Type the substring: \n");

	// This line reads the user input from the console and stores it in the "needle" array
	fgets(needle, BUFFER_SIZE, stdin);

	// This line removes the trailing newline character from the input substring
	needle[strlen(needle) - 1] = '\0';

	// This line finds the first occurrence of the substring in the input string and stores a pointer to it in the "occurrence" variable
	occurrence = strstr(haystack, needle);

	// This block checks if the substring was found in the input string
	if (occurrence)
		// This line prints the message indicating the position of the first occurrence of the substring in the input string
		printf("\'%s\' found at %d position\n", needle, (int)(occurrence - haystack));
	else
		// This line prints the message indicating that the substring was not found in the input string
		printf("Not found\n");
} while (strcmp(haystack,"q") != 0);

// This line prints the end of the program message for searching strings
printf("*** End of Searching Strings Demo ***\n\n");





