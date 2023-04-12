#include "manipulating.h"
#define _CRT_SECURE_NO_WARNINGS  
#define BUFFER_SIZE 80   

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
    printf("*** Start of Comparing Strings Demo ***\n"); 
    char compare1[BUFFER_SIZE]; 
    char compare2[BUFFER_SIZE]; 
    int result; 
    do {
        printf("Type the Ist string to compare (q - to quit) : \n"); 
        fgets(compare1, BUFFER_SIZE, stdin); 
        compare1[strlen(compare1) - 1] = '\0'; 
        if ((strcmp(compare1, "q") != 0)) {
            printf("Type the 2nd string to compare: \n"); 
            fgets(compare2, BUFFER_SIZE, stdin);
            compare2[strlen(compare2) - 1] = '\0';
            result = strcmp(compare1, compare2); 
            if      (result < 0) 
                    printf("\'%s\' string is less than \'%s\'\n", compare1, compare2); 
            else if (result == 0) 
                    printf("\'%s\' string is equal to \'%s\'\n", compare1, compare2); 
            else 
                    printf("\'%s\' string is greater than \'%s\'\n", compare1, compare2); 
        }
    } while (strcmp(compare1, "q") != 0); 
    printf("*** End of Comparing Strings Demo ***\n\n"); 
}