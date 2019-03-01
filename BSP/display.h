/*
		Display.h file is a Board Support Package file.
    Copyright (C) 2018 Nima Mohammadi

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#ifndef __DISPLAY_H
#define __DISPLAY_H

#include "../lib/ssd1306.h"

#ifdef __cplusplus
extern "C" {
#endif

#include "stm32f10x.h"

typedef enum {
	DISPLAY_BLUE_COLOR = 0x0 ,
	DISPLAY_YELLOW_COLOR = 0x01
} DisplayPixel_t;

typedef struct {
	char *header;
	char *line_one;
	char *line_two;
	char *line_three;
	uint8_t pageIndex;
} PageContainer_t;

void InitDisplay(void);
void ClearDisplay(void);

/* Print String Message in OLED , In this function Before printing , display will be cleared */
void WriteDisplayString(char *data , DisplayPixel_t color , uint8_t x , uint8_t y);
/* Print String Message in OLED , Display wont be cleared */
void WriteDisplayNoClear(char *data , DisplayPixel_t color , uint8_t x , uint8_t y);

/* Print a page that contains three line and header */
void DrawPage(PageContainer_t *container);

/* Print a three line page */
void DisplayThreeLinePage(char *line_one , char *line_two , char *line_three);
/* print a four layer page */
void DisplayFourLinePage(char *line_one , char *line_two , char *line_three , char *line_four);

#ifdef __cplusplus
}
#endif

#endif
