/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _SCSI_SCSI_H
#define _SCSI_SCSI_H 1

#include <features.h>

#define TEST_UNIT_READY 0x00
#define REZERO_UNIT 0x01
#define REQUEST_SENSE 0x03
#define FORMAT_UNIT 0x04
#define READ_BLOCK_LIMITS 0x05
#define REASSIGN_BLOCKS 0x07
#define READ_6 0x08
#define WRITE_6 0x0a
#define SEEK_6 0x0b
#define READ_REVERSE 0x0f
#define WRITE_FILEMARKS 0x10
#define SPACE 0x11
#define INQUIRY 0x12
#define RECOVER_BUFFERED_DATA 0x14
#define MODE_SELECT 0x15
#define RESERVE 0x16
#define RELEASE 0x17
#define COPY 0x18
#define ERASE 0x19
#define MODE_SENSE 0x1a
#define START_STOP 0x1b
#define RECEIVE_DIAGNOSTIC 0x1c
#define SEND_DIAGNOSTIC 0x1d
#define ALLOW_MEDIUM_REMOVAL 0x1e

#define SET_WINDOW 0x24
#define READ_CAPACITY 0x25
#define READ_10 0x28
#define WRITE_10 0x2a
#define SEEK_10 0x2b
#define WRITE_VERIFY 0x2e
#define VERIFY 0x2f
#define SEARCH_HIGH 0x30
#define SEARCH_EQUAL 0x31
#define SEARCH_LOW 0x32
#define SET_LIMITS 0x33
#define PRE_FETCH 0x34
#define READ_POSITION 0x34
#define SYNCHRONIZE_CACHE 0x35
#define LOCK_UNLOCK_CACHE 0x36
#define READ_DEFECT_DATA 0x37
#define MEDIUM_SCAN 0x38
#define COMPARE 0x39
#define COPY_VERIFY 0x3a
#define WRITE_BUFFER 0x3b
#define READ_BUFFER 0x3c
#define UPDATE_BLOCK 0x3d
#define READ_LONG 0x3e
#define WRITE_LONG 0x3f
#define CHANGE_DEFINITION 0x40
#define WRITE_SAME 0x41
#define READ_TOC 0x43
#define LOG_SELECT 0x4c
#define LOG_SENSE 0x4d
#define MODE_SELECT_10 0x55
#define RESERVE_10 0x56
#define RELEASE_10 0x57
#define MODE_SENSE_10 0x5a
#define PERSISTENT_RESERVE_IN 0x5e
#define PERSISTENT_RESERVE_OUT 0x5f
#define MOVE_MEDIUM 0xa5
#define READ_12 0xa8
#define WRITE_12 0xaa
#define WRITE_VERIFY_12 0xae
#define SEARCH_HIGH_12 0xb0
#define SEARCH_EQUAL_12 0xb1
#define SEARCH_LOW_12 0xb2
#define READ_ELEMENT_STATUS 0xb8
#define SEND_VOLUME_TAG 0xb6
#define WRITE_LONG_2 0xea

#define GOOD 0x00
#define CHECK_CONDITION 0x01
#define CONDITION_GOOD 0x02
#define BUSY 0x04
#define INTERMEDIATE_GOOD 0x08
#define INTERMEDIATE_C_GOOD 0x0a
#define RESERVATION_CONFLICT 0x0c
#define COMMAND_TERMINATED 0x11
#define QUEUE_FULL 0x14

#define STATUS_MASK 0x3e

#define NO_SENSE 0x00
#define RECOVERED_ERROR 0x01
#define NOT_READY 0x02
#define MEDIUM_ERROR 0x03
#define HARDWARE_ERROR 0x04
#define ILLEGAL_REQUEST 0x05
#define UNIT_ATTENTION 0x06
#define DATA_PROTECT 0x07
#define BLANK_CHECK 0x08
#define COPY_ABORTED 0x0a
#define ABORTED_COMMAND 0x0b
#define VOLUME_OVERFLOW 0x0d
#define MISCOMPARE 0x0e

#define TYPE_DISK 0x00
#define TYPE_TAPE 0x01
#define TYPE_PROCESSOR 0x03  
#define TYPE_WORM 0x04  
#define TYPE_ROM 0x05
#define TYPE_SCANNER 0x06
#define TYPE_MOD 0x07  
#define TYPE_MEDIUM_CHANGER 0x08
#define TYPE_ENCLOSURE 0x0d  
#define TYPE_NO_LUN 0x7f

struct ccs_modesel_head
 {
 unsigned char _r1;
 unsigned char medium;
 unsigned char _r2;
 unsigned char block_desc_length;
 unsigned char density;
 unsigned char number_blocks_hi;
 unsigned char number_blocks_med;
 unsigned char number_blocks_lo;
 unsigned char _r3;
 unsigned char block_length_hi;
 unsigned char block_length_med;
 unsigned char block_length_lo;
 };

#define COMMAND_COMPLETE 0x00
#define EXTENDED_MESSAGE 0x01
#define EXTENDED_MODIFY_DATA_POINTER 0x00
#define EXTENDED_SDTR 0x01
#define EXTENDED_EXTENDED_IDENTIFY 0x02  
#define EXTENDED_WDTR 0x03
#define SAVE_POINTERS 0x02
#define RESTORE_POINTERS 0x03
#define DISCONNECT 0x04
#define INITIATOR_ERROR 0x05
#define ABORT 0x06
#define MESSAGE_REJECT 0x07
#define NOP 0x08
#define MSG_PARITY_ERROR 0x09
#define LINKED_CMD_COMPLETE 0x0a
#define LINKED_FLG_CMD_COMPLETE 0x0b
#define BUS_DEVICE_RESET 0x0c

#define INITIATE_RECOVERY 0x0f  
#define RELEASE_RECOVERY 0x10  

#define SIMPLE_QUEUE_TAG 0x20
#define HEAD_OF_QUEUE_TAG 0x21
#define ORDERED_QUEUE_TAG 0x22

#define SCSI_IOCTL_GET_IDLUN 0x5382

#define SCSI_IOCTL_TAGGED_ENABLE 0x5383
#define SCSI_IOCTL_TAGGED_DISABLE 0x5384

#define SCSI_IOCTL_PROBE_HOST 0x5385

#define SCSI_IOCTL_GET_BUS_NUMBER 0x5386

#endif
