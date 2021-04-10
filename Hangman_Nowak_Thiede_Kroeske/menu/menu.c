/**

    ---- MENU.c ----

Author: Nico Nowak
10.04.2021

**/

#include "menu.h"
#include <stdio.h>
#include "../CUI.h"

// ----- FUNCTION DEFINITIONS -----
/// Shows the main menu of the hangman game.
/// The Cursor will be set inside of the input border.
char menu_show()
{
    cui_setCursor(2,2);
    printf("HANGMAN __");

    // Show options for the user to input.
    cui_setCursor(2,4);
    printf("S -- Start a game of hangman!");

    // Create the border for Input
    cui_createSmallBorder(2, 10, 5, 3);

    // Show the devs in the bottom left corner.
    cui_setColor(CUI_COLOR_BLUESCREEN);
    cui_setCursor(14,18);
    printf("Entwicklung: Nico Nowak, Timo Thiede, Jesse Kroeske");
    cui_resetColor();

    cui_setCursor(3,11);

    char inputLetter = '0';
    inputLetter = menu_awaitUserInput();

    return inputLetter;
}

/// Awaits the user input and returns the input.
char menu_awaitUserInput()
{
    char inputLetter = '0';

    scanf("%c", &inputLetter);

    return inputLetter;
}
