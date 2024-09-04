#ifndef __MENU_H
#define __MENU_H

#include "flash_if.h"
#include "ymodem.h"


extern uint8_t aFileName[FILE_NAME_LENGTH];


typedef  void (*pFunction)(void);

void Main_Menu(void);

#endif  /* __MENU_H */

