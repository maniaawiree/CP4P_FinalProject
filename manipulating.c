#include "manipulating.h"

void manipulating() {
/* Version 3 */
printf("***start of searching strings Demo ***\n");
		char haystack[BUFFER_SIZE];
		char needle[BUFFER_SIZE];
		char* occurrence = NULL;
		do {
			printf("Type the string (q - to quit): \n"); 
			fgets(haystack, BUFFER_SIZE, stdin);
			haystack[strlen(haystack) - 1] = '\0';
			if (strcmp(haystack, "q") != 0) {
				printf("Type the substring: \n");
				fgets(needle, BUFFER_SIZE, stdin);
				needle[strlen(needle) - 1] = '\0';
				occurrence = strstr(haystack, needle);
				if (occurrence)
					printf("\'%s\' found at %d position\n", needle, (int)(occurrence - haystack));
				else
					printf("Not found\n");

			}
		} while (strcmp(haystack,"q") != 0);
			printf("*** End of Searching Strings Demo ***\n\n");
}

