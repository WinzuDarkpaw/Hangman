/**

    ---- MAIN.c ----

Author: Nico Nowak
10.04.2021

**/


#include <stdio.h>
#include <stdlib.h>
#include "CUI.h"
#include "menu/menu.h"
#include "menu/menuInput.h"

int main()
{
    char userInput = '0';
    int menu_item_code = 0;

    // Initialize CUI (Console UI)
    cui_setUp();
    cui_createStdBorder();

    // Show the main menu.
    userInput = menu_show();

    menu_item_code = get_selected_menu_item(userInput);

    switch(menu_item_code)
    {
        case START_GAME:
        {
            // Start the game window.
        }
        case CLOSE_GAME:
        default:
        {
            return 0;
        }
    }

    return 0;
}
