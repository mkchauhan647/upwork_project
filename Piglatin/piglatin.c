#include <stdio.h>
#include <string.h>
#include "piglatin.h"
#include "pig.h"
void piglatin(){
    // Ask the user for input and convert it to Pig Latin
    char line[100]; // Buffer for the input line
    char *word;     // Pointer to the current word in the line

    while (1)
    {
        printf("Enter a line of English text (empty line to exit): ");
        fgets(line, sizeof(line), stdin);

        if (line[0] == '\n')
        {
            break; // Exit if the user enters an empty line
        }

        // Split the line into words and convert each one to Pig Latin
        word = strtok(line, " \t\n"); // Get the first word in the line

        while (word != NULL)
        {
            printf("%s ", pig(word));     // Convert the word to Pig Latin and print it
            word = strtok(NULL, " \t\n"); // Get the next word in the line
        }

        printf("\n");
    }
}