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

//Base addresses of Flash and SRAM memory devices
#define FLASH_BASEADDR			0x08000000U	//0x0800 0000 - 0x0807 FFFF
#define SRAM_SRAM1_BASEADDR		0x20000000U
#define SRAM_SRAM2_BASEADDR		0x20000000U
#define ROM_BASEADDR			0x1FFF0000U	//0x1FFF 0000 - 0x1FFF 77FF
#define SRAM					SRAM_SRAM1_BASEADDR

#define AHB1					0x40020000U//0x4002 0000 - 0x4007 FFFF
#define AHB2					0x50000000U//0x5000 0000 - 0x500F 07FF
#define AHB3					0x60000000U//0x6000 0000 - 0xDFFF FFFF
#define APB1					0x40000000U//0x4000 0000 - 0x4000 FFFF
#define APB2					0x40010000U//0x4001 0000 - 0x4001 6BFF

//AHB1 peripherals
#define GPIOA					(AHB1 + 0x0000U)//0x4002 0000 - 0x4002 03FF
#define GPIOB					(AHB1 + 0x0400U)//0x4002 0400 - 0x4002 07FF
#define GPIOC					(AHB1 + 0x0800U)//0x4002 0800 - 0x4002 0BFF
#define GPIOD					(AHB1 + 0x0C00U)//0x4002 0C00 - 0x4002 0FFF
#define GPIOE					(AHB1 + 0x1000U)//0x4002 1000 - 0x4002 13FF
#define GPIOF					(AHB1 + 0x1400U)//0x4002 1400 - 0x4002 17FF
#define GPIOG					(AHB1 + 0x1800U)//0x4002 1800 - 0x4002 1BFF
#define GPIOH					(AHB1 + 0x1C00U)//0x4002 1C00 - 0x4002 1FFF
#define CRC 					(AHB1 + 0x3000U)//0x4002 3000 - 0x4002 33FF
#define RCC						(AHB1 + 0x3800U)//0x4002 3800 - 0x4002 3BFF
#define FIR						(AHB1 + 0x3C00U)//0x4002 3C00 - 0x4002 3FFF
#define BKPSRAM					(AHB1 + 0x4000U)//0x4002 4000 - 0x4002 4FFF
#define DMA1					(AHB1 + 0x6000U)//0x4002 6000 - 0x4002 63FF
#define DMA2					(AHB1 + 0x6400U)//0x4002 6400 - 0x4002 67FF
#define USB_OTG_HS				(AHB1 + 0x00040000U)//0x4004 0000 - 0x4007 FFFF

//AHB2 peripherals
#define USB_OTG_FS				(AHB2 + 0x0000U)//0x5000 0000 - 0x5003 FFFF
#define DCMI					(AHB2 + 0x00050000)//0x5005 0000 - 0x5005 03FF

//AHB3 peripherals
#define FMC1					(AHB3 + 0x00000000U)//0x6000 0000 - 0x6FFF FFFF
#define FMC3					(AHB3 + 0x20000000U)//0x6000 0000 - 0x6FFF FFFF
#define QSPI					(AHB3 + 0x30000000U)
#define FMCCR					(AHB3 + 0x40000000U)
#define QSPICR					(AHB3 + 0x40001000U)
#define FMC5					(AHB3 + 0x00000000U)//0x6000 0000 - 0x6FFF FFFF
#define FMC6					(AHB3 + 0x00000000U)//0x6000 0000 - 0x6FFF FFFF

//APB1 peripherals
#define TIM2					(APB1 + 0x0000U)//0x4000 0000 - 0x4000 03FF
#define TIM3					(APB1 + 0x0400U)//0x4000 0400 - 0x4000 07FF
#define TIM4					(APB1 + 0x0800U)	//0x4000 0800 - 0x4000 0BFF
#define TIM5					(APB1 + 0x40000C00	//0x4000 0C00 - 0x4000 0FFF
#define TIM6					(uint32_t) 0x40001000	//0x4000 1000 - 0x4000 13FF
#define TIM7					(uint32_t) 0x40001400	//0x4000 1400 - 0x4000 17FF
#define TIM12					(uint32_t) 0x40001800	//0x4000 1800 - 0x4000 1BFF
#define TIM13					(uint32_t) 0x40001C00	//0x4000 1C00 - 0x4000 1FFF
#define TIM14					(uint32_t) 0x40002000	//0x4000 2000 - 0x4000 23FF
#define RTC						(uint32_t) 0x40002800	//0x4000 2800 - 0x4000 29FF
#define BKP						(uint32_t) 0x40002A00	//0x4000 2A00 - 0x4000 2BFF
#define WWDG					(uint32_t) 0x40002C00	//0x4000 2C00 - 0x4000 2FFF
#define IWDG					(uint32_t) 0x40003000	//0x4000 3000 - 0x4000 33FF
#define SPI2					(uint32_t) 0x40003800	//0x4000 3800 - 0x4000 3BFF
#define I2S2					(uint32_t) 0x40003800	//0x4000 3800 - 0x4000 3BFF
#define SPI3					(uint32_t) 0x40003C00	//0x4000 3C00 - 0x4000 3FFF
#define I2S3					(uint32_t) 0x40003C00	//0x4000 3C00 - 0x4000 3FFF
#define SPDIFRX					(uint32_t) 0x40004000	//0x4000 4000 - 0x4000 43FF
#define USART2					(uint32_t) 0x40004400	//0x4000 4400 - 0x4000 47FF
#define USART3					(uint32_t) 0x40004800	//0x4000 4800 - 0x4000 4BFF
#define UART4					(uint32_t) 0x40004C00	//0x4000 4C00 - 0x4000 4FFF
#define UART5					(uint32_t) 0x40005000	//0x4000 5000 - 0x4000 53FF
#define I2C1					(uint32_t) 0x40005400	//0x4000 5400 - 0x4000 57FF
#define I2C2					(uint32_t) 0x40005800	//0x4000 5800 - 0x4000 5BFF
#define I2C3					(uint32_t) 0x40005C00	//0x4000 5C00 - 0x4000 5FFF
#define FMPI2C1					(uint32_t) 0x40006000 	//0x4000 6000 - 0x4000 63FF
#define CAN1					(uint32_t) 0x40006400	//0x4000 6400 - 0x4000 67FF
#define CAN2					(uint32_t) 0x40006800	//0x4000 6800 - 0x4000 6BFF
#define HDMI_CEC				(uint32_t) 0x40006C00	//0x4000 6C00 - 0x4000 6FFF
#define PWR						(uint32_t) 0x40007000	//0x4000 7000 - 0x4000 73FF
#define DAC						(uint32_t) 0x40007400	//0x4000 7400 - 0x4000 77FF


//APB2 peripherals
#define TIM1					(uint32_t) 0x40010000	//0x4001 0000 - 0x4001 03FF
#define TIM8					(uint32_t) 0x40010400	//0x4001 0400 - 0x4001 07FF
#define USART1					(uint32_t) 0x40011000	//0x4001 1000 - 0x4001 13FF
#define USART6					(uint32_t) 0x40011400	//0x4001 1400 - 0x4001 17FF
#define ADCx					(uint32_t) 0x40012000	//0x4001 2000 - 0x4001 23FF
#define SDIO					(uint32_t) 0x40012C00	//0x4001 2C00 - 0x4001 2FFF
#define SPI1					(uint32_t) 0x40013000	//0x4001 3000 - 0x4001 33FF
#define SPI4					(uint32_t) 0x40013400	//0x4001 3400 - 0x4001 37FF
#define SYSCFG					(uint32_t) 0x40013800	//0x4001 3800 - 0x4001 3BFF
#define EXTI					(uint32_t) 0x40013C00	//0x4001 3C00 - 0x4001 3FFF
#define TIM9					(uint32_t) 0x40014000	//0x4001 4000 - 0x4001 43FF
#define TIM10					(uint32_t) 0x40014400	//0x4001 4400 - 0x4001 47FF
#define TIM11					(uint32_t) 0x40014800	//0x4001 4800 - 0x4001 4BFF
#define SAI1					(uint32_t) 0x40015800	//0x4001 5800 - 0x4001 5BFF
#define SAI2					(uint32_t) 0x40015C00	//0x4001 5C00 - 0x4001 5FFF

#endif	//_STM32F446RE_H_
