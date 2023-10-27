/*
 * stm32f446re.h
 *
 *  Created on: Oct 25, 2023
 *      Author: Robert
 */

#ifndef INC_STM32F446RE_H_
#define INC_STM32F446RE_H_

#include <stdlib.h>

//Define DCMI base address
#define DCMI_BASEADDR			(uint32_t) 0x50050000

//Define USB OTG base addresses
#define USB_OTG_FS				(uint32_t) 0x50000000
#define USB_OTG_HS				(uint32_t) 0x40040000

//Base addresses for DMA registers
#define DMA1					(uint32_t) 0x40026000
#define DMA2					(uint32_t) 0x40026400

#define BKPSRAM					(uint32_t) 0x40024000
#define FIR						(uint32_t) 0x40023C00

//Base addresses for RCC and CRC registers
#define RCC						(uint32_t) 0x40023800
#define CRC 					(uint32_t) 0x40023000

//Base addresses of Flash and SRAM memory devices
#define FLASH_BASEADDR			(uint32_t) 0x08000000
#define SRAM_SRAM1_BASEADDR		(uint32_t) 0x20000000
#define SRAM_SRAM2_BASEADDR		(uint32_t) 0x20000000
#define ROM_BASEADDR			(uint32_t)
#define SRAM					SRAM_SRAM1_BASEADDR

//Base addresses for GPIO registers
#define GPIOA					(uint32_t) 0x40020000
#define GPIOB					(uint32_t) 0x40020400
#define GPIOC					(uint32_t) 0x40020800
#define GPIOD					(uint32_t) 0x40020C00
#define GPIOE					(uint32_t) 0x40021000
#define GPIOF					(uint32_t) 0x40021400
#define GPIOG					(uint32_t) 0x40020800
#define GPIOH					(uint32_t) 0x40020C00

//Base addresses for SAI registers
#define SAI1					(uint32_t) 0x40015800
#define SAI2					(uint32_t) 0x40015C00

//Base addresses for TIM registers
#define TIM1					(uint32_t) 0x40010000
#define TIM2					(uint32_t) 0x40000000
#define TIM3					(uint32_t) 0x40010400
#define TIM4					(uint32_t) 0x40010800
#define TIM5					(uint32_t) 0x40010C00
#define TIM6					(uint32_t) 0x40011000
#define TIM7					(uint32_t) 0x40011400
#define TIM8					(uint32_t) 0x40010400
#define TIM9					(uint32_t) 0x40011C00
#define TIM10					(uint32_t) 0x40010000
#define TIM11					(uint32_t) 0x40010000
#define TIM12					(uint32_t) 0x40010000
#define TIM13					(uint32_t) 0x40010000



//Base addresses for UART registers


//Base addresses for CAN registers


//Base addresses for I2C registers


//Base addresses for SPI registers


#endif /* INC_STM32F446RE_H_ */
