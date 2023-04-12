#include "manipulating.h"  // Includes header file "manipulating.h".
#define BUFFER_SIZE 80 
#define _CRT_SECURE_NO_WARNINGS  


void manipulating() {
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
    } while (strcmp(compare1, "q") != 0); 
    printf("*** End of Comparing Strings Demo ***\n\n"); // prints the end of the program message
}