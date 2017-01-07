/**
 * @file UserInputMenu.c
 * @brief handles the user input in menu mode
 * @author Marcel Gruessinger
 * @date 27.12.2016
 */
#include <stdio.h>
#include <stdbool.h>
#include <conio.h>
#include <ctype.h>
#include "../common_includes/ApplicationData.h"
#include "../common_includes/UserInputMenu.h"
#include "../common_includes/UserInputLogicMenu.h"

/**
 * @fn void userInput(applicationData* psAppData)
 * @brief handles the user input, when the application is in menu mode
 * @param applicationData* psAppData
 * @return void
 * @author Marcel Gruessinger
 * @date 27.12.2016
 */
void waitForUserInputInMenu(applicationData* psAppData)
{
	psAppData->bExitKeyPressed = false;
	
	while (!psAppData->bExitKeyPressed)
	{
		if(_kbhit()) 
		{
			int iChar = tolower(_getch());

			switch (iChar)
			{
				case '+':
					plusPressed(psAppData);
					break;
				case '-':
					minusPressed(psAppData);
					break;
				case 'f':
					fPressed(psAppData);
					break;
				case 'm':
					mPressed(psAppData);
					break;
				case 'n':
					nPressed(psAppData);
					break;
				case 'r':
					rPressed(psAppData);
					break;
				case 'e':
					ePressed(&psAppData->bExitKeyPressed);
					break;
				default:
					break;
			}
		}
	}
}