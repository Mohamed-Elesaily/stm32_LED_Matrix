/******************************************************/
/***
 *  Author : Mohamed Elesaily
 *  Date : 8/12/2020
 *  Version : 1V
 *  Description : GPIO Register
*/
/******************************************************/
#ifndef GPIO_PRIVATE_H
#define GPIO_PRIVATE_H

#define GPIOA_BASE_ADDRESS 0x40010800
#define GPIOB_BASE_ADDRESS 0x40010C00
#define GPIOC_BASE_ADDRESS 0x40011000

        /* Register address for GPIOA */
#define GPIOA_CRL (*(volatile u32 *)(GPIOA_BASE_ADDRESS + 0X00))
#define GPIOA_CRH (*(volatile u32 *)(GPIOA_BASE_ADDRESS + 0X04))
#define GPIOA_IDR (*(volatile u32 *)(GPIOA_BASE_ADDRESS + 0X08))
#define GPIOA_ODR (*(volatile u32 *)(GPIOA_BASE_ADDRESS + 0X0c))
#define GPIOA_BSR (*(volatile u32 *)(GPIOA_BASE_ADDRESS + 0X10))
#define GPIOA_BRR (*(volatile u32 *)(GPIOA_BASE_ADDRESS + 0X14))
#define GPIOA_LCK (*(volatile u32 *)(GPIOA_BASE_ADDRESS + 0X18))

        /* Register address for GPIOB */
#define GPIOB_CRL (*(volatile u32 *)(GPIOB_BASE_ADDRESS + 0X00))
#define GPIOB_CRH (*(volatile u32 *)(GPIOB_BASE_ADDRESS + 0X04))
#define GPIOB_IDR (*(volatile u32 *)(GPIOB_BASE_ADDRESS + 0X08))
#define GPIOB_ODR (*(volatile u32 *)(GPIOB_BASE_ADDRESS + 0X0C))
#define GPIOB_BSR (*(volatile u32 *)(GPIOB_BASE_ADDRESS + 0X10))
#define GPIOB_BRR (*(volatile u32 *)(GPIOB_BASE_ADDRESS + 0X14))
#define GPIOB_LCK (*(volatile u32 *)(GPIOB_BASE_ADDRESS + 0X18))

        /* Register address for GPIOC */
#define GPIOC_CRL (*(volatile u32 *)(GPIOC_BASE_ADDRESS + 0X00))
#define GPIOC_CRH (*(volatile u32 *)(GPIOC_BASE_ADDRESS + 0X04))
#define GPIOC_IDR (*(volatile u32 *)(GPIOC_BASE_ADDRESS + 0X08))
#define GPIOC_ODR (*(volatile u32 *)(GPIOC_BASE_ADDRESS + 0X0C))
#define GPIOC_BSR (*(volatile u32 *)(GPIOC_BASE_ADDRESS + 0X10))
#define GPIOC_BRR (*(volatile u32 *)(GPIOC_BASE_ADDRESS + 0X14))
#define GPIOC_LCK (*(volatile u32 *)(GPIOC_BASE_ADDRESS + 0X18))


#endif
