 /*****************************************************************************
 * Module: Dio
 * File Name: Dio.h
 * Description: Header file for Dio Module.
 * Created On: Dec 19, 2020
 * Author: Mahmoud MORSY
 *****************************************************************************/
#ifndef DIO_H_
#define DIO_H_

/******************************************************************************
 *                             Included Libraries                             *
 *****************************************************************************/

/******************************************************************************
 *                             AUTOSAR Module Info                            *
 *****************************************************************************/
/* AUTOSAR Dio Module's Vendor ID */
#define DIO_VENDOR_ID                                                  (0x0080)
/* Dio Module Id */
#define DIO_MODULE_ID                                                    (120U)
/* Dio Instance Id */
#define DIO_INSTANCE_ID                                                    (0U)

/* Module Version 1.0.0 */
#define DIO_SW_MAJOR_VERSION                                               (1U)
#define DIO_SW_MINOR_VERSION                                               (0U)
#define DIO_SW_PATCH_VERSION                                               (0U)

/* AUTOSAR Version 4.3.1 */
#define DIO_AR_RELEASE_MAJOR_VERSION                                       (4U)
#define DIO_AR_RELEASE_MINOR_VERSION                                       (3U)
#define DIO_AR_RELEASE_PATCH_VERSION                                       (1U)


/******************************************************************************
 *                             API Service Id Macros                          *
 *****************************************************************************/
/* Service ID for Dio_ReadChannel API */
#define DIO_READ_CHANNEL_SID                                         (uint8)0x0
/* Service ID for Dio_WriteChannel API */
#define DIO_WRITE_CHANNEL_SID                                        (uint8)0x1
/* Service ID for Dio_ReadPort API */
#define DIO_READ_PORT_SID                                            (uint8)0x2
/* Service ID for Dio_WritePort API */
#define DIO_WRITE_PORT_SID                                           (uint8)0x3
/* Service ID for Dio_ReadChannelGroup API */
#define DIO_READ_CHANNEL_GROUP_SID                                   (uint8)0x4
/* Service ID for Dio_WriteChannelGroup API */
#define DIO_WRITE_CHANNEL_GROUP_SID                                  (uint8)0x5
/* Service ID for Dio_FlipChannel API */
#define DIO_FLIP_CHANNEL_SID                                        (uint8)0x11
/* Service ID for Dio_GetVersionInfo API */
#define DIO_VERSION_INFO_SID                                        (uint8)0x12


/******************************************************************************
 *                          Public Functions Prototypes                       *
 *****************************************************************************/
/******************************************************************************
* Service Name: Dio_ReadChannel
* Service ID[hex]: 0x00
* Sync/Async: Synchronous
* Reentrancy: Reentrant
* Parameters (in): ChannelId - ID of DIO Channel
* Parameters (inout): None
* Parameters (out): None
* Return value: Dio_LevelType - The Physical level of the requested DIO Channel
* Description: Returns the value of the specified DIO channel.
******************************************************************************/
Dio_LevelType Dio_ReadChannel(
        Dio_ChannelType ChannelId
);

/******************************************************************************
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
******************************************************************************/
void Dio_WriteChannel(
        Dio_ChannelType ChannelId,
        Dio_LevelType Level
);


/******************************************************************************
* Service Name: Dio_ReadPort
* Service ID[hex]: 0x02
* Sync/Async: Synchronous
* Reentrancy: Reentrant
* Parameters (in): PortId - ID of DIO Port
* Parameters (inout): None
* Parameters (out): None
* Return value: Dio_PortLevelType - Level of all channels of that port
* Description: Returns the level of all channels of that port.
******************************************************************************/
Dio_PortLevelType Dio_ReadPort(
        Dio_PortType PortId
);


/******************************************************************************
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
******************************************************************************/
void Dio_WritePort(
        Dio_PortType PortId,
        Dio_PortLevelType Level
);


/******************************************************************************
* Service Name: Dio_ReadChannelGroup
* Service ID[hex]: 0x04
* Sync/Async: Synchronous
* Reentrancy: Reentrant
* Parameters (in): ChannelGroupIdPtr - Pointer to ChannelGroup
* Parameters (inout): None
* Parameters (out): None
* Return value: Dio_PortLevelType - Level of a subset of the adjoining bits of a port
* Description: This Service reads a subset of the adjoining bits of a port.
******************************************************************************/
Dio_PortLevelType Dio_ReadChannelGroup(
    const Dio_ChannelGroupType* ChannelGroupIdPtr
);


/******************************************************************************
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
******************************************************************************/
void Dio_WriteChannelGroup(
        const Dio_ChannelGroupType* ChannelGroupIdPtr,
        Dio_PortLevelType Level
);


/******************************************************************************
* Service Name: Dio_GetVersionInfo
* Service ID[hex]: 0x12
* Sync/Async: Synchronous
* Reentrancy: Reentrant
* Parameters (in): None
* Parameters (inout): None
* Parameters (out): VersionInfo - Pointer to version information of this module
* Return value: None
* Description: Service to get the version information of this module.
******************************************************************************/
#if (DIO_VERSION_INFO_API == STD_ON)
void Dio_GetVersionInfo(
        Std_VersionInfoType* VersionInfo
);
#endif


/******************************************************************************
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
******************************************************************************/
#if (DIO_FLIP_CHANNEL_API == STD_ON)
Dio_LevelType Dio_FlipChannel(
        Dio_ChannelType ChannelId
);
#endif
#endif /* DIO_H_ */
