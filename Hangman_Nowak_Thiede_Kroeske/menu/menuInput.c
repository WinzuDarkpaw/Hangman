/**

    ---- MENUINPUT.c ----

Author: Nico Nowak
10.04.2021

**/

#include <stdio.h>
#include "menuInput.h"

/// Uses the users input letter to get the menu item code.
/// 1 = Start game.
/// 2 = Close window.
int get_selected_menu_item(char userInput)
{
    switch(userInput)
    {
        case 'S':
        {
            return 1;
        }
        case 'E':
        default:
        {
            return 2;
        }
    }
}