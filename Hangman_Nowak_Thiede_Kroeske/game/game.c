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
    char *word;
    word = get_word();

    // If an error occured while reading word file return to main menu.
    if(strlen(word) <= 0)
    {
        menu_show();
    }

    cui_setCursor(2,3);
    printf("%s", word);
}
