#pragma once
// MESSAGE SCOUT_UNIT_STATUS PACKING

#define MAVLINK_MSG_ID_SCOUT_UNIT_STATUS 43212


typedef struct __mavlink_scout_unit_status_t {
 uint64_t timestamp; /*<  time since system start (microseconds)*/
 uint8_t armor_status; /*<  Armor status of the scout unit*/
 uint8_t gps_status; /*<  GPS status of the scout unit*/
 uint8_t drone_status; /*<  Drone status*/
 uint8_t buttons; /*<  Bitmask of all buttons*/
 uint8_t custom_field; /*<  Custom field for future use*/
} mavlink_scout_unit_status_t;

#define MAVLINK_MSG_ID_SCOUT_UNIT_STATUS_LEN 13
#define MAVLINK_MSG_ID_SCOUT_UNIT_STATUS_MIN_LEN 13
#define MAVLINK_MSG_ID_43212_LEN 13
#define MAVLINK_MSG_ID_43212_MIN_LEN 13

#define MAVLINK_MSG_ID_SCOUT_UNIT_STATUS_CRC 135
#define MAVLINK_MSG_ID_43212_CRC 135



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SCOUT_UNIT_STATUS { \
    43212, \
    "SCOUT_UNIT_STATUS", \
    6, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_scout_unit_status_t, timestamp) }, \
         { "armor_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_scout_unit_status_t, armor_status) }, \
         { "gps_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_scout_unit_status_t, gps_status) }, \
         { "drone_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_scout_unit_status_t, drone_status) }, \
         { "buttons", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_scout_unit_status_t, buttons) }, \
         { "custom_field", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_scout_unit_status_t, custom_field) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SCOUT_UNIT_STATUS { \
    "SCOUT_UNIT_STATUS", \
    6, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_scout_unit_status_t, timestamp) }, \
         { "armor_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_scout_unit_status_t, armor_status) }, \
         { "gps_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_scout_unit_status_t, gps_status) }, \
         { "drone_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_scout_unit_status_t, drone_status) }, \
         { "buttons", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_scout_unit_status_t, buttons) }, \
         { "custom_field", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_scout_unit_status_t, custom_field) }, \
         } \
}
#endif

/**
 * @brief Pack a scout_unit_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp  time since system start (microseconds)
 * @param armor_status  Armor status of the scout unit
 * @param gps_status  GPS status of the scout unit
 * @param drone_status  Drone status
 * @param buttons  Bitmask of all buttons
 * @param custom_field  Custom field for future use
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_scout_unit_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t timestamp, uint8_t armor_status, uint8_t gps_status, uint8_t drone_status, uint8_t buttons, uint8_t custom_field)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SCOUT_UNIT_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint8_t(buf, 8, armor_status);
    _mav_put_uint8_t(buf, 9, gps_status);
    _mav_put_uint8_t(buf, 10, drone_status);
    _mav_put_uint8_t(buf, 11, buttons);
    _mav_put_uint8_t(buf, 12, custom_field);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SCOUT_UNIT_STATUS_LEN);
#else
    mavlink_scout_unit_status_t packet;
    packet.timestamp = timestamp;
    packet.armor_status = armor_status;
    packet.gps_status = gps_status;
    packet.drone_status = drone_status;
    packet.buttons = buttons;
    packet.custom_field = custom_field;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SCOUT_UNIT_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SCOUT_UNIT_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SCOUT_UNIT_STATUS_MIN_LEN, MAVLINK_MSG_ID_SCOUT_UNIT_STATUS_LEN, MAVLINK_MSG_ID_SCOUT_UNIT_STATUS_CRC);
}

/**
 * @brief Pack a scout_unit_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp  time since system start (microseconds)
 * @param armor_status  Armor status of the scout unit
 * @param gps_status  GPS status of the scout unit
 * @param drone_status  Drone status
 * @param buttons  Bitmask of all buttons
 * @param custom_field  Custom field for future use
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_scout_unit_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t timestamp,uint8_t armor_status,uint8_t gps_status,uint8_t drone_status,uint8_t buttons,uint8_t custom_field)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SCOUT_UNIT_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint8_t(buf, 8, armor_status);
    _mav_put_uint8_t(buf, 9, gps_status);
    _mav_put_uint8_t(buf, 10, drone_status);
    _mav_put_uint8_t(buf, 11, buttons);
    _mav_put_uint8_t(buf, 12, custom_field);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SCOUT_UNIT_STATUS_LEN);
#else
    mavlink_scout_unit_status_t packet;
    packet.timestamp = timestamp;
    packet.armor_status = armor_status;
    packet.gps_status = gps_status;
    packet.drone_status = drone_status;
    packet.buttons = buttons;
    packet.custom_field = custom_field;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SCOUT_UNIT_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SCOUT_UNIT_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SCOUT_UNIT_STATUS_MIN_LEN, MAVLINK_MSG_ID_SCOUT_UNIT_STATUS_LEN, MAVLINK_MSG_ID_SCOUT_UNIT_STATUS_CRC);
}

/**
 * @brief Encode a scout_unit_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param scout_unit_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_scout_unit_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_scout_unit_status_t* scout_unit_status)
{
    return mavlink_msg_scout_unit_status_pack(system_id, component_id, msg, scout_unit_status->timestamp, scout_unit_status->armor_status, scout_unit_status->gps_status, scout_unit_status->drone_status, scout_unit_status->buttons, scout_unit_status->custom_field);
}

/**
 * @brief Encode a scout_unit_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param scout_unit_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_scout_unit_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_scout_unit_status_t* scout_unit_status)
{
    return mavlink_msg_scout_unit_status_pack_chan(system_id, component_id, chan, msg, scout_unit_status->timestamp, scout_unit_status->armor_status, scout_unit_status->gps_status, scout_unit_status->drone_status, scout_unit_status->buttons, scout_unit_status->custom_field);
}

/**
 * @brief Send a scout_unit_status message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp  time since system start (microseconds)
 * @param armor_status  Armor status of the scout unit
 * @param gps_status  GPS status of the scout unit
 * @param drone_status  Drone status
 * @param buttons  Bitmask of all buttons
 * @param custom_field  Custom field for future use
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_scout_unit_status_send(mavlink_channel_t chan, uint64_t timestamp, uint8_t armor_status, uint8_t gps_status, uint8_t drone_status, uint8_t buttons, uint8_t custom_field)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SCOUT_UNIT_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint8_t(buf, 8, armor_status);
    _mav_put_uint8_t(buf, 9, gps_status);
    _mav_put_uint8_t(buf, 10, drone_status);
    _mav_put_uint8_t(buf, 11, buttons);
    _mav_put_uint8_t(buf, 12, custom_field);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SCOUT_UNIT_STATUS, buf, MAVLINK_MSG_ID_SCOUT_UNIT_STATUS_MIN_LEN, MAVLINK_MSG_ID_SCOUT_UNIT_STATUS_LEN, MAVLINK_MSG_ID_SCOUT_UNIT_STATUS_CRC);
#else
    mavlink_scout_unit_status_t packet;
    packet.timestamp = timestamp;
    packet.armor_status = armor_status;
    packet.gps_status = gps_status;
    packet.drone_status = drone_status;
    packet.buttons = buttons;
    packet.custom_field = custom_field;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SCOUT_UNIT_STATUS, (const char *)&packet, MAVLINK_MSG_ID_SCOUT_UNIT_STATUS_MIN_LEN, MAVLINK_MSG_ID_SCOUT_UNIT_STATUS_LEN, MAVLINK_MSG_ID_SCOUT_UNIT_STATUS_CRC);
#endif
}

/**
 * @brief Send a scout_unit_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_scout_unit_status_send_struct(mavlink_channel_t chan, const mavlink_scout_unit_status_t* scout_unit_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_scout_unit_status_send(chan, scout_unit_status->timestamp, scout_unit_status->armor_status, scout_unit_status->gps_status, scout_unit_status->drone_status, scout_unit_status->buttons, scout_unit_status->custom_field);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SCOUT_UNIT_STATUS, (const char *)scout_unit_status, MAVLINK_MSG_ID_SCOUT_UNIT_STATUS_MIN_LEN, MAVLINK_MSG_ID_SCOUT_UNIT_STATUS_LEN, MAVLINK_MSG_ID_SCOUT_UNIT_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_SCOUT_UNIT_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_scout_unit_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp, uint8_t armor_status, uint8_t gps_status, uint8_t drone_status, uint8_t buttons, uint8_t custom_field)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint8_t(buf, 8, armor_status);
    _mav_put_uint8_t(buf, 9, gps_status);
    _mav_put_uint8_t(buf, 10, drone_status);
    _mav_put_uint8_t(buf, 11, buttons);
    _mav_put_uint8_t(buf, 12, custom_field);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SCOUT_UNIT_STATUS, buf, MAVLINK_MSG_ID_SCOUT_UNIT_STATUS_MIN_LEN, MAVLINK_MSG_ID_SCOUT_UNIT_STATUS_LEN, MAVLINK_MSG_ID_SCOUT_UNIT_STATUS_CRC);
#else
    mavlink_scout_unit_status_t *packet = (mavlink_scout_unit_status_t *)msgbuf;
    packet->timestamp = timestamp;
    packet->armor_status = armor_status;
    packet->gps_status = gps_status;
    packet->drone_status = drone_status;
    packet->buttons = buttons;
    packet->custom_field = custom_field;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SCOUT_UNIT_STATUS, (const char *)packet, MAVLINK_MSG_ID_SCOUT_UNIT_STATUS_MIN_LEN, MAVLINK_MSG_ID_SCOUT_UNIT_STATUS_LEN, MAVLINK_MSG_ID_SCOUT_UNIT_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE SCOUT_UNIT_STATUS UNPACKING


/**
 * @brief Get field timestamp from scout_unit_status message
 *
 * @return  time since system start (microseconds)
 */
static inline uint64_t mavlink_msg_scout_unit_status_get_timestamp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field armor_status from scout_unit_status message
 *
 * @return  Armor status of the scout unit
 */
static inline uint8_t mavlink_msg_scout_unit_status_get_armor_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field gps_status from scout_unit_status message
 *
 * @return  GPS status of the scout unit
 */
static inline uint8_t mavlink_msg_scout_unit_status_get_gps_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  9);
}

/**
 * @brief Get field drone_status from scout_unit_status message
 *
 * @return  Drone status
 */
static inline uint8_t mavlink_msg_scout_unit_status_get_drone_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  10);
}

/**
 * @brief Get field buttons from scout_unit_status message
 *
 * @return  Bitmask of all buttons
 */
static inline uint8_t mavlink_msg_scout_unit_status_get_buttons(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  11);
}

/**
 * @brief Get field custom_field from scout_unit_status message
 *
 * @return  Custom field for future use
 */
static inline uint8_t mavlink_msg_scout_unit_status_get_custom_field(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  12);
}

/**
 * @brief Decode a scout_unit_status message into a struct
 *
 * @param msg The message to decode
 * @param scout_unit_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_scout_unit_status_decode(const mavlink_message_t* msg, mavlink_scout_unit_status_t* scout_unit_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    scout_unit_status->timestamp = mavlink_msg_scout_unit_status_get_timestamp(msg);
    scout_unit_status->armor_status = mavlink_msg_scout_unit_status_get_armor_status(msg);
    scout_unit_status->gps_status = mavlink_msg_scout_unit_status_get_gps_status(msg);
    scout_unit_status->drone_status = mavlink_msg_scout_unit_status_get_drone_status(msg);
    scout_unit_status->buttons = mavlink_msg_scout_unit_status_get_buttons(msg);
    scout_unit_status->custom_field = mavlink_msg_scout_unit_status_get_custom_field(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SCOUT_UNIT_STATUS_LEN? msg->len : MAVLINK_MSG_ID_SCOUT_UNIT_STATUS_LEN;
        memset(scout_unit_status, 0, MAVLINK_MSG_ID_SCOUT_UNIT_STATUS_LEN);
    memcpy(scout_unit_status, _MAV_PAYLOAD(msg), len);
#endif
}
