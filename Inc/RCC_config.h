/*********************************/
/**
 * Author   :   Mohamed Elesaily
 * Version  :   V01
 * Date     :   8/8/2020
*/


/*********************************/
#ifndef _RCC_CONFIG_H
#define _RCC_CONFIG_H
/**
 * Options: RCC_HSE_CRYSTAL
 *          RCC_HSE_RC
 *          RCC_HSI
 *          RCC_PLL
*/
#define RCC_CLOCK_TYPE RCC_PLL
/**
 * Options: RCC_PLL_IN_HSI_DIV_2
 *          RCC_PLL_IN_HSE_DIV_2
 *          RCC_PLL_IN_HSE
 *          
*/
//  options: 2 t0 16
//  selected value if pll is enabled
/**
 * Options: RCC_HSE_CRYSTAL
 *          RCC_HSE_RC
*/
#if RCC_CLOCK_TYPE == RCC_PLL
#define RCC_PLL_INPUT RCC_PLL_IN_HSE_DIV_2
#define RCC_PLL_MUL_VAL 1
#define RCC_PLL_IN_HSE_TYPE RCC_HSE_RC
#endif

#endif
