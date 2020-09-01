#ifndef SYSTICK_PRIVATE_H
#define SYSTICK_PRIVATE_H

#define SYSTICK_ADDRESS 0xE000E010

#define STK_CTRL *((volatile u32 *)(SYSTICK_ADDRESS + 0X00))
#define STK_LOAD *((volatile u32 *)(SYSTICK_ADDRESS + 0X04))
#define STK_VAL *((volatile u32 *)(SYSTICK_ADDRESS + 0X08))
#define CALIB *((volatile u32 *)(SYSTICK_ADDRESS + 0X0C))


#define STK_AHB_DIV_8 0
#define STK_AHB 1

u8 stopIntervalFlag = 1;
#endif