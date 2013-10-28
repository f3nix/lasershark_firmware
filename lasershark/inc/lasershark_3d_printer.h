#ifndef LASERSHARK_3D_PRINTER_H_
#define LASERSHARK_3D_PRINTER_H_
#include <stdint.h>



//===================================================
#define LASERSHARK_3D_PRINTER_CMD_START_RANGE 0xA0

#define LASERSHARK_3D_PRINTER_CMD_STEPPER_1_STEP_TOWARDS_HOME 0XA0
#define LASERSHARK_3D_PRINTER_CMD_STEPPER_1_STEP_AWAY_FROM_HOME 0XA1
#define LASERSHARK_3D_PRINTER_CMD_STEPPER_2_STEP_TOWARDS_HOME 0XA2
#define LASERSHARK_3D_PRINTER_CMD_STEPPER_2_STEP_AWAY_FROM_HOME 0XA3

#define LASERSHARK_3D_PRINTER_CMD_STEPPER_HOME 0XA4
#define LASERSHARK_3D_PRINTER_CMD_STEPPER_HOME_STEPPER_1 0x01
#define LASERSHARK_3D_PRINTER_CMD_STEPPER_HOME_STEPPER_2 0x02

#define LASERSHARK_3D_PRINTER_CMD_GET_R1 0xA5
#define LASERSHARK_3D_PRINTER_CMD_GET_R2 0xA6

#define LASERSHARK_3D_PRINTER_CMD_SET_STEPPER_1_HOME_DIR 0XA7
#define LASERSHARK_3D_PRINTER_CMD_SET_STEPPER_2_HOME_DIR 0XA8

#define LASERSHARK_3D_PRINTER_STEPPER_SET_SET_DELAY_MS 0XA9

#define LASERSHARK_3D_PRINTER_CMD_END_RANGE 0xA9
//===================================================


#define LASERSHARK_3D_PRINTER_STEPPER_STEP_DELAY_MS_MIN 1
#define LASERSHARK_3D_PRINTER_STEPPER_STEP_DELAY_MS_MAX 10000000


// CTS
#define LASERSHARK_3D_PRINTER_STEPPER_1_STEP_PORT 0
#define LASERSHARK_3D_PRINTER_STEPPER_1_STEP_PIN 7

// TX
#define LASERSHARK_3D_PRINTER_STEPPER_1_DIR_PORT 1
#define LASERSHARK_3D_PRINTER_STEPPER_1_DIR_PIN 7


// RX
#define LASERSHARK_3D_PRINTER_STEPPER_2_STEP_PORT 1
#define LASERSHARK_3D_PRINTER_STEPPER_2_STEP_PIN 6

// RTS
#define LASERSHARK_3D_PRINTER_STEPPER_2_DIR_PORT 1
#define LASERSHARK_3D_PRINTER_STEPPER_2_DIR_PIN 5

// SDA
#define LASERSHARK_3D_PRINTER_R1_PORT 0
#define LASERSHARK_3D_PRINTER_R1_PIN 5

// SCL
#define LASERSHARK_3D_PRINTER_R2_PORT 0
#define LASERSHARK_3D_PRINTER_R2_PIN 4


void lasershark_3dprinter_init();

void lasershark_process_3d_printer_command();

#endif /* LASERSHARK_3D_PRINTER_H_ */
