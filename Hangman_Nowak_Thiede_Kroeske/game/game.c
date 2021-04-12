/**

    ---- GAME.c ----

Author: Nico Nowak
10.04.2021

**/

#include "words.h"
#include "../menu/menu.h"
#include <stdio.h>
#include "../CUI.h"

/// Initializes the game window with border. It also chooses the word to solve random.
void initialize_game()
{
    // Build borders.
    cui_clear();
    cui_createStdBorder();
    cui_createSmallBorder(1,2,63,3);

    // Get a random word from file and print "_" for the length of the word.
    char *word = choose_word();

    // If an error occured while reading word file exit with error code 1.
    if(strlen(word) == 0)
    {
        exit(1);
    }

    cui_setCursor(2,3);
    printf("%s", word);
}
