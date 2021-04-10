/**

    ---- MAIN.c ----

Author: Nico Nowak
10.04.2021

**/


#include <stdio.h>
#include <stdlib.h>
#include "CUI.h"
#include "menu.h"

int main()
{
    char userInput = '0';

    // Initialize CUI (Console UI)
    cui_setUp();
    cui_createStdBorder();

    // Show the main menu.
    userInput = menu_show();

    return 0;
}
