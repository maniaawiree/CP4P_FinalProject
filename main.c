#include "fundamentals.h"
#include "manipulating.h"
#include "converting.h"
#include "tokenizing.h"
#define _CRT_SECURE_NO_WARNINGS

//need to be commented

int main(void)
{
    char buff[10];
    do
    {
        printf("1 - Fundamentals\n");
        printf("2 - Manipulation\n");
        printf("3 - Converting\n");
        printf("4 - Tokenizing\n");
        printf("0 - Exit\n");
        printf("Which module to run? \n");
        fgets(buff, 10, stdin); //gets and assigns the user input into buff, initializing the size of buff to 10; indicating it is a user input(via keyboard);
        //fgets return buffer1 as [char or int](any number of characters or ints)[\n][\0]
        
        //-which i guess why for switch statement the programmer uses buff[0] because buff[1] is '\n' and buff[2] is NULL;
        switch (buff[0]) //refers to the first element in buff array which is the module number entered by the user
        {
                //if buff[0] is 1 then main function will call fundamentals function
            case '1': fundamentals();
                break;
                //if buff[0] is 2 then main function will call manipulating function
            case '2': manipulating();
                break;
                //if buff[0] is 3 then main function will call converting function
            case '3': converting();
                break;
                //if buff[0] is 4 then main function will call tokenizing function
            case '4': tokenizing();
                break;
        }
    } while (buff[0] != '0'); //if user enters 0 to exit, the loop will be executed again; because the condition of while is not met anymore; the code was executed at least one time because of do-while loop behavior
    return 0;
    
}
