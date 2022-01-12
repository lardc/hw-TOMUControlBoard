#ifndef __INTERRUPTS_H
#define __INTERRUPTS_H

#include "stdinc.h"

// Variables
//
extern volatile bool Overflow90;
extern volatile bool Overflow10;

// Functions
//
void INT_OverflowEnable(bool Enable);

#endif // __INTERRUPTS_H
