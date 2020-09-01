#include"STD_TYPES.h"
#include"BIT_MATH.h"
#include"SYSTICK_private.h"
#include"SYSTICK_config.h"
#include"SYSTICK_interface.h"

void (* callback)(void);

void MSTK_voidInit(void){
    #if STK_CLOCK_SOURCE == STK_AHB_DIV_8
        CLR_BIT(STK_CTRL,2);
    #elif STK_CLOCK_SOURCE == STK_AHB
        SET_BIT(STK_CTRL,2);
    #endif
}


void MSTK_voidSetBusyWait(u32 Copy_u32Ticks){
    STK_LOAD = Copy_u32Ticks;
    SET_BIT(STK_CTRL,0);
    while(GET_BIT(STK_CTRL, 16) == 0);
}

void MSTK_voidSetIntervalSingle(u32 Copy_u32Ticks,void (* Copy_ptr)(void) ){
    callback = Copy_ptr;
    stopIntervalFlag = 0;
    STK_LOAD = Copy_u32Ticks;
    SET_BIT(STK_CTRL,0);
    SET_BIT( STK_CTRL, 1);
}

void MSTK_voidSetIntervalPeriodic( u32 Copy_u32Ticks, void (*Copy_ptr)(void) ){
    callback = Copy_ptr;
    STK_LOAD = Copy_u32Ticks;
    SET_BIT(STK_CTRL,0);
    SET_BIT( STK_CTRL, 1);
    stopIntervalFlag = 1;
}

void MSTK_voidStopInterval(void){
    stopIntervalFlag = 0;
}

u32 MSTK_u32GetRlapsedTime(void){
    return ((STK_LOAD & 0x00ffffff) - (STK_VAL & 0x00ffffff));
}

u32 MSTK_u32GetRemainingTime(void){
    return (STK_VAL & 0x00ffffff);
}




/* ISA */

void SysTick_Handler(void){
    
    callback();
    if(stopIntervalFlag == 0){
        CLR_BIT(STK_CTRL,1);
    }

}
