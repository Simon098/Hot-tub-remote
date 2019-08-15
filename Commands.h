#ifndef COMMANDS_H
#define COMMANDS_H

#define CMD_STATE_ALL_OFF_F 0x210
#define CMD_STATE_ALL_OFF_C 0x283
#define CMD_STATE_PUMP_ON_F 0x215
#define CMD_STATE_PUMP_ON_C 0x286
#define CMD_STATE_BLOWER_ON_F 0x311
#define CMD_STATE_BLOWER_ON_C 0x382
#define CMD_STATE_PUMP_ON_HEATER_ON 0x28C
#define CMD_STATE_PUMP_ON_HEATER_HEATING 0x2C7

#define CMD_FLASH      0xBFF
#define CMD_END        0xA01
#define CMD_ERROR_PKT1 0x1DF
#define CMD_ERROR_PKT2 0x201

#define CMD_ERROR_1 0x9F8
#define CMD_ERROR_2 0x9F7
#define CMD_ERROR_3 0x9F2
#define CMD_ERROR_4 0x9E4
#define CMD_ERROR_5 0x9E9

#define CMD_BTN_HEAT    0x382F
#define CMD_BTN_TEMP_DN 0x3840
#define CMD_BTN_BLOW    0x3900
#define CMD_BTN_TEMP_UP 0x3A30
#define CMD_BTN_PUMP    0x3C00

#endif
