#include "manipulating.h"  // Includes header file "manipulating.h".
#define BUFFER_SIZE 80 
#define _CRT_SECURE_NO_WARNINGS  
void manipulating() {


/* Version 1 */
    printf("*** start of Concatenating Strings Demo ***\n"); // Prints a message to start the concatenating strings demo.
    // Declares two character arrays with a size of BUFFER_SIZE.
    char string1[BUFFER_SIZE];
    char string2[BUFFER_SIZE];
    do {  // Loops until the user inputs "q" as the first string.
        printf("Type the lst string (g - to quit): \n");  // Requests the first string from the user.
        fgets(string1, BUFFER_SIZE, stdin);  // Reads the user's input and removes the newline character.
        string1[strlen(string1) - 1] = '\0';
        //  if the first string is not "q.", prompts the user to input the second string.
        if ((strcmp(string1, "q") != 0))
        {
            printf("Type the 2nd string: \n");
            // Reads the user's input for the second string and removes the newline character.
            fgets(string2, BUFFER_SIZE, stdin);
            string2[strlen(string2) - 1] = '\0';
            // Concatenates the two strings and prints the result.
            strcat(string1, string2);
            printf("Concatenated string is \'%s\'\n", string1);
        }
    } while (strcmp(string1, "q") != 0);
    // Prints a message to indicate the end of the concatenating strings demo.
    printf("*** End of Concatenating strings Demo ***\n\n");


/* Version 2 */
    printf("*** Start of Comparing Strings Demo ***\n"); // prints the start of the program message
    char compare1[BUFFER_SIZE]; // declares a character array to store the first string to be compared
    char compare2[BUFFER_SIZE]; // declares a character array to store the second string to be compared
    int result; // declares an integer variable to store the result of the string comparison
    do {//prompts the user to enter a numeric string until they enter "q" to quit and it will be executed at least once.
        printf("Type the Ist string to compare (q - to quit) : \n"); // prompts the user to enter the first string to be compared
        fgets(compare1, BUFFER_SIZE, stdin); /*fgets() is used to read the user's input 
                                                    and store it in the compare1 array. 
                                                    The function reads up to BUFFER_SIZE - 1 characters from the standard input (stdin) 
                                                    and stores them in compare1. If the user enters more characters than the size of 
                                                    the array, the extra characters are discarded*/
        compare1[strlen(compare1) - 1] = '\0'; //the newline character at the end of the user's input by is removed by replacing it with a null terminator.
        if (strcmp(compare1, "q") != 0) { // checks if the user entered "q" to quit the program
            printf("Type the 2nd string to compare: \n"); // prompts the user to enter the second string to be compared
            fgets(compare2, BUFFER_SIZE, stdin); /*The fgets() function reads the user's input 
                                            from the standard input stream and stores it in the phrases array.*/
            compare2[strlen(compare2) - 1] = '\0'; //the newline character at the end of the user's input by is removed by replacing it with a null terminator.

            result = strcmp(compare1, compare2); // compares the two strings and stores the return value of strcmp in the result variable

            if (result < 0) // if result is less than 0 means the compare1 string is smaller than compare2
                    printf("\'%s\' string is less than \'%s\'\n", compare1, compare2); //the string in compare1 is smaller than the string in compare2 is printed to the console
            else if (result == 0) // if result is 0 means compare1 and compare2 strings are equal
                    printf("\'%s\' string is equal to \'%s\'\n", compare1, compare2); //the string in compare1 is equal to compare2 is printed to the console
            else //if result is greater than 0, means compare1 string is bigger than compare2 string
                    printf("\'%s\' string is greater than \'%s\'\n", compare1, compare2); //the string in compare1 is greater than the string in compare2 is printed to the console
        }
    } while (strcmp(compare1, "q") != 0); //The loop continues as long as the user does not enter "q" to quit.
    printf("*** End of Comparing Strings Demo ***\n\n"); // prints the end of the program message

/* Version 3 */
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
        }
    } while (strcmp(string1, "q") != 0);
    // Prints a message to indicate the end of the concatenating strings demo.
    printf("*** End of†Concatenating strings Demo ***\n\n");



}