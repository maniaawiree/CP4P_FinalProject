#include "converting.h"
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80 //defining macro 

void converting() {
/* Version 1 */
    printf("*** Start of Converting Strings to int Demo ***\n");
    char intString[BUFFER_SIZE];
    int intNumber;
    do {
    printf("Type an int numeric string (q - to quit):\n");
    fgets(intString, BUFFER_SIZE, stdin); //gets and assigns the user input into intString,initializing the size of intString to BUFFER_SIZE; indicating it is a user input(via keyboard);
    //fgets return intString as [char or int](any number of characters or ints)[\n][\0] 
    intString[strlen(intString) - 1] = '\0'; //it sets the index number (length of the intString string - 1) from \n to NULL ;unexpected results can be avoided in subsequent concatenation operations
    if (strcmp(intString, "q") != 0) { //it checks if intString and q are not identical;strcmp will return 0 if intString and q are identical.
        intNumber = atoi(intString); //atoi returns 0 if there is no number at the beginning of the string, or return the integer string at the beginning of the string entered by user 75bhj -> 75; aaaa -> 0
        printf("Converted number is %d\n", intNumber); //it outputs the first intergers entered by user
        }
    } while (strcmp(intString, "q") != 0); //the loop will end if user enters q, strcmp will return 0 if intString and q are identical.
    printf("*** End of Converting Strings to int Demo ***\n\n");

/* Version 2 */
    printf("*** Start of Converting Strings to double Demo ***\n");
    char doubleString[BUFFER_SIZE];
    double doubleNumber;
    do{ //prompts the user to enter a numeric string until they enter "q" to quit.
        printf("Type the double numeric string (q - to quit):\n");
        fgets(doubleString, BUFFER_SIZE, stdin); /*fgets() is used to read the user's input 
                                                    and store it in the doubleString array. 
                                                    The function reads up to BUFFER_SIZE - 1 characters from the standard input (stdin) 
                                                    and stores them in doubleString. If the user enters more characters than the size of 
                                                    the array, the extra characters are discarded*/
        doubleString[strlen(doubleString) - 1] = '\0'; //the newline character at the end of the user's input by is removed by replacing it with a null terminator.
        if ((strcmp(doubleString, "q") != 0)) { //if the user did not enter q to quit the function atof will be called
            doubleNumber = atof(doubleString); /*the function atof() is called to convert the string in doubleString to a double value, 
                                                then it is stored in doubleNumber variable */
            printf("Converted number is %f\n", doubleNumber); //the value of doubleNumber is printed to the console
        }
    } while (strcmp(doubleString, "q")  != 0); //The loop continues as long as the user does not enter "q" to quit.
    printf("*** End of Converting Strings to double Demo ***\n\n");
}

