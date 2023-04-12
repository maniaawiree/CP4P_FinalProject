#include "converting.h"
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80 


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
    do{ 
        printf("Type the double numeric string (q - to quit):\n");
        fgets(doubleString, BUFFER_SIZE, stdin); 
        doubleString[strlen(doubleString) - 1] = '\0'; 
        if ((strcmp(doubleString, "q") != 0)) { 
            doubleNumber = atof(doubleString); 
            printf("Converted number is %f\n", doubleNumber); 
        }
    } while (strcmp(doubleString, "q")  != 0); 
    printf("*** End of Converting Strings to double Demo ***\n\n");

/* Version 3 */
// >> insert here
}

