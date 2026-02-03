#pragma once
// MESSAGE ROI_DATA_DOWN PACKING

#define MAVLINK_MSG_ID_ROI_DATA_DOWN 43211


typedef struct __mavlink_roi_data_down_t {
 uint64_t timestamp; /*<  time since system start (microseconds)*/
 uint32_t frame_id; /*<  Frame number from video stream*/
 float x1; /*<  X-Coordinate of first point clicked*/
 float y1; /*<  Y-Coordinate of first point clicked*/
 float w; /*<  Width to the last point clicked*/
 float h; /*<  Height to the last point clicked*/
 uint8_t state; /*<  Tracking state for downlink*/
} mavlink_roi_data_down_t;

#define MAVLINK_MSG_ID_ROI_DATA_DOWN_LEN 29
#define MAVLINK_MSG_ID_ROI_DATA_DOWN_MIN_LEN 29
#define MAVLINK_MSG_ID_43211_LEN 29
#define MAVLINK_MSG_ID_43211_MIN_LEN 29

#define MAVLINK_MSG_ID_ROI_DATA_DOWN_CRC 159
#define MAVLINK_MSG_ID_43211_CRC 159



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ROI_DATA_DOWN { \
    43211, \
    "ROI_DATA_DOWN", \
    7, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_roi_data_down_t, timestamp) }, \
         { "frame_id", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_roi_data_down_t, frame_id) }, \
         { "x1", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_roi_data_down_t, x1) }, \
         { "y1", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_roi_data_down_t, y1) }, \
         { "w", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_roi_data_down_t, w) }, \
         { "h", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_roi_data_down_t, h) }, \
         { "state", NULL, MAVLINK_TYPE_UINT8_T, 0, 28, offsetof(mavlink_roi_data_down_t, state) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ROI_DATA_DOWN { \
    "ROI_DATA_DOWN", \
    7, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_roi_data_down_t, timestamp) }, \
         { "frame_id", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_roi_data_down_t, frame_id) }, \
         { "x1", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_roi_data_down_t, x1) }, \
         { "y1", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_roi_data_down_t, y1) }, \
         { "w", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_roi_data_down_t, w) }, \
         { "h", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_roi_data_down_t, h) }, \
         { "state", NULL, MAVLINK_TYPE_UINT8_T, 0, 28, offsetof(mavlink_roi_data_down_t, state) }, \
         } \
}
#endif

/**
 * @brief Pack a roi_data_down message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp  time since system start (microseconds)
 * @param frame_id  Frame number from video stream
 * @param x1  X-Coordinate of first point clicked
 * @param y1  Y-Coordinate of first point clicked
 * @param w  Width to the last point clicked
 * @param h  Height to the last point clicked
 * @param state  Tracking state for downlink
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_roi_data_down_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t timestamp, uint32_t frame_id, float x1, float y1, float w, float h, uint8_t state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ROI_DATA_DOWN_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint32_t(buf, 8, frame_id);
    _mav_put_float(buf, 12, x1);
    _mav_put_float(buf, 16, y1);
    _mav_put_float(buf, 20, w);
    _mav_put_float(buf, 24, h);
    _mav_put_uint8_t(buf, 28, state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ROI_DATA_DOWN_LEN);
#else
    mavlink_roi_data_down_t packet;
    packet.timestamp = timestamp;
    packet.frame_id = frame_id;
    packet.x1 = x1;
    packet.y1 = y1;
    packet.w = w;
    packet.h = h;
    packet.state = state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ROI_DATA_DOWN_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ROI_DATA_DOWN;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ROI_DATA_DOWN_MIN_LEN, MAVLINK_MSG_ID_ROI_DATA_DOWN_LEN, MAVLINK_MSG_ID_ROI_DATA_DOWN_CRC);
}

/**
 * @brief Pack a roi_data_down message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp  time since system start (microseconds)
 * @param frame_id  Frame number from video stream
 * @param x1  X-Coordinate of first point clicked
 * @param y1  Y-Coordinate of first point clicked
 * @param w  Width to the last point clicked
 * @param h  Height to the last point clicked
 * @param state  Tracking state for downlink
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_roi_data_down_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t timestamp,uint32_t frame_id,float x1,float y1,float w,float h,uint8_t state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ROI_DATA_DOWN_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint32_t(buf, 8, frame_id);
    _mav_put_float(buf, 12, x1);
    _mav_put_float(buf, 16, y1);
    _mav_put_float(buf, 20, w);
    _mav_put_float(buf, 24, h);
    _mav_put_uint8_t(buf, 28, state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ROI_DATA_DOWN_LEN);
#else
    mavlink_roi_data_down_t packet;
    packet.timestamp = timestamp;
    packet.frame_id = frame_id;
    packet.x1 = x1;
    packet.y1 = y1;
    packet.w = w;
    packet.h = h;
    packet.state = state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ROI_DATA_DOWN_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ROI_DATA_DOWN;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ROI_DATA_DOWN_MIN_LEN, MAVLINK_MSG_ID_ROI_DATA_DOWN_LEN, MAVLINK_MSG_ID_ROI_DATA_DOWN_CRC);
}

/**
 * @brief Encode a roi_data_down struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param roi_data_down C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_roi_data_down_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_roi_data_down_t* roi_data_down)
{
    return mavlink_msg_roi_data_down_pack(system_id, component_id, msg, roi_data_down->timestamp, roi_data_down->frame_id, roi_data_down->x1, roi_data_down->y1, roi_data_down->w, roi_data_down->h, roi_data_down->state);
}

/**
 * @brief Encode a roi_data_down struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param roi_data_down C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_roi_data_down_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_roi_data_down_t* roi_data_down)
{
    return mavlink_msg_roi_data_down_pack_chan(system_id, component_id, chan, msg, roi_data_down->timestamp, roi_data_down->frame_id, roi_data_down->x1, roi_data_down->y1, roi_data_down->w, roi_data_down->h, roi_data_down->state);
}

/**
 * @brief Send a roi_data_down message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp  time since system start (microseconds)
 * @param frame_id  Frame number from video stream
 * @param x1  X-Coordinate of first point clicked
 * @param y1  Y-Coordinate of first point clicked
 * @param w  Width to the last point clicked
 * @param h  Height to the last point clicked
 * @param state  Tracking state for downlink
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_roi_data_down_send(mavlink_channel_t chan, uint64_t timestamp, uint32_t frame_id, float x1, float y1, float w, float h, uint8_t state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ROI_DATA_DOWN_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint32_t(buf, 8, frame_id);
    _mav_put_float(buf, 12, x1);
    _mav_put_float(buf, 16, y1);
    _mav_put_float(buf, 20, w);
    _mav_put_float(buf, 24, h);
    _mav_put_uint8_t(buf, 28, state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROI_DATA_DOWN, buf, MAVLINK_MSG_ID_ROI_DATA_DOWN_MIN_LEN, MAVLINK_MSG_ID_ROI_DATA_DOWN_LEN, MAVLINK_MSG_ID_ROI_DATA_DOWN_CRC);
#else
    mavlink_roi_data_down_t packet;
    packet.timestamp = timestamp;
    packet.frame_id = frame_id;
    packet.x1 = x1;
    packet.y1 = y1;
    packet.w = w;
    packet.h = h;
    packet.state = state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROI_DATA_DOWN, (const char *)&packet, MAVLINK_MSG_ID_ROI_DATA_DOWN_MIN_LEN, MAVLINK_MSG_ID_ROI_DATA_DOWN_LEN, MAVLINK_MSG_ID_ROI_DATA_DOWN_CRC);
#endif
}

/**
 * @brief Send a roi_data_down message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_roi_data_down_send_struct(mavlink_channel_t chan, const mavlink_roi_data_down_t* roi_data_down)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_roi_data_down_send(chan, roi_data_down->timestamp, roi_data_down->frame_id, roi_data_down->x1, roi_data_down->y1, roi_data_down->w, roi_data_down->h, roi_data_down->state);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROI_DATA_DOWN, (const char *)roi_data_down, MAVLINK_MSG_ID_ROI_DATA_DOWN_MIN_LEN, MAVLINK_MSG_ID_ROI_DATA_DOWN_LEN, MAVLINK_MSG_ID_ROI_DATA_DOWN_CRC);
#endif
}

#if MAVLINK_MSG_ID_ROI_DATA_DOWN_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_roi_data_down_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp, uint32_t frame_id, float x1, float y1, float w, float h, uint8_t state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint32_t(buf, 8, frame_id);
    _mav_put_float(buf, 12, x1);
    _mav_put_float(buf, 16, y1);
    _mav_put_float(buf, 20, w);
    _mav_put_float(buf, 24, h);
    _mav_put_uint8_t(buf, 28, state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROI_DATA_DOWN, buf, MAVLINK_MSG_ID_ROI_DATA_DOWN_MIN_LEN, MAVLINK_MSG_ID_ROI_DATA_DOWN_LEN, MAVLINK_MSG_ID_ROI_DATA_DOWN_CRC);
#else
    mavlink_roi_data_down_t *packet = (mavlink_roi_data_down_t *)msgbuf;
    packet->timestamp = timestamp;
    packet->frame_id = frame_id;
    packet->x1 = x1;
    packet->y1 = y1;
    packet->w = w;
    packet->h = h;
    packet->state = state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROI_DATA_DOWN, (const char *)packet, MAVLINK_MSG_ID_ROI_DATA_DOWN_MIN_LEN, MAVLINK_MSG_ID_ROI_DATA_DOWN_LEN, MAVLINK_MSG_ID_ROI_DATA_DOWN_CRC);
#endif
}
#endif

#endif

// MESSAGE ROI_DATA_DOWN UNPACKING


/**
 * @brief Get field timestamp from roi_data_down message
 *
 * @return  time since system start (microseconds)
 */
static inline uint64_t mavlink_msg_roi_data_down_get_timestamp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field frame_id from roi_data_down message
 *
 * @return  Frame number from video stream
 */
static inline uint32_t mavlink_msg_roi_data_down_get_frame_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Get field x1 from roi_data_down message
 *
 * @return  X-Coordinate of first point clicked
 */
static inline float mavlink_msg_roi_data_down_get_x1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field y1 from roi_data_down message
 *
 * @return  Y-Coordinate of first point clicked
 */
static inline float mavlink_msg_roi_data_down_get_y1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field w from roi_data_down message
 *
 * @return  Width to the last point clicked
 */
static inline float mavlink_msg_roi_data_down_get_w(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field h from roi_data_down message
 *
 * @return  Height to the last point clicked
 */
static inline float mavlink_msg_roi_data_down_get_h(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field state from roi_data_down message
 *
 * @return  Tracking state for downlink
 */
static inline uint8_t mavlink_msg_roi_data_down_get_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  28);
}

/**
 * @brief Decode a roi_data_down message into a struct
 *
 * @param msg The message to decode
 * @param roi_data_down C-struct to decode the message contents into
 */
static inline void mavlink_msg_roi_data_down_decode(const mavlink_message_t* msg, mavlink_roi_data_down_t* roi_data_down)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    roi_data_down->timestamp = mavlink_msg_roi_data_down_get_timestamp(msg);
    roi_data_down->frame_id = mavlink_msg_roi_data_down_get_frame_id(msg);
    roi_data_down->x1 = mavlink_msg_roi_data_down_get_x1(msg);
    roi_data_down->y1 = mavlink_msg_roi_data_down_get_y1(msg);
    roi_data_down->w = mavlink_msg_roi_data_down_get_w(msg);
    roi_data_down->h = mavlink_msg_roi_data_down_get_h(msg);
    roi_data_down->state = mavlink_msg_roi_data_down_get_state(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ROI_DATA_DOWN_LEN? msg->len : MAVLINK_MSG_ID_ROI_DATA_DOWN_LEN;
        memset(roi_data_down, 0, MAVLINK_MSG_ID_ROI_DATA_DOWN_LEN);
    memcpy(roi_data_down, _MAV_PAYLOAD(msg), len);
#endif
}
