/** @file
 *  @brief MAVLink comm protocol generated from scout_unit_status.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_SCOUT_UNIT_STATUS_H
#define MAVLINK_SCOUT_UNIT_STATUS_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_SCOUT_UNIT_STATUS.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#define MAVLINK_SCOUT_UNIT_STATUS_XML_HASH 1700163458839684427

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{43212, 135, 13, 13, 0, 0, 0}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_SCOUT_UNIT_STATUS

// ENUM DEFINITIONS


/** @brief  */
#ifndef HAVE_ENUM_SCOUT_ARMOR_STATE
#define HAVE_ENUM_SCOUT_ARMOR_STATE
typedef enum SCOUT_ARMOR_STATE
{
   SCOUT_ARMOR_STATE_NONE=0, /* No armor headset detected | */
   SCOUT_ARMOR_STATE_CONNECTED=1, /* Connected but uncalibrated | */
   SCOUT_ARMOR_STATE_CALIBRATING=2, /* Calibration in progress | */
   SCOUT_ARMOR_STATE_READY=3, /* Calibrated and tracking active | */
   SCOUT_ARMOR_STATE_ENUM_END=4, /*  | */
} SCOUT_ARMOR_STATE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_SCOUT_GPS_STATE
#define HAVE_ENUM_SCOUT_GPS_STATE
typedef enum SCOUT_GPS_STATE
{
   SCOUT_GPS_STATE_NONE=0, /* No GPS hardware detected | */
   SCOUT_GPS_STATE_ACQUIRING=1, /* GPS connected but no fix | */
   SCOUT_GPS_STATE_LOCKED=2, /* GPS fixed and valid | */
   SCOUT_GPS_STATE_ENUM_END=3, /*  | */
} SCOUT_GPS_STATE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_SCOUT_DRONE_STATE
#define HAVE_ENUM_SCOUT_DRONE_STATE
typedef enum SCOUT_DRONE_STATE
{
   SCOUT_DRONE_STATE_DISCONNECTED=0, /* No telemetry from drone | */
   SCOUT_DRONE_STATE_CONNECTED=1, /* Drone connected and disarmed | */
   SCOUT_DRONE_STATE_ARMED=2, /* Drone armed and ready | */
   SCOUT_DRONE_STATE_ENUM_END=3, /*  | */
} SCOUT_DRONE_STATE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_SCOUT_BUTTON_STATE
#define HAVE_ENUM_SCOUT_BUTTON_STATE
typedef enum SCOUT_BUTTON_STATE
{
   SCOUT_BUTTON_STATE_MODE_BIT=1, /* Flight Mode button is pressed | */
   SCOUT_BUTTON_STATE_TAKEOFF_RTL_BIT=2, /* Takeoff/RTL button is pressed | */
   SCOUT_BUTTON_STATE_TOGGLE_BIT=4, /* Scout toggle button is pressed | */
   SCOUT_BUTTON_STATE_RESCAN_BIT=8, /* Rescan button is pressed | */
   SCOUT_BUTTON_STATE_ENUM_END=9, /*  | */
} SCOUT_BUTTON_STATE;
#endif

// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 3
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 3
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_scout_unit_status.h"

// base include



#if MAVLINK_SCOUT_UNIT_STATUS_XML_HASH == MAVLINK_PRIMARY_XML_HASH
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_SCOUT_UNIT_STATUS}
# define MAVLINK_MESSAGE_NAMES {{ "SCOUT_UNIT_STATUS", 43212 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_SCOUT_UNIT_STATUS_H
