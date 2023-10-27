/*
*	stm32f446re.h
*
*	Created on:		Oct 25, 2023
*	Author: 		Robert Fudge
*/


//Header file include guard
#ifndef _STM32F446RE_H_
#define _STM32F446RE_H_

#include <stdlib.h>

//Base address mapping for registers
//		NAME					TYPE	   START_ADDR				RANGE

//DCMI
#define DCMI					(uint32_t) 0x50050000	//0x5005 0000 - 0x5005 03FF

//USB OTG
#define USB_OTG_FS				(uint32_t) 0x50000000	//0x5000 0000 - 0x5003 FFFF
#define USB_OTG_HS				(uint32_t) 0x40040000	//0x4004 0000 - 0x4007 FFFF

//DMA
#define DMA1					(uint32_t) 0x40026000	//0x4002 6000 - 0x4002 63FF
#define DMA2					(uint32_t) 0x40026400	//0x4002 6400 - 0x4002 67FF

#define BKPSRAM					(uint32_t) 0x40024000	//0x4002 4000 - 0x4002 4FFF
#define FIR						(uint32_t) 0x40023C00	//0x4002 3C00 - 0x4002 3FFF

//RCC and CRC
#define RCC						(uint32_t) 0x40023800	//0x4002 3800 - 0x4002 3BFF
#define CRC 					(uint32_t) 0x40023000	//0x4002 3000 - 0x4002 33FF

//General Purpose Input-Output
#define GPIOA					(uint32_t) 0x40020000	//0x4002 0000 - 0x4002 03FF
#define GPIOB					(uint32_t) 0x40020400	//0x4002 0400 - 0x4002 07FF
#define GPIOC					(uint32_t) 0x40020800	//0x4002 0800 - 0x4002 0BFF
#define GPIOD					(uint32_t) 0x40020C00	//0x4002 0C00 - 0x4002 0FFF
#define GPIOE					(uint32_t) 0x40021000	//0x4002 1000 - 0x4002 13FF
#define GPIOF					(uint32_t) 0x40021400	//0x4002 1400 - 0x4002 17FF
#define GPIOG					(uint32_t) 0x40020800	//0x4002 1800 - 0x4002 1BFF
#define GPIOH					(uint32_t) 0x40020C00	//0x4002 1C00 - 0x4002 1FFF

//SAI
#define SAI1					(uint32_t) 0x40015800	//0x4001 5800 - 0x4001 5BFF
#define SAI2					(uint32_t) 0x40015C00	//0x4001 5C00 - 0x4001 5FFF

//Timers
#define TIM1					(uint32_t) 0x40010000	//0x4001 0000 - 0x4001 03FF
#define TIM2					(uint32_t) 0x40000000	//0x4000 0000 - 0x4000 03FF
#define TIM3					(uint32_t) 0x40000400	//0x4000 0400 - 0x4000 07FF
#define TIM4					(uint32_t) 0x40000800	//0x4000 0800 - 0x4000 0BFF
#define TIM5					(uint32_t) 0x40000C00	//0x4000 0C00 - 0x4000 0FFF
#define TIM6					(uint32_t) 0x40001000	//0x4000 1000 - 0x4000 13FF
#define TIM7					(uint32_t) 0x40001400	//0x4000 1400 - 0x4000 17FF
#define TIM8					(uint32_t) 0x40010400	//0x4001 0400 - 0x4001 07FF
#define TIM9					(uint32_t) 0x40014000	//0x4001 4000 - 0x4001 43FF
#define TIM10					(uint32_t) 0x40014400	//0x4001 4400 - 0x4001 47FF
#define TIM11					(uint32_t) 0x40014800	//0x4001 4800 - 0x4001 4BFF
#define TIM12					(uint32_t) 0x40001800	//0x4000 1800 - 0x4000 1BFF
#define TIM13					(uint32_t) 0x40001C00	//0x4000 1C00 - 0x4000 1FFF
#define TIM14					(uint32_t) 0x40002000	//0x4000 2000 - 0x4000 23FF

//EXTI and SYSCFG
#define EXTI					(uint32_t) 0x40013C00	//0x4001 3C00 - 0x4001 3FFF
#define SYSCFG					(uint32_t) 0x40013800	//0x4001 3800 - 0x4001 3BFF

//Serial Peripheral Interface
#define SPI1					(uint32_t) 0x40013000	//0x4001 3000 - 0x4001 33FF
#define SPI2					(uint32_t) 0x40003800	//0x4000 3800 - 0x4000 3BFF
#define SPI3					(uint32_t) 0x40003C00	//0x4000 3C00 - 0x4000 3FFF
#define SPI4					(uint32_t) 0x40013400	//0x4001 3400 - 0x4001 37FF

//SDIO
#define SDIO					(uint32_t) 0x40012C00	//0x4001 2C00 - 0x4001 2FFF

//Analog-to-Digital Converters
#define ADCx					(uint32_t) 0x40012000	//0x4001 2000 - 0x4001 23FF

//Universal Sync
#define USART1					(uint32_t) 0x40011000	//0x4001 1000 - 0x4001 13FF
#define USART2					(uint32_t) 0x40004400	//0x4000 4400 - 0x4000 47FF
#define USART3					(uint32_t) 0x40004800	//0x4000 4800 - 0x4000 4BFF
#define UART4					(uint32_t) 0x40004C00	//0x4000 4C00 - 0x4000 4FFF
#define UART5					(uint32_t) 0x40005000	//0x4000 5000 - 0x4000 53FF
#define USART6					(uint32_t) 0x40011400	//0x4001 1400 - 0x4001 17FF

#define DAC						(uint32_t) 0x40007400	//0x4000 7400 - 0x4000 77FF
#define PWR						(uint32_t) 0x40007000	//0x4000 7000 - 0x4000 73FF
#define HDMI_CEC				(uint32_t) 0x40006C00	//0x4000 6C00 - 0x4000 6FFF

//CAN
#define CAN1					(uint32_t) 0x40006400	//0x4000 6400 - 0x4000 67FF
#define CAN2					(uint32_t) 0x40006800	//0x4000 6800 - 0x4000 6BFF

//FMPI2C1
#define FMPI2C1					(uint32_t) 0x40006000

//Inter-Intergrated Circuit
#define I2C1					(uint32_t) 0x40005400
#define I2C2					(uint32_t) 0x40005400
#define I2C3					(uint32_t) 0x40005C00

//SPDIFRX
#define SPDIFRX					(uint32_t) 0x40004000

#define I2S2					(uint32_t) 0x40003800
#define I2S3					(uint32_t) 0x40003C00

//Watchdogs
#define IWDG					(uint32_t) 0x40003000
#define WWDG					(uint32_t) 0x40002C00

#define BKP						(uint32_t) 0x40002A00
#define RTC						(uint32_t) 0x40002800


//Base addresses of Flash and SRAM memory devices
#define FLASH_BASEADDR			(uint32_t) 0x08000000
#define SRAM_SRAM1_BASEADDR		(uint32_t) 0x20000000
#define SRAM_SRAM2_BASEADDR		(uint32_t) 0x20000000
#define ROM_BASEADDR			(uint32_t)
#define SRAM					SRAM_SRAM1_BASEADDR


#endif	//_STM32F446RE_H_
