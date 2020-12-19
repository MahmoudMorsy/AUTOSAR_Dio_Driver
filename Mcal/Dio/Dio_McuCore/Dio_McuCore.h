 /*****************************************************************************
 * Module: Dio
 * File Name: Dio_McuCore.h
 * Description: Header file for Core functionality which depends on the specific
 *              microcontroller TM4C123GH6PM for Autosar Dio Module.
 * Created On: Dec 19, 2020
 * Author: Mahmoud MORSY
 *****************************************************************************/
#ifndef DIODRIVER_DIOMCUCORE_DIO_MCUCORE_H_
#define DIODRIVER_DIOMCUCORE_DIO_MCUCORE_H_

/******************************************************************************
 *                             Included Libraries                             *
 *****************************************************************************/
/* Standard AUTOSAR types */
#include "Std_Types.h"
/* Commonly used Macros */
#include "Common_Macros.h"

/******************************************************************************
 *                              Macros & Defines                              *
 *****************************************************************************/
/* Total Number of Microcontroller Port Registers */
#define DIO_CORE_NUM_OF_PORTS                                              (6u)
/* Total Number of Microcontroller Port Pins */
#define DIO_CORE_NUM_OF_PINS                                              (32u)
/* GPIO PORT A Register Address */
#define DIO_CORE_GPIOA_DATA                   *((volatile uint32*)(0x400043FC))
/* GPIO PORT B Register Address */
#define DIO_CORE_GPIOB_DATA                   *((volatile uint32*)(0x400053FC))
/* GPIO PORT C Register Address */
#define DIO_CORE_GPIOC_DATA                   *((volatile uint32*)(0x400063FC))
/* GPIO PORT D Register Address */
#define DIO_CORE_GPIOD_DATA                   *((volatile uint32*)(0x400073FC))
/* GPIO PORT E Register Address */
#define DIO_CORE_GPIOE_DATA                   *((volatile uint32*)(0x400243FC))
/* GPIO PORT F Register Address */
#define DIO_CORE_GPIOF_DATA                   *((volatile uint32*)(0x400253FC))


/******************************************************************************
 *                          Public Functions Prototypes                       *
 *****************************************************************************/
/* Inline function for Reading a Specific Pin */
inline uint8 DioCore_ReadPin(uint32 PortNumber, uint8 PinNumber);

/* Inline function for Writing a Specific Pin Value */
inline void DioCore_WritePin(uint32 PortNumber, uint8 PinNumber, uint8 PinValue);

/* Inline function for Reading a Specific Port */
inline uint32 DioCore_ReadPort(uint32 PortNumber);

/* Inline function for Writing a Specific Port Value */
inline void DioCore_WritePort(uint32 PortNumber, uint32 PortValue);

#endif /* DIODRIVER_DIOMCUCORE_DIO_MCUCORE_H_ */
/******************************************************************************
 *                                 End of File                                *
 ******************************************************************************/
