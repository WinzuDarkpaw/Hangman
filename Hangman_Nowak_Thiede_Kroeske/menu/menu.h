/**

    ---- MENU.h ----

Author: Nico Nowak
10.04.2021

**/

#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

// ----- SYMBOLIC CONSTANTS -----
#define START_GAME 1
#define CLOSE_GAME 2

// ----- FUNCTION PROTOTYPES -----
/// Shows the main menu of the hangman game.
/// The Cursor will be set inside of the input border.
char menu_show();

/// Awaits the user input and returns the input.
char menu_awaitUserInput();

#endif // MENU_H_INCLUDED
