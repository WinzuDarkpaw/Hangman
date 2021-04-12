/**

    ---- WORDS.c ----

Author: Nico Nowak
12.04.2021

**/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../CUI.h"

/// Chooses a random word to guess from file.
char* get_word()
{
    fflush(stdin);
    FILE *file;     // Input File
    char *temp = malloc(32);  // Buffer
    int line;       // Line from which the word is chosen

    // Choose a random line.
    line = rand() % 10;

    // Read file.
    file = fopen("words.txt", "r");

    // If an error occures.
    if(!file)
    {
        return "";
    }

    // Get line and store it in temp.
    while(line--)
    {
        fgets(temp, 32, file);
    }

    return temp;
}

char* choose_word()
{
    fflush(stdin);

    cui_setCursor(2,7);
    printf("Geben Sie ein Wort ein:\n");

    char *temp = malloc(32);

    cui_setCursor(2,8);
    gets(temp);

    cui_clear();
    cui_createStdBorder();
    cui_createSmallBorder(1,2,63,3);

    return temp;
}
