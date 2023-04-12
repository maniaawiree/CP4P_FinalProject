#include "manipulating.h"

void manipulating() {
 printf("*** Start of Comparing Strings Demo ***\n"); // prints the start of the program message

        char compare1[BUFFER_SIZE]; // declares a character array to store the first string to be compared
        char compare2[BUFFER_SIZE]; // declares a character array to store the second string to be compared
        int result; // declares an integer variable to store the result of the string comparison

        do // start of a do-while loop that will execute at least once
        {
            printf("Type the Ist string to compare (q - to quit) : \n"); // prompts the user to enter the first string to be compared
            fgets(compare1, BUFFER_SIZE, stdin); // reads the user input from the console and stores it in the compare1 array
            compare1[strlen(compare1) - 1] = '\0'; // removes the trailing newline character from the compare1 string

            if (strcmp(compare1, "q") != 0) // checks if the user entered "q" to quit the program
            {
                printf("Type the 2nd string to compare: \n"); // prompts the user to enter the second string to be compared
                fgets(compare2, BUFFER_SIZE, stdin); // reads the user input from the console and stores it in the compare2 array
                compare2[strlen(compare2) - 1] = '\0'; // removes the trailing newline character from the compare2 string

                result = strcmp(compare1, compare2); // compares the two strings and stores the result in the result variable

                if (result < 0) // checks if the first string is less than the second string
                    printf("\'%s\' string is less than \'%s\'\n", compare1, compare2); // prints the message indicating that the first string is less than the second string
                else if (result == 0) // checks if the two strings are equal
                    printf("\'%s\' string is equal to \'%s\'\n", compare1, compare2); // prints the message indicating that the two strings are equal
                else // the first string is greater than the second string
                    printf("\'%s\' string is greater than \'%s\'\n", compare1, compare2); // prints the message indicating that the first string is greater than the second string
            }
        } while (strcmp(compare1, "q") != 0); // continues to prompt the user to enter strings to compare until they enter "q" to quit

        printf("*** End of Comparing Strings Demo ***\n\n"); // prints the end of the program message
    }



}
