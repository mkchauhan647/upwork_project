/*
 This function char *pig(char *word) takes a single word as a string and returns a
string containing the Pig Latin for the word.
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "pig.h"

/* Function to convert a single word to Pig Latin */
char* pig(char* word) {
    char* pig_word = malloc(strlen(word) + 3); // Allocate enough space for the new word
    char* temp = pig_word; // Store the pointer to the beginning of the new word
    char* first_vowel = NULL; // Pointer to the first vowel in the word (if any)
    int first_vowel_index = -1; // Index of the first vowel in the word (if any)

    // Convert the word to lowercase
    for (char* p = word; *p; p++) {
        *p = tolower(*p);
    }

    // Check if the word starts with a vowel
    if (strchr("aeiou", word[0]) != NULL) {
        // If the word starts with a vowel, add "way" at the end
        sprintf(pig_word, "%sway", word);
    }
    else {
        // If the word starts with a consonant, find the first vowel
        for (char* p = word; *p; p++) {
            if (strchr("aeiouy", *p) != NULL) {
                first_vowel = p;
                first_vowel_index = p - word;
                break;
            }
        }

        // If there's no vowel, just add "ay" at the end
        if (first_vowel == NULL) {
            sprintf(pig_word, "%say", word);
        }
        else {
            // Move the consonants before the first vowel to the end of the word
            sprintf(pig_word, "%s", first_vowel);
            strncat(pig_word, word, first_vowel_index);
            // Add "ay" at the end
            strcat(pig_word, "ay");
        }
    }

    return temp; // Return the pointer to the beginning of the new word
}