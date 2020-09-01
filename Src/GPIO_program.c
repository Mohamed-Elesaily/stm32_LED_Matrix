/******************************************************/
/***
 *  Author : Mohamed Elesaily
 *  Date : 8/12/2020
 *  Version : 1V
 *  Description : GPIO Program
*/
/******************************************************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"


#include"GPIO_interface.h"
#include"GPIO_private.h"

void GPIO_voidSetPinDirection(u8 copy_u8PORT, u8 copy_u8PIN, u8 copy_u8Mode){

    switch (copy_u8PORT)
    {
    case GPIOA:
        if(copy_u8PIN < 8){
            GPIOA_CRL &= ~(0b1111 << (copy_u8PIN*4)) ;
            GPIOA_CRL |= (copy_u8Mode << (copy_u8PIN*4));
        }
        else if(copy_u8PIN < 16){
            copy_u8PIN = copy_u8PIN-8;
            GPIOA_CRH &= ~(0b1111 << (copy_u8PIN*4)) ;
            GPIOA_CRH |= (copy_u8Mode << (copy_u8PIN*4));
        }
        break;
    case GPIOB:

         if(copy_u8PIN < 8){
            GPIOB_CRL &= ~(0b1111 << (copy_u8PIN*4));
            GPIOB_CRL |= (copy_u8Mode << (copy_u8PIN*4));
        }
        else if(copy_u8PIN < 16){
            copy_u8PIN = copy_u8PIN-8;
            GPIOB_CRH &= ~(0b1111 << (copy_u8PIN*4));
            GPIOB_CRH |= (copy_u8Mode << (copy_u8PIN*4));
        }
        break;
        
    case GPIOC:
        if(copy_u8PIN < 8){
            GPIOC_CRL &= ~(0b1111 << (copy_u8PIN*4));
            GPIOC_CRL |= (copy_u8Mode << (copy_u8PIN*4));
        }
        else if(copy_u8PIN < 16){
            copy_u8PIN = copy_u8PIN-8;
            GPIOC_CRH &= ~(0b1111 << (copy_u8PIN*4));
            GPIOC_CRH |= (copy_u8Mode << (copy_u8PIN*4));
        }
        break;
    default:
        break;
    }
}




void GPIO_voidSetPinValue(u8 copy_u8PORT, u8 copy_u8PIN, u8 copy_u8Value){
switch(copy_u8PORT){
    case GPIOA:
            if(copy_u8Value == GPIO_HIGH){
                SET_BIT(GPIOA_ODR, copy_u8PIN);
            }else if(copy_u8Value == GPIO_LOW){
                CLR_BIT(GPIOA_ODR, copy_u8PIN);
            }
            break;
    case GPIOB:
            if(copy_u8Value == GPIO_HIGH){
                SET_BIT(GPIOB_ODR, copy_u8PIN);
            }else if(copy_u8Value == GPIO_LOW){
            	CLR_BIT(GPIOB_ODR, copy_u8PIN);
            }
            break;
    case GPIOC:
            if(copy_u8Value == GPIO_HIGH){
                SET_BIT(GPIOC_ODR, copy_u8PIN);
            }else if(copy_u8Value == GPIO_LOW){
            	CLR_BIT(GPIOC_ODR, copy_u8PIN);
            }
            break;
    default: break;
}
}

u8 GPIO_u8GetPinValue(u8 copy_u8PORT, u8 copy_u8PIN){
u8 value = 0;
switch(copy_u8PORT){
    
    case GPIOA:
        value = GET_BIT(GPIOA_IDR, copy_u8PIN);
        break;
    case GPIOB:
        value = GET_BIT(GPIOB_IDR, copy_u8PIN);
        break;
    case GPIOC: 
        value = GET_BIT(GPIOC_IDR, copy_u8PIN);
        break;
    default: break;
}
return value;
}


