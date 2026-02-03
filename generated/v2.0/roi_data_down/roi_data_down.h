/** @file
 *  @brief MAVLink comm protocol generated from roi_data_down.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_ROI_DATA_DOWN_H
#define MAVLINK_ROI_DATA_DOWN_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_ROI_DATA_DOWN.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#define MAVLINK_ROI_DATA_DOWN_XML_HASH -130831223715913935

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{0, 50, 9, 9, 0, 0, 0}, {300, 217, 22, 22, 0, 0, 0}, {43211, 159, 29, 29, 0, 0, 0}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_ROI_DATA_DOWN

// ENUM DEFINITIONS



// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 3
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 3
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_roi_data_down.h"

// base include
#include "../standard/standard.h"


#if MAVLINK_ROI_DATA_DOWN_XML_HASH == MAVLINK_PRIMARY_XML_HASH
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_HEARTBEAT, MAVLINK_MESSAGE_INFO_PROTOCOL_VERSION, MAVLINK_MESSAGE_INFO_ROI_DATA_DOWN}
# define MAVLINK_MESSAGE_NAMES {{ "HEARTBEAT", 0 }, { "PROTOCOL_VERSION", 300 }, { "ROI_DATA_DOWN", 43211 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_ROI_DATA_DOWN_H
