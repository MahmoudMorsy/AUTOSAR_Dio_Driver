 /******************************************************************************
 * Module: Dio
 * File Name: Dio_McuCore.c
 * Description: Implementation file for Core functionality which depends on the
 *              specific micro-controller TM4C123GH6PM for Autosar Dio Module.
 * Created On: Dec 19, 2020
 * Author: Mahmoud MORSY
 ******************************************************************************/
#include "Dio_McuCore.h"

/******************************************************************************
 *                              Global Variables                              *
 ******************************************************************************/
/* Array of Pointers to Ports Data Registers */
volatile uint32* DioCore_PortsDataArray[DIO_CORE_NUM_OF_PORTS] =
{
 /* PORT A Data Register */
 &DIO_CORE_GPIOA_DATA,
 /* PORT B Data Register */
 &DIO_CORE_GPIOB_DATA,
 /* PORT C Data Register */
 &DIO_CORE_GPIOC_DATA,
 /* PORT D Data Register */
 &DIO_CORE_GPIOD_DATA,
 /* PORT E Data Register */
 &DIO_CORE_GPIOE_DATA,
 /* PORT F Data Register */
 &DIO_CORE_GPIOF_DATA
};

/*******************************************************************************
 *                          Public Functions Implementations                   *
 *******************************************************************************/
/* Inline function for Reading a Specific Pin */
inline uint8 DioCore_ReadPin(uint32 PortNumber, uint8 PinNumber)
{
    /* Variables Declarations */
    uint8 Local_ReturnValue = STD_LOW;

    /* If Parameters are valid */
    if ((PortNumber < DIO_CORE_NUM_OF_PORTS) && (PinNumber < DIO_CORE_NUM_OF_PINS))
    {
        Local_ReturnValue = GET_BIT(*(DioCore_PortsDataArray[PortNumber]), PinNumber);
    }
    /* Return Low by default in case of errors */
    else
    {
        /* Do nothing */
    }

    return Local_ReturnValue;
}

/* Inline function for Writing a Specific Pin Value */
inline void DioCore_WritePin(uint32 PortNumber, uint8 PinNumber, uint8 PinValue)
{
    /* If Parameters are valid */
    if ((PortNumber < DIO_CORE_NUM_OF_PORTS) && (PinNumber < DIO_CORE_NUM_OF_PINS))
    {
        if (STD_HIGH == PinValue)
        {
            SET_BIT(*(DioCore_PortsDataArray[PortNumber]), PinNumber);
        }
        else
        {
            CLEAR_BIT(*(DioCore_PortsDataArray[PortNumber]), PinNumber);
        }
    }
    else
    {
        /* Do Nothing */
    }
}

/* Inline function for Reading a Specific Port */
inline uint32 DioCore_ReadPort(uint32 PortNumber)
{
    /* Variables Declarations */
    uint32 Local_ReturnValue = (uint32)0;

    /* If Parameter is valid */
    if (PortNumber < DIO_CORE_NUM_OF_PORTS)
    {
        Local_ReturnValue = *DioCore_PortsDataArray[PortNumber];
    }
    else
    {
        /* Do Nothing */
    }

    return Local_ReturnValue;
}

/* Inline function for Writing a Specific Port Value */
inline void DioCore_WritePort(uint32 PortNumber, uint32 PortValue)
{
    /* If Parameter is Valid */
    if (PortNumber < DIO_CORE_NUM_OF_PORTS)
    {
        *DioCore_PortsDataArray[PortNumber] = PortValue;
    }
    else
    {
        /* Do Nothing */
    }
}

/******************************************************************************
 *                                 End of File                                *
 ******************************************************************************/
