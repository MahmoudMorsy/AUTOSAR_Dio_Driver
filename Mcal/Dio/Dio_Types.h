 /*****************************************************************************
 * Module: Dio
 * File Name: Dio_Types.h
 * Description: Header file for Dio Module Types.
 * Created On: Dec 19, 2020
 * Author: Mahmoud MORSY
 *****************************************************************************/
#ifndef DIODRIVER_DIO_TYPES_H_
#define DIODRIVER_DIO_TYPES_H_

/******************************************************************************
 *                             Included Libraries                             *
 *****************************************************************************/
/* Standard AUTOSAR types */
#include "Std_Types.h"

/******************************************************************************
 *                              DIO Module Types                              *
 *****************************************************************************/
/* Numeric ID of a DIO channel */
typedef uint8 Dio_ChannelType;

/* Numeric ID of a DIO port corresponding to MCU Ports */
typedef uint32 Dio_PortType;

/* These are the possible levels a DIO channel can have (input or output) */
typedef uint8 Dio_LevelType;

/* Port Channels Type */
typedef uint32 Dio_PortLevelType;

/* Type for the definition of a channel group, which consists of several
 * adjoining channels within a port */
typedef struct
{
    /* Id of the Physically Corresponding Port in MCU */
    Dio_PortType PortId;
    uint32 Mask;
    uint32 Offset;
}Dio_ChannelGroupType;

/* Structure for Configuration Channel Data */
typedef struct
{
    Dio_ChannelType ChannelId;
    uint8 ChannelPhysicalId;
    /* Id of the Physically Corresponding Port in MCU */
    Dio_PortType PortId;
}Dio_ChannelData;


#endif /* DIODRIVER_DIO_TYPES_H_ */
/******************************************************************************
 *                                 End of File                                *
 *****************************************************************************/
