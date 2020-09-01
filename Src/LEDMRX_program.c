
#include"STD_TYPES.h"
#include"BIT_MATH.h"
#include"GPIO_interface.h"
#include"SYSTICK_interface.h"
#include"LEDMRX_private.h"
#include"LEDMRX_config.h"

void HLEDMRX_voidInit(void){

    GPIO_voidSetPinDirection(LEDMRX_ROW0_PIN,OUTPUT_SPEED_2MHZ_PP);
    GPIO_voidSetPinDirection(LEDMRX_ROW1_PIN,OUTPUT_SPEED_2MHZ_PP);
    GPIO_voidSetPinDirection(LEDMRX_ROW2_PIN,OUTPUT_SPEED_2MHZ_PP);
    GPIO_voidSetPinDirection(LEDMRX_ROW3_PIN,OUTPUT_SPEED_2MHZ_PP);
    GPIO_voidSetPinDirection(LEDMRX_ROW4_PIN,OUTPUT_SPEED_2MHZ_PP);
    GPIO_voidSetPinDirection(LEDMRX_ROW5_PIN,OUTPUT_SPEED_2MHZ_PP);
    GPIO_voidSetPinDirection(LEDMRX_ROW6_PIN,OUTPUT_SPEED_2MHZ_PP);
    GPIO_voidSetPinDirection(LEDMRX_ROW7_PIN,OUTPUT_SPEED_2MHZ_PP);

    GPIO_voidSetPinDirection(LEDMRX_COL0_PIN,OUTPUT_SPEED_2MHZ_PP);
    GPIO_voidSetPinDirection(LEDMRX_COL1_PIN,OUTPUT_SPEED_2MHZ_PP);
    GPIO_voidSetPinDirection(LEDMRX_COL2_PIN,OUTPUT_SPEED_2MHZ_PP);
    GPIO_voidSetPinDirection(LEDMRX_COL3_PIN,OUTPUT_SPEED_2MHZ_PP);
    GPIO_voidSetPinDirection(LEDMRX_COL4_PIN,OUTPUT_SPEED_2MHZ_PP);
    GPIO_voidSetPinDirection(LEDMRX_COL5_PIN,OUTPUT_SPEED_2MHZ_PP);
    GPIO_voidSetPinDirection(LEDMRX_COL6_PIN,OUTPUT_SPEED_2MHZ_PP);
    GPIO_voidSetPinDirection(LEDMRX_COL7_PIN,OUTPUT_SPEED_2MHZ_PP);
}

void LEDMRX_voidDisplay(u8 *Copy_u8Data){
	  u32 i=0;
while(i<20){
    LEDMRX_voidDisableAllCol();
    GPIO_voidSetPinValue(LEDMRX_COL0_PIN,GPIO_LOW);
    LEDMRX_voidSetRow(Copy_u8Data[0]);
    MSTK_voidSetBusyWait(2500);

    LEDMRX_voidDisableAllCol();
    GPIO_voidSetPinValue(LEDMRX_COL1_PIN,GPIO_LOW);
    LEDMRX_voidSetRow(Copy_u8Data[1]);
    MSTK_voidSetBusyWait(2500);

    LEDMRX_voidDisableAllCol();
    GPIO_voidSetPinValue(LEDMRX_COL2_PIN,GPIO_LOW);
    LEDMRX_voidSetRow(Copy_u8Data[2]);
    MSTK_voidSetBusyWait(2500);

        LEDMRX_voidDisableAllCol();
    GPIO_voidSetPinValue(LEDMRX_COL3_PIN,GPIO_LOW);
    LEDMRX_voidSetRow(Copy_u8Data[3]);
    MSTK_voidSetBusyWait(2500);

        LEDMRX_voidDisableAllCol();
    GPIO_voidSetPinValue(LEDMRX_COL4_PIN,GPIO_LOW);
    LEDMRX_voidSetRow(Copy_u8Data[4]);
    MSTK_voidSetBusyWait(2500);

        LEDMRX_voidDisableAllCol();
    GPIO_voidSetPinValue(LEDMRX_COL5_PIN,GPIO_LOW);
    LEDMRX_voidSetRow(Copy_u8Data[5]);
    MSTK_voidSetBusyWait(2500);

    LEDMRX_voidDisableAllCol();
    GPIO_voidSetPinValue(LEDMRX_COL6_PIN,GPIO_LOW);
    LEDMRX_voidSetRow(Copy_u8Data[6]);
    MSTK_voidSetBusyWait(2500);

    LEDMRX_voidDisableAllCol();
    GPIO_voidSetPinValue(LEDMRX_COL7_PIN,GPIO_LOW);
    LEDMRX_voidSetRow(Copy_u8Data[7]);
    MSTK_voidSetBusyWait(2500);

i = i + 1;
}
}

static void LEDMRX_voidDisableAllCol(){
    GPIO_voidSetPinValue(LEDMRX_COL0_PIN,GPIO_HIGH);
    GPIO_voidSetPinValue(LEDMRX_COL1_PIN,GPIO_HIGH);
    GPIO_voidSetPinValue(LEDMRX_COL2_PIN,GPIO_HIGH);
    GPIO_voidSetPinValue(LEDMRX_COL3_PIN,GPIO_HIGH);
    GPIO_voidSetPinValue(LEDMRX_COL4_PIN,GPIO_HIGH);
    GPIO_voidSetPinValue(LEDMRX_COL5_PIN,GPIO_HIGH);
    GPIO_voidSetPinValue(LEDMRX_COL6_PIN,GPIO_HIGH);
    GPIO_voidSetPinValue(LEDMRX_COL7_PIN,GPIO_HIGH);


}
static void LEDMRX_voidSetRow(u8 Copy_u8Data){
    u8 local_u8Bit;
    local_u8Bit = GET_BIT(Copy_u8Data, 0);
    GPIO_voidSetPinValue(LEDMRX_ROW0_PIN,local_u8Bit);
     local_u8Bit = GET_BIT(Copy_u8Data, 1);
    GPIO_voidSetPinValue(LEDMRX_ROW1_PIN,local_u8Bit);
     local_u8Bit = GET_BIT(Copy_u8Data, 2);
    GPIO_voidSetPinValue(LEDMRX_ROW2_PIN,local_u8Bit);
     local_u8Bit = GET_BIT(Copy_u8Data, 3);
    GPIO_voidSetPinValue(LEDMRX_ROW3_PIN,local_u8Bit);
     local_u8Bit = GET_BIT(Copy_u8Data, 4);
    GPIO_voidSetPinValue(LEDMRX_ROW4_PIN,local_u8Bit);
    local_u8Bit = GET_BIT(Copy_u8Data, 5);
    GPIO_voidSetPinValue(LEDMRX_ROW5_PIN,local_u8Bit);
     local_u8Bit = GET_BIT(Copy_u8Data, 6);
    GPIO_voidSetPinValue(LEDMRX_ROW6_PIN,local_u8Bit);
     local_u8Bit = GET_BIT(Copy_u8Data, 7);
    GPIO_voidSetPinValue(LEDMRX_ROW7_PIN,local_u8Bit);

}

void LEDMRX_voidShift(u8 *Copy_u8Data){

//
	for(int i=0;i<49;i++){
		if(i == 0){
			continue;
		}
		Copy_u8Data[i-1] = Copy_u8Data[i];
	}




}
