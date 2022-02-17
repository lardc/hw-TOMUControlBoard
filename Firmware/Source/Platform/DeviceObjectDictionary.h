﻿#ifndef __DEV_OBJ_DIC_H
#define __DEV_OBJ_DIC_H

// Команды
// 
#define ACT_ENABLE_POWER				1	// Переход в состояние ожидания
#define ACT_DISABLE_POWER				2	// Отключение блока
#define ACT_FAULT_CLEAR					3	// Очистка fault
#define ACT_WARNING_CLEAR				4	// Очистка warning
#define ACT_RESET_DEVICE				5	// Перезапуск процессора
//
// Команды отладки
#define ACT_DBG_COMM					10	// Проверка выхода COMM
#define ACT_DBG_LAMP					11	// Проверка выхода LAMP
#define ACT_DBG_FAN						12	// Проверка выхода FAN
#define ACT_DBG_GATE_CONTROL			13	// Проверка управления GATE
#define ACT_DBG_SYNC					14	// Проверка выхода синхронизации
#define ACT_DBG_VSO						15	// Измерение напряжения заряда в регистр REG_DBG_VSO_VALUE
#define ACT_DBG_I_DUT					16	// Измерение тока DUT в регистр REG_DBG_I_DUT_VALUE
#define ACT_DBG_VSO_RAW					17	// Измерение сырого напряжения заряда в регистр REG_DBG_ADC_RAW
#define ACT_DBG_I_DUT_RAW				18	// Измерение сырого тока DUT в регистр REG_DBG_ADC_RAW
#define	ACT_DBG_TOCU_CTRL				19	// Передача уставки в TOCU
#define ACT_DBG_TOCU_DEFAULT			20	// Сброс всех регистров TOCU
#define ACT_DBG_TOCU_FAN				21	// Проверка вентилятора TOCU
#define ACT_DBG_TOCU_CONTACTOR			22	// Проверка контактора TOCU
#define ACT_DBG_TOCU_PS					23	// Проверка управления БП 300В TOCU
#define ACT_DBG_TOCU_CURRENT			24	// Проверка побитового задания тока в TOCU
//
#define ACT_MEASURE_START				100	// Запуск измерения
#define ACT_MEASURE_STOP				101	// Останов измерения
//
#define ACT_SAVE_TO_ROM					200	// Сохранение пользовательских данных во FLASH процессора
#define ACT_RESTORE_FROM_ROM			201	// Восстановление данных из FLASH
#define ACT_RESET_TO_DEFAULT			202	// Сброс DataTable в состояние по умолчанию
//
#define ACT_BOOT_LOADER_REQUEST			320	// Перезапуск процессора с целью перепрограммирования
//
// -----------------------------------------------

// Регистры
// 
// Сохраняемые регистры
// 0 - 2
#define REG_CURRENT_SHUNT				3	// Сопротивление шунта (в мОм) (х1000)
#define REG_CURRENT_GAIN				4	// Коэффициент усиления аналогового тракта измерения тока (x100)
#define REG_P0_I_DUT					5	// Коэффициент P0 измеренного значения тока (в А)
#define REG_P1_I_DUT					6	// Коэффициент P1 измеренного значения тока (х1000)
#define REG_P2_I_DUT					7	// Коэффициент P2 измеренного значения тока (x1e6)
// 8 - 11
#define REG_VOLTAGE_GAIN				12	// Коэффициент деления аналогового тракта измерения напряжения (x10)
#define REG_P0_U_VSO					13	// Коэффициент P0 измеренного значения напряжения заряда батарей (в В)
#define REG_P1_U_VSO					14	// Коэффициент P1 измеренного значения напряжения заряда батарей (x1000)
#define REG_P2_U_VSO					15	// Коэффициент P2 измеренного значения напряжения заряда батарей (x1е6)
// 16
#define REG_P0_Counter10Percent			17	// Коэффициент P0 измеренного значения счетчика 10% (в нс x10)
#define REG_P1_Counter10Percent			18	// Коэффициент P1 измеренного значения счетчика 10% (x1000)
#define REG_P2_Counter10Percent			19	// Коэффициент P2 измеренного значения счетчика 10% (x1е6)
// 20
#define REG_P0_Counter90Percent			21	// Коэффициент P0 измеренного значения счетчика 90% (в нс x10)
#define REG_P1_Counter90Percent			22	// Коэффициент P1 измеренного значения счетчика 90% (x1000)
#define REG_P2_Counter90Percent			23	// Коэффициент P2 измеренного значения счетчика 90% (x1е6)
// 24 - 29
#define REG_VSO_MEAS_OFFSET				30	// Офсет на входе АЦП при измерении Vso [bit]
#define REG_I_MEAS_OFFSET				31	// Офсет на входе АЦП при измерении I [bit]
// 32 - 127

// Несохраняемы регистры чтения-записи
#define REG_CURRENT_VALUE				128	// Значение задания тока [А]
//
#define REG_DBG							150	// Отладочный регистр

// Регистры только чтение
#define REG_DEV_STATE					192	// Регистр состояния
#define REG_FAULT_REASON				193	// Регистр Fault
#define REG_DISABLE_REASON				194	// Регистр Disable
#define REG_WARNING						195	// Регистр Warning
#define REG_PROBLEM						196	// Регистр Problem
#define REG_TEST_FINISHED				197
//
#define REG_DBG_VSO_VALUE				200	// Напряжение на батарее (в В)
#define REG_DBG_I_DUT_VALUE				201	// Ток на DUT (в А)
#define REG_DBG_PRE_I_DUT_VALUE			202	// Предварительный ток на DUT (в А)
#define REG_DBG_ADC_RAW					203	// Измеренные сырые значения по каналу напряжения и каналу тока (в тиках)
//
#define REG_MEAS_CURRENT_VALUE			250	// Измеренное значение тока [А]
#define	REG_MEAS_TIME_DELAY				251	// Измеренное значение задержки включения [нс]
#define	REG_MEAS_TIME_ON				252	// Измеренное значение времени включения [нс]
//
// -----------------------------------------------
#define REG_FWINFO_SLAVE_NID			256	// Device CAN slave node ID
#define REG_FWINFO_MASTER_NID			257	// Device CAN master node ID (if presented)
// 258 - 259
#define REG_FWINFO_STR_LEN				260	// Length of the information string record
#define REG_FWINFO_STR_BEGIN			261	// Begining of the information string record
// -----------------------------

//  ENDPOINTS
//
// -----------------------------------------------


// Operation results
//
#define OPRESULT_NONE					0	// No information or not finished
#define OPRESULT_OK						1	// Operation was successful
#define OPRESULT_FAIL					2	// Operation failed

//  Fault and disable codes
// 
#define DF_NONE							0
#define DF_BATTERY						1	// Проблема заряда батареи

// Problem
//
#define PROBLEM_NONE					0
#define PROBLEM_NO_CTRL_NO_PWR			1	// Отсутствие тока управления и силового тока
#define PROBLEM_NO_PWR					2	// Отсутствие силового тока
#define PROBLEM_SHORT					3	// КЗ на выходе
#define PROBLEM_NO_POT_SIGNAL			4	// Нет сигнала с потенциальной линии
#define PROBLEM_OVERFLOW90				5	// Переполнение счётчика уровня 90%
#define PROBLEM_OVERFLOW10				6	// Переполнение счётчика уровня 10%

//  Warning
// 
#define WARNING_NONE					0
#define WARNING_I_OUT_OF_RANGE			1	// Измеренное значение тока вне диапазона

//  User Errors
// 
#define ERR_NONE						0	//  Ошибок нет
#define ERR_CONFIGURATION_LOCKED		1	//  Устройство защищено от записи
#define ERR_OPERATION_BLOCKED			2	//  Операция не может быть выполнена в текущем состоянии устройства
#define ERR_DEVICE_NOT_READY			3	//  Устройство не готово для смены состояния
#define ERR_WRONG_PWD					4	//  Неправильный ключ

//  Password to unlock non-volatile area for write
// 
#define ENABLE_LOCKING					FALSE


typedef enum __DeviceState
{
	// Основные состояния
	DS_None							= 0,	// Блок в неопределенном состоянии
	DS_Fault						= 1,	// Блок в состоянии Fault
	DS_Disabled						= 2,	// Блок в состоянии Disabled
	DS_Charging						= 3,	// Блок в процессе заряда батареи
	DS_Ready						= 4,	// Блок в состоянии готовности
	DS_InProcess					= 5,	// Блок в процессе формирования импульса
} DeviceState;


#endif //  __DEV_OBJ_DIC_H
