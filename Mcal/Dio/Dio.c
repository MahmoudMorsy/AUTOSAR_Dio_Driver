 /*****************************************************************************
 * Module: Dio
 * File Name: Dio.c
 * Description: Driver Core Implementation for Dio Module.
 * Created On: Dec 19, 2020
 * Author: Mahmoud MORSY
 *****************************************************************************/

/******************************************************************************
 *                             Included Libraries                             *
 *****************************************************************************/
/* Dio Module Header file */
#include "Dio.h"

/*******************************************************************************
 *                          Public Functions Implementations                   *
 *******************************************************************************/
/*******************************************************************************
* Service Name: Dio_ReadChannel
* Service ID[hex]: 0x00
* Sync/Async: Synchronous
* Reentrancy: Reentrant
* Parameters (in): ChannelId - ID of DIO Channel
* Parameters (inout): None
* Parameters (out): None
* Return value: Dio_LevelType - The Physical level of the requested DIO Channel
* Description: Returns the value of the specified DIO channel.
********************************************************************************/
Dio_LevelType Dio_ReadChannel(
        Dio_ChannelType ChannelId
)
{

}


/*******************************************************************************
* Service Name: Dio_WriteChannel
* Service ID[hex]: 0x01
* Sync/Async: Synchronous
* Reentrancy: Reentrant
* Parameters (in): ChannelId - ID of DIO Channel
* Parameters (in): Level - Value to be written
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Service to set a level of a channel.
********************************************************************************/
void Dio_WriteChannel(
        Dio_ChannelType ChannelId,
        Dio_LevelType Level
)
{

}


/*******************************************************************************
* Service Name: Dio_ReadPort
* Service ID[hex]: 0x02
* Sync/Async: Synchronous
* Reentrancy: Reentrant
* Parameters (in): PortId - ID of DIO Port
* Parameters (inout): None
* Parameters (out): None
* Return value: Dio_PortLevelType - Level of all channels of that port
* Description: Returns the level of all channels of that port.
********************************************************************************/
Dio_PortLevelType Dio_ReadPort(
        Dio_PortType PortId
)
{

}


/*******************************************************************************
* Service Name: Dio_WritePort
* Service ID[hex]: 0x03
* Sync/Async: Synchronous
* Reentrancy: Reentrant
* Parameters (in): PortId - ID of DIO Port
* Parameters (in): Level - Value to be written
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Service to set a level of a DIO Port.
********************************************************************************/
void Dio_WritePort(
        Dio_PortType PortId,
        Dio_PortLevelType Level
)
{

}


/*******************************************************************************
* Service Name: Dio_ReadChannelGroup
* Service ID[hex]: 0x04
* Sync/Async: Synchronous
* Reentrancy: Reentrant
* Parameters (in): ChannelGroupIdPtr - Pointer to ChannelGroup
* Parameters (inout): None
* Parameters (out): None
* Return value: Dio_PortLevelType - Level of a subset of the adjoining bits of a port
* Description: This Service reads a subset of the adjoining bits of a port.
********************************************************************************/
Dio_PortLevelType Dio_ReadChannelGroup(
    const Dio_ChannelGroupType* ChannelGroupIdPtr
)
{

}


/*******************************************************************************
* Service Name: Dio_WriteChannelGroup
* Service ID[hex]: 0x05
* Sync/Async: Synchronous
* Reentrancy: Reentrant
* Parameters (in): ChannelGroupIdPtr - Pointer to ChannelGroup
* Parameters (in): Level - Value to be written
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Service to set a subset of the adjoining bits of a port to a
*              specified level.
********************************************************************************/
void Dio_WriteChannelGroup(
        const Dio_ChannelGroupType* ChannelGroupIdPtr,
        Dio_PortLevelType Level
)
{

}


/*******************************************************************************
* Service Name: Dio_GetVersionInfo
* Service ID[hex]: 0x12
* Sync/Async: Synchronous
* Reentrancy: Reentrant
* Parameters (in): None
* Parameters (inout): None
* Parameters (out): VersionInfo - Pointer to version information of this module
* Return value: None
* Description: Service to get the version information of this module.
********************************************************************************/
#if (DIO_VERSION_INFO_API == STD_ON)
void Dio_GetVersionInfo(
        Std_VersionInfoType* VersionInfo
)
{

}
#endif


/*******************************************************************************
* Service Name: Dio_FlipChannel
* Service ID[hex]: 0x11
* Sync/Async: Synchronous
* Reentrancy: Reentrant
* Parameters (in): ChannelId - ID of DIO Channel
* Parameters (inout): None
* Parameters (out): None
* Return value: Dio_LevelType -  The physical level of the corresponding Pin
* Description: Service to flip (change from 1 to 0 or from 0 to 1) the level of
*              a channel and return the level of the channel after flip.
********************************************************************************/
#if (DIO_FLIP_CHANNEL_API == STD_ON)
Dio_LevelType Dio_FlipChannel(
        Dio_ChannelType ChannelId
)
{

}
#endif

/******************************************************************************
 *                                 End of File                                *
 ******************************************************************************/
