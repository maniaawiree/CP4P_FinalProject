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
    printf("*** End of†Concatenating strings Demo ***\n\n");


/* Version 2 */
// >> insert here


/* Version 3 */
// >> insert here



}




// printf("*** Start of Concatenating String Demo ***\n");
//    char string1[BUFFER_SIZE]; //sets the array size to the value of BUFFER_SIZE
//    char string2[BUFFER_SIZE]; //sets the array size to the value of BUFFER_SIZE
//
//    do{
//        printf("Type the 1st string (q - to quit):\n");
//        fgets(string1, BUFFER_SIZE, stdin); //gets and assigns the user input into intString,initializing the size of string1 to BUFFER_SIZE; indicating it is a user input(via keyboard);
//        //fgets return string1 as [char or int](any number of characters or ints)[\n][\0]
//        string1[strlen(string1) - 1] = '\0'; //it sets the index number (length of the string1 - 1) from \n to NULL ;unexpected results can be avoided in subsequent concatenation operations
//        if ((strcmp(string1, "q") != 0)){ //it checks if string1 and q are not identical;strcmp will return 0 if string1 and q are identical.
//            printf("Type the 2nd string:\n");
//            fgets(string2, BUFFER_SIZE, stdin); //the input will be stored in string2, buffersize number of elements in string, and stdin indicates it is entered by user(keyboard)
//            string2[strlen(string2) - 1] = '\0';//it sets the index number (length of the string2 - 1) from \n to NULL ;unexpected results can be avoided in subsequent concatenation operations;
//            strcat(string1, string2); //it concatenates string 1 and string 2, "string1string2"
//            printf("Concatenated string is \'%s\'\n", string1); //outputs the concatenation result
//        }
//    }while(strcmp(string1, "q") != 0); //the loop will end if user enters q, strcmp will return 0 if string1 and q are identical.
//    printf("*** End of Concatenating String Demo ***\n\n");