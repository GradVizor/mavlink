/** @file
 *    @brief MAVLink comm protocol testsuite generated from roi_data_up.xml
 *    @see https://mavlink.io/en/
 */
#pragma once
#ifndef ROI_DATA_UP_TESTSUITE_H
#define ROI_DATA_UP_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_standard(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_roi_data_up(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_standard(system_id, component_id, last_msg);
    mavlink_test_roi_data_up(system_id, component_id, last_msg);
}
#endif

#include "../standard/testsuite.h"


static void mavlink_test_roi_data_up(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ROI_DATA_UP >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_roi_data_up_t packet_in = {
        93372036854775807ULL,963497880,101.0,129.0,157.0,185.0,89
    };
    mavlink_roi_data_up_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.timestamp = packet_in.timestamp;
        packet1.frame_id = packet_in.frame_id;
        packet1.x1 = packet_in.x1;
        packet1.y1 = packet_in.y1;
        packet1.w = packet_in.w;
        packet1.h = packet_in.h;
        packet1.state = packet_in.state;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ROI_DATA_UP_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ROI_DATA_UP_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_roi_data_up_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_roi_data_up_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_roi_data_up_pack(system_id, component_id, &msg , packet1.timestamp , packet1.frame_id , packet1.x1 , packet1.y1 , packet1.w , packet1.h , packet1.state );
    mavlink_msg_roi_data_up_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_roi_data_up_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timestamp , packet1.frame_id , packet1.x1 , packet1.y1 , packet1.w , packet1.h , packet1.state );
    mavlink_msg_roi_data_up_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_roi_data_up_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_roi_data_up_send(MAVLINK_COMM_1 , packet1.timestamp , packet1.frame_id , packet1.x1 , packet1.y1 , packet1.w , packet1.h , packet1.state );
    mavlink_msg_roi_data_up_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("ROI_DATA_UP") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_ROI_DATA_UP) != NULL);
#endif
}

static void mavlink_test_roi_data_up(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_roi_data_up(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // ROI_DATA_UP_TESTSUITE_H
