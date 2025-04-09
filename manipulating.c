// MANIPULATING SOURCE
#define _CRT_SECURE_NO_WARNINGS
#include "manipulating.h"

void manipulating() {
    /* Version 1 */
    printf("*** Start of Concatenating Strings Demo ***\n");
    char string1[BUFFER_SIZE]; // First string
    char string2[BUFFER_SIZE]; // Second string
    do {
        // Prompt user for the first string 
        printf("Type the 1st string (q - to quit):\n");
        fgets(string1, BUFFER_SIZE, stdin);  // Read string with spaces
        string1[strlen(string1) - 1] = '\0'; // Remove newline character
        if (strcmp(string1, "q") != 0) {     // If input is not 'q'

            // Prompt user for the second string
            printf("Type the 2nd string: \n");
            fgets(string2, BUFFER_SIZE, stdin);  // Read string with spaces
            string2[strlen(string2) - 1] = '\0'; // Remove newline character

            // Concatenate second string to the first
            strcat(string1, string2);

            // Print the result
            printf("Concatenated string is \"%s\"\n", string1);
        }
    } while (strcmp(string1, "q") != 0); // Loop until 'q' is entered
    printf("*** End of Concatenating Strings Demo ***\n\n");

    /* Version 2 */
    printf("*** Start of Comparing Strings Demo ***\n");
    char compare1[BUFFER_SIZE]; // First string to compare
    char compare2[BUFFER_SIZE]; // Second string to compare
    int result; // Result of comparsion
    do {
        // Prompt for the first string
        printf("Type the 1st string to compare (q - to quit):\n");
        fgets(compare1, BUFFER_SIZE, stdin);   // Read strings from user
        compare1[strlen(compare1) - 1] = '\0'; // Remove newline character

        // Continue if the input is not 'q'
        if (strcmp(compare1, "q") != 0) {      

            // Prompt user for the second string
            printf("Type the 2nd string to compare:\n");
            fgets(compare2, BUFFER_SIZE, stdin); // Read strings from user
            compare2[strlen(compare2) - 1] = '\0'; // Remove new line character

            // Compare two strings using strcmp()
            result = strcmp(compare1, compare2);

            // Display comparison result in human-readable form
            if (result < 0)
                printf("\'%s\' string is less than \'%s\'\n", compare1, compare2);
            else if (result == 0)
                printf("\'%s\' string is equal to \'%s\'\n", compare1, compare2);
            else
                printf("\'%s\' string is greater than \'%s\'\n", compare1, compare2);
        }
    } while (strcmp(compare1, "q") != 0); // Loop until 'q' is entered
    printf("*** End of Comparing Strings Demo ***\n\n");


    /* Version 3 */
    printf("*** Start of Searching Strings Demo ***\n");
    char haystack[BUFFER_SIZE]; // The main string to search in
    char needle[BUFFER_SIZE];   // The substring to search for
    char* occurrence = NULL;    // Pointer to where the substring is found
    do {
        // Prompt for the main string
        printf("Type the string (q - to quit):\n");
        fgets(haystack, BUFFER_SIZE, stdin);   // Read main string
        haystack[strlen(haystack) - 1] = '\0'; // Remove newline
        
        // Continue only if the input is not 'q'
        if (strcmp(haystack, "q") != 0) {

            // Prompt for the sunstring
            printf("Type the substring:\n");
            fgets(needle, BUFFER_SIZE, stdin); // Read the substring
            needle[strlen(needle) - 1] = '\0'; // Remove newline
            
            // Search for the substring in the main string
            occurrence = strstr(haystack, needle); 
            
            // Output the result
            if (occurrence)
                printf("\'%s\' found at %d position\n", needle, (int)(occurrence - haystack));
            else
                printf("Not found\n");
        }
    } while (strcmp(haystack, "q") != 0); // Loop until 'q' is entered 
    printf("*** End of Searching Strings Demo ****\n\n");
}


   