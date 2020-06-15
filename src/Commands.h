#ifndef COMMANDS_H
#define COMMANDS_H

#define CMD_ERROR_PKT1 0x1DF
#define CMD_ERROR_PKT2 0x201

#define CMD_STATE_ALL_OFF_F 0x210
#define CMD_STATE_PUMP_ON_F 0x215
#define CMD_STATE_ALL_OFF_C 0x283
#define CMD_STATE_PUMP_ON_C 0x286
#define CMD_STATE_PUMP_ON_HEATER_ON 0x28C
#define CMD_STATE_PUMP_ON_HEATER_HEATING 0x2C7
#define CMD_STATE_BLOWER_ON_F 0x311
#define CMD_STATE_BLOWER_ON_C 0x382


#define CMD_ERROR_5 0x9E9
#define CMD_ERROR_4 0x9E4
#define CMD_ERROR_3 0x9F2
#define CMD_ERROR_2 0x9F7
#define CMD_ERROR_1 0x9F8

#define CMD_END 0xA01

//104F 0xA5E
//52F  0xB2D

//40C  0xB5F
//9C  0xBD8

#define CMD_FLASH 0xBFF

#define CMD_BTN_HEAT 0x182F
#define CMD_BTN_TEMP_DN 0x1840
#define CMD_BTN_BLOW 0x1900
#define CMD_BTN_TEMP_UP 0x1A30
#define CMD_BTN_PUMP 0x1C00

#define CMD_UNKNOWN1 0xBAF  // got these three a couple of times, not sure why, was just after the pump was turned on and no buttons had been pressed
#define CMD_UNKNOWN2 0xBC3
#define CMD_UNKNOWN3 0xBC6

#define CMD_OUTOFSPEC1 0x16D2 // 0xB69 out of spec (RSH 1)
#define CMD_OUTOFSPEC2 0x518  // 0x28C out of spec (RSH 1)
#define CMD_OUTOFSPEC3 0x58E  // 0x2C7 out of spec (RSH 1)
//0x7AE6
//0x7AE7
//0x6927

#endif
