#ifndef __EPD_7IN5_H_
#define __EPD_7IN5_H_

#include "DEV_Config.h"

// Display resolution
#define EPD_7IN5_WIDTH 640
#define EPD_7IN5_HEIGHT 384

void EPD_7IN5_Init(void);
void EPD_7IN5_Clear(void);
void EPD_7IN5_Display(UBYTE *Image);
void EPD_7IN5_Sleep(void);

#endif
