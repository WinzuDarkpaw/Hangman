/**

    ---- WORDS.c ----

Author: Nico Nowak
12.04.2021

**/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/// Chooses a random word to guess from file.
char* get_word()
{
    FILE *file;     // Input File
    char *temp;  // Buffer
    int line;       // Line from which the word is chosen

    // Choose a random line.
    line = rand() % 10;

    // Read file.
    file = fopen("words.txt", "r");

    // If an error occures.
    if(!file)
    {
        exit(1);
        return "";
    }

    // Get line and store it in temp.
    while(line--)
    {
        fgets(temp, 32, file);
    }

    return temp;
}
