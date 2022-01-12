// -----------------------------------------
// Global definitions
// ----------------------------------------

#ifndef __CONSTRAINTS_H
#define __CONSTRAINTS_H

// Include
#include "stdinc.h"
#include "DataTable.h"
#include "Global.h"

//Definitions
//
#define DUT_CURRENT_MIN			10		// в А
#define DUT_CURRENT_MAX			1250	// в А
#define DUT_CURRENT_DEF			160		// в А
//
#define CURRENT_SHUNT_MIN		10		// в мОм х1000
#define CURRENT_SHUNT_MAX		10000	// в мОм х1000
#define CURRENT_SHUNT_DEF		1000	// в мОм х1000
//
#define GAIN_COEFFICIENT_MIN	1
#define GAIN_COEFFICIENT_MAX	10000
//
#define GAIN_CURRENT_DEF		206
#define GAIN_VOLTAGE_DEF		1100


// Types
//
typedef struct __TableItemConstraint
{
	Int16U Min;
	Int16U Max;
	Int16U Default;
} TableItemConstraint;


// Variables
//
extern const TableItemConstraint NVConstraint[DATA_TABLE_NV_SIZE];
extern const TableItemConstraint VConstraint[DATA_TABLE_WP_START - DATA_TABLE_WR_START];


#endif // __CONSTRAINTS_H
