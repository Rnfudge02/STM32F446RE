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
#define BA_FLASH				0x08000000U							//0x0800 0000 - 0x0807 FFFF
#define BA_SRAM1				0x20000000U
#define BA_SRAM2				0x20000000U
#define BA_ROM_BASEADDR			0x1FFF0000U							//0x1FFF 0000 - 0x1FFF 77FF
#define BA_SRAM					SRAM_SRAM1_BASEADDR

#define BA_AHB1					0x40020000U							//0x4002 0000 - 0x4007 FFFF
#define BA_AHB2					0x50000000U							//0x5000 0000 - 0x500F 07FF
#define BA_AHB3					0x60000000U							//0x6000 0000 - 0xDFFF FFFF
#define BA_APB1					0x40000000U							//0x4000 0000 - 0x4000 FFFF
#define BA_APB2					0x40010000U							//0x4001 0000 - 0x4001 6BFF

//AHB1 peripherals
#define BA_GPIOA				(AHB1 + 0x0000U)					//0x4002 0000 - 0x4002 03FF
#define BA_GPIOB				(AHB1 + 0x0400U)					//0x4002 0400 - 0x4002 07FF
#define BA_GPIOC				(AHB1 + 0x0800U)					//0x4002 0800 - 0x4002 0BFF
#define BA_GPIOD				(AHB1 + 0x0C00U)					//0x4002 0C00 - 0x4002 0FFF
#define BA_GPIOE				(AHB1 + 0x1000U)					//0x4002 1000 - 0x4002 13FF
#define BA_GPIOF				(AHB1 + 0x1400U)					//0x4002 1400 - 0x4002 17FF
#define BA_GPIOG				(AHB1 + 0x1800U)					//0x4002 1800 - 0x4002 1BFF
#define BA_GPIOH				(AHB1 + 0x1C00U)					//0x4002 1C00 - 0x4002 1FFF
#define BA_CRC 					(AHB1 + 0x3000U)					//0x4002 3000 - 0x4002 33FF
#define BA_RCC					(AHB1 + 0x3800U)					//0x4002 3800 - 0x4002 3BFF
#define BA_FIR					(AHB1 + 0x3C00U)					//0x4002 3C00 - 0x4002 3FFF
#define BA_BKPSRAM				(AHB1 + 0x4000U)					//0x4002 4000 - 0x4002 4FFF
#define BA_DMA1					(AHB1 + 0x6000U)					//0x4002 6000 - 0x4002 63FF
#define BA_DMA2					(AHB1 + 0x6400U)					//0x4002 6400 - 0x4002 67FF
#define BA_USB_OTG_HS			(AHB1 + 0x00040000U)				//0x4004 0000 - 0x4007 FFFF

//AHB2 peripherals
#define BA_USB_OTG_FS			(AHB2 + 0x0000U)					//0x5000 0000 - 0x5003 FFFF
#define BA_DCMI					(AHB2 + 0x00050000)					//0x5005 0000 - 0x5005 03FF

//AHB3 peripherals
#define BA_FMC1					(AHB3 + 0x00000000U)				//0x6000 0000 - 0x6FFF FFFF
#define BA_FMC3					(AHB3 + 0x20000000U)				//0x6000 0000 - 0x6FFF FFFF
#define BA_QSPI					(AHB3 + 0x30000000U)
#define BA_FMCCR				(AHB3 + 0x40000000U)
#define BA_QSPICR				(AHB3 + 0x40001000U)
#define BA_FMC5					(AHB3 + 0x00000000U)				//0x6000 0000 - 0x6FFF FFFF
#define BA_FMC6					(AHB3 + 0x00000000U)				//0x6000 0000 - 0x6FFF FFFF

//APB1 peripherals
#define BA_TIM2					(APB1 + 0x0000U)					//0x4000 0000 - 0x4000 03FF
#define BA_TIM3					(APB1 + 0x0400U)					//0x4000 0400 - 0x4000 07FF
#define BA_TIM4					(APB1 + 0x0800U)					//0x4000 0800 - 0x4000 0BFF
#define BA_TIM5					(APB1 + 0x40000C00U)				//0x4000 0C00 - 0x4000 0FFF
#define BA_TIM6					(APB1 + 0x1000U)					//0x4000 1000 - 0x4000 13FF
#define BA_TIM7					(APB1 + 0x1400U)					//0x4000 1400 - 0x4000 17FF
#define BA_TIM12				(APB1 + 0x1800U)					//0x4000 1800 - 0x4000 1BFF
#define BA_TIM13				(APB1 + 0x1C00U)					//0x4000 1C00 - 0x4000 1FFF
#define BA_TIM14				(APB1 + 0x2000U)					//0x4000 2000 - 0x4000 23FF
#define BA_RTC					(APB1 + 0x2800U)					//0x4000 2800 - 0x4000 29FF
#define BA_BKP					(APB1 + 0x2A00U)					//0x4000 2A00 - 0x4000 2BFF
#define BA_WWDG					(APB1 + 0x2C00U)					//0x4000 2C00 - 0x4000 2FFF
#define BA_IWDG					(APB1 + 0x3000U)					//0x4000 3000 - 0x4000 33FF
#define BA_SPI2					(APB1 + 0x3800U)					//0x4000 3800 - 0x4000 3BFF
#define BA_I2S2					(APB1 + 0x3800U)					//0x4000 3800 - 0x4000 3BFF
#define BA_SPI3					(APB1 + 0x3C00U)					//0x4000 3C00 - 0x4000 3FFF
#define BA_I2S3					(APB1 + 0x3C00U)					//0x4000 3C00 - 0x4000 3FFF
#define BA_SPDIFRX				(APB1 + 0x4000U)					//0x4000 4000 - 0x4000 43FF
#define BA_USART2				(APB1 + 0x4400U)					//0x4000 4400 - 0x4000 47FF
#define BA_USART3				(APB1 + 0x4800U)					//0x4000 4800 - 0x4000 4BFF
#define BA_UART4				(APB1 + 0x4C00U)					//0x4000 4C00 - 0x4000 4FFF
#define BA_UART5				(APB1 + 0x5000U)					//0x4000 5000 - 0x4000 53FF
#define BA_I2C1					(APB1 + 0x5400U)					//0x4000 5400 - 0x4000 57FF
#define BA_I2C2					(APB1 + 0x5800U)					//0x4000 5800 - 0x4000 5BFF
#define BA_I2C3					(APB1 + 0x5C00U)					//0x4000 5C00 - 0x4000 5FFF
#define BA_FMPI2C1				(APB1 + 0x6000U)					//0x4000 6000 - 0x4000 63FF
#define BA_CAN1					(APB1 + 0x6400U)					//0x4000 6400 - 0x4000 67FF
#define BA_CAN2					(APB1 + 0x6800U)					//0x4000 6800 - 0x4000 6BFF
#define BA_HDMI_CEC				(APB1 + 0x6C00U)					//0x4000 6C00 - 0x4000 6FFF
#define BA_PWR					(APB1 + 0x7000U)					//0x4000 7000 - 0x4000 73FF
#define BA_DAC					(APB1 + 0x7400U)					//0x4000 7400 - 0x4000 77FF


//APB2 peripherals
#define BA_TIM1					(APB2 + 0x0000U)					//0x4001 0000 - 0x4001 03FF
#define BA_TIM8					(APB2 + 0x0400U)					//0x4001 0400 - 0x4001 07FF
#define BA_USART1				(APB2 + 0x1000U)					//0x4001 1000 - 0x4001 13FF
#define BA_USART6				(APB2 + 0x1400U)					//0x4001 1400 - 0x4001 17FF
#define BA_ADC					(APB2 + 0x2000U)					//0x4001 2000 - 0x4001 23FF
#define BA_SDIO					(APB2 + 0x2C00U)					//0x4001 2C00 - 0x4001 2FFF
#define BA_SPI1					(APB2 + 0x3000U)					//0x4001 3000 - 0x4001 33FF
#define BA_SPI4					(APB2 + 0x3400U)					//0x4001 3400 - 0x4001 37FF
#define BA_SYSCFG				(APB2 + 0x3800U)					//0x4001 3800 - 0x4001 3BFF
#define BA_EXTI					(APB2 + 0x3C00U)					//0x4001 3C00 - 0x4001 3FFF
#define BA_TIM9					(APB2 + 0x4000U)					//0x4001 4000 - 0x4001 43FF
#define BA_TIM10				(APB2 + 0x4400U)					//0x4001 4400 - 0x4001 47FF
#define BA_TIM11				(APB2 + 0x4800U)					//0x4001 4800 - 0x4001 4BFF
#define BA_SAI1					(APB2 + 0x5800U)					//0x4001 5800 - 0x4001 5BFF
#define BA_SAI2					(APB2 + 0x5C00U)					//0x4001 5C00 - 0x4001 5FFF

typedef struct {
    volatile uint32_t MODER;										//Offset: 0x00
    volatile uint32_t OTYPER;										//Offset: 0x04
    volatile uint32_t OSPEEDR;										//Offset: 0x08
    volatile uint32_t PUPDR;										//Offset: 0x0C
    volatile uint32_t IDR;											//Offset: 0x10
    volatile uint32_t ODR;											//Offset: 0x14
    volatile uint32_t BSRR;											//Offset: 0x18
    volatile uint32_t LCKR;											//Offset: 0x1C
    volatile uint32_t AFRL;											//Offset: 0x20
    volatile uint32_t AFRH;											//Offset: 0x24
} GPIO_RegDef_t;

typedef struct {
	volatile uint32_t CR;											//Offset: 0x00
	volatile uint32_t PLL_CFGR;										//Offset: 0x04
	volatile uint32_t CFGR;											//Offset: 0x08
	volatile uint32_t CIR;											//Offset: 0x0C
	volatile uint32_t AHB1_RSTR;									//Offset: 0x10
	volatile uint32_t AHB2_RSTR;									//Offset: 0x14
	volatile uint32_t AHB3_RSTR;									//Offset: 0x18
	volatile uint32_t __RESERVED_0;									//Offset: 0x1C
	volatile uint32_t APB1_RSTR;									//Offset: 0x20
	volatile uint32_t APB2_RSTR;									//Offset: 0x24
	volatile uint32_t __RESERVED_1;									//Offset: 0x28
	volatile uint32_t __RESERVED_2;									//Offset: 0x2C
	volatile uint32_t AHB1_ENR;										//Offset: 0x30
	volatile uint32_t AHB2_ENR;										//Offset: 0x34
	volatile uint32_t AHB3_ENR;										//Offset: 0x38
	volatile uint32_t __RESERVED_3;									//Offset: 0x3C
	volatile uint32_t APB1_ENR;										//Offset: 0x40
	volatile uint32_t APB2_ENR;										//Offset: 0x44
	volatile uint32_t __RESERVED_4;									//Offset: 0x48
	volatile uint32_t __RESERVED_5;									//Offset: 0x4C
	volatile uint32_t AHB1_LPENR;									//Offset: 0x50
	volatile uint32_t AHB2_LPENR;									//Offset: 0x54
	volatile uint32_t AHB3_LPENR;									//Offset: 0x58
	volatile uint32_t __RESERVED_6;									//Offset: 0x5C
	volatile uint32_t APB1_LPENR;									//Offset: 0x60
	volatile uint32_t APB2_LPENR;									//Offset: 0x64
	volatile uint32_t __RESERVED_7;									//Offset: 0x68
	volatile uint32_t __RESERVED_8;									//Offset: 0x6C
	volatile uint32_t BDCR;											//Offset: 0x70
	volatile uint32_t CSR;											//Offset: 0x74
	volatile uint32_t __RESERVED_9;									//Offset: 0x78
	volatile uint32_t __RESERVED_10;								//Offset: 0x7C
	volatile uint32_t SS_CGR;										//Offset: 0x80
	volatile uint32_t PLLI2_SCFGR;									//Offset: 0x84
	volatile uint32_t PLL_SAI_CFGR;									//Offset: 0x88
	volatile uint32_t DCK_CFGR;										//Offset: 0x8C
	volatile uint32_t CK_GATENR;									//Offset: 0x90
	volatile uint32_t DCK_CFGR2;									//Offset: 0x94
} RCC_RegDef_t;

typedef struct {

} CRC_RegDef_t;

typedef struct {

} FIR_RegDef_t;

typedef struct {
    volatile uint32_t SR;											//Offset: 0x00
    volatile uint32_t DR;											//Offset: 0x04
    volatile uint32_t BRR;											//Offset: 0x08
    volatile uint32_t CR1;											//Offset: 0x0C
    volatile uint32_t CR2;											//Offset: 0x10
    volatile uint32_t CR3;											//Offset: 0x14
    volatile uint32_t GTPR;											//Offset: 0x18
} USART_RegDef_t;

typedef struct {
    volatile uint32_t CR1;											//Offset: 0x00
    volatile uint32_t CR2;											//Offset: 0x04
    volatile uint32_t OAR1;											//Offset: 0x08
    volatile uint32_t OAR2;											//Offset: 0x0C
    volatile uint32_t DR;											//Offset: 0x10
    volatile uint32_t SR1;											//Offset: 0x14
    volatile uint32_t SR2;											//Offset: 0x18
    volatile uint32_t CCR;											//Offset: 0x1C
    volatile uint32_t TRISE;										//Offset: 0x20
    volatile uint32_t FLTR;											//Offset: 0x24
} I2C_RegDef_t;

typedef struct {
    volatile uint32_t CR1;											//Offset: 0x00
    volatile uint32_t CR2;											//Offset: 0x04
    volatile uint32_t SR;											//Offset: 0x08
    volatile uint32_t DR;											//Offset: 0x0C
    volatile uint32_t CRCPR;										//Offset: 0x10
    volatile uint32_t RXCRCR;										//Offset: 0x14
    volatile uint32_t TXCRCR;										//Offset: 0x18
    volatile uint32_t I2SCFGR;										//Offset: 0x1C
    volatile uint32_t I2SPR;										//Offset: 0x20
} SPI_RegDef_t;

#define GPIOA					((GPIO_RegDef_t*)BA_GPIOA)			//
#define GPIOB					((GPIO_RegDef_t*)BA_GPIOB)
#define GPIOC					((GPIO_RegDef_t*)BA_GPIOC)
#define GPIOD					((GPIO_RegDef_t*)BA_GPIOD)
#define GPIOE					((GPIO_RegDef_t*)BA_GPIOE)
#define GPIOF					((GPIO_RegDef_t*)BA_GPIOF)
#define GPIOG					((GPIO_RegDef_t*)BA_GPIOG)
#define GPIOH					((GPIO_RegDef_t*)BA_GPIOH)

#define GPIO_MODER

#define GPIO_OTYPER_PUSHPULL	0b00
#define GPIO_OTYPER_OPENDRAIN	0b01

#define GPIO_OSPEED_LOW			0b00
#define GPIO_OSPEED_MEDIUM		0b01
#define GPIO_OSPEED_FAST		0b10
#define GPIO_OSPEED_HIGH		0b11

#define GPIO_PUPDR_NONE			0b00
#define GPIO_PUPDR_PULLUP		0b01
#define GPIO_PUPDR_PULLDOWN		0b10

#define


//RCC
#define RCC						((RCC_RegDef_t*)BA_RCC)				//

//RCC_AHB1_ENR Modifiers
#define GPIOA_CLK_EN			(RCC->AHB1_ENR |= (1 << 0)
#define GPIOB_CLK_EN			(RCC->AHB1_ENR |= (1 << 1)
#define GPIOC_CLK_EN			(RCC->AHB1_ENR |= (1 << 2)
#define GPIOD_CLK_EN			(RCC->AHB1_ENR |= (1 << 3)
#define GPIOE_CLK_EN			(RCC->AHB1_ENR |= (1 << 4)
#define GPIOF_CLK_EN			(RCC->AHB1_ENR |= (1 << 5)
#define GPIOG_CLK_EN			(RCC->AHB1_ENR |= (1 << 6)
#define GPIOH_CLK_EN			(RCC->AHB1_ENR |= (1 << 7)

#define CRC_CLK_EN				(RCC->AHB1_ENR |= (1 << 12))
#define BKPSRAM_CLK_EN			(RCC->AHB1_ENR |= (1 << 18))
#define DMA1_CLK_EN				(RCC->AHB1_ENR |= (1 << 21))
#define DMA2_CLK_EN				(RCC->AHB1_ENR |= (1 << 22))
#define OTG_HS_CLK_EN			(RCC->AHB1_ENR |= (1 << 29))
#define OTG_HS_UCLK_EN			(RCC->AHB1_ENR |= (1 << 30))

//RCC_ABH2_ENR modifiers
#define DMCI_CLK_EN				(RCC->AHB2_ENR |= (1 << 0))
#define OTF_FS_CLK_EN			(RCC->AHB2_ENR |= (1 << 7))

//RCC_AHB3_ENR modifiers
#define FMC_CLK_EN				(RCC->AHB3_ENR |= (1 << 0))
#define QSPI_CLK_EN				(RCC->AHB3_ENR |= (1 << 1))

//RCC_APB1_ENR modifiers
#define TIM2_CLK_EN				(RCC_APB1_ENR |= (1 << 0))
#define TIM3_CLK_EN				(RCC_APB1_ENR |= (1 << 1))
#define TIM4_CLK_EN				(RCC_APB1_ENR |= (1 << 2))
#define TIM5_CLK_EN				(RCC_APB1_ENR |= (1 << 3))
#define TIM6_CLK_EN				(RCC_APB1_ENR |= (1 << 4))
#define TIM7_CLK_EN				(RCC_APB1_ENR |= (1 << 5))
#define TIM12_CLK_EN			(RCC_APB1_ENR |= (1 << 6))
#define TIM13_CLK_EN			(RCC_APB1_ENR |= (1 << 7))
#define TIM14_CLK_EN			(RCC_APB1_ENR |= (1 << 8))

#define WWDG_CLK_EN				(RCC_APB1_ENR |= (1 << 11))

#define SPI2_CLK_EN				(RCC_APB1_ENR |= (1 << 14))
#define SPI3_CLK_EN				(RCC_APB1_ENR |= (1 << 15))

#define SPDIFRX_CLK_EN			(RCC_APB1_ENR |= (1 << 16))

#define USART2_CLK_EN			(RCC_APB1_ENR |= (1 << 17))
#define USART3_CLK_EN			(RCC_APB1_ENR |= (1 << 18))
#define UART4_CLK_EN			(RCC_APB1_ENR |= (1 << 19))
#define UART5_CLK_EN			(RCC_APB1_ENR |= (1 << 20))

#define I2C1_CLK_EN				(RCC_APB1_ENR |= (1 << 21))
#define I2C2_CLK_EN				(RCC_APB1_ENR |= (1 << 22))
#define I2C3_CLK_EN				(RCC_APB1_ENR |= (1 << 23))

#define FMPI2C1_CLK_EN			(RCC_APB1_ENR |= (1 << 24))

#define CAN1_CLK_EN				(RCC_APB1_ENR |= (1 << 25))
#define CAN2_CLK_EN				(RCC_APB1_ENR |= (1 << 26))

#define CEC_CLK_EN				(RCC_APB1_ENR |= (1 << 27))
#define PWR_CLK_EN				(RCC_APB1_ENR |= (1 << 28))
#define DAC_CLK_EN				(RCC_APB1_ENR |= (1 << 29))

//RCC_APB2_ENR modifiers
#define TIM1_CLK_EN				(RCC_APB2_ENR |= (1 << 0))
#define TIM8_CLK_EN				(RCC_APB2_ENR |= (1 << 1))

#define USART1_CLK_EN			(RCC_APB2_ENR |= (1 << 4))
#define USART6_CLK_EN			(RCC_APB2_ENR |= (1 << 5))

#define ADC1_CLK_EN				(RCC_APB2_ENR |= (1 << 8))
#define ADC2_CLK_EN				(RCC_APB2_ENR |= (1 << 9))
#define ADC3_CLK_EN				(RCC_APB2_ENR |= (1 << 10))

#define SDIO_CLK_EN				(RCC_APB2_ENR |= (1 << 11))

#define SPI1_CLK_EN				(RCC_APB2_ENR |= (1 << 12))
#define SPI4_CLK_EN				(RCC_APB2_ENR |= (1 << 13))

#define SYSCFG_CLK_EN			(RCC_APB2_ENR |= (1 << 14))

#define TIM9_CLK_EN				(RCC_APB2_ENR |= (1 << 16))
#define TIM10_CLK_EN			(RCC_APB2_ENR |= (1 << 17))
#define TIM11_CLK_EN			(RCC_APB2_ENR |= (1 << 18))

#define SAI1_CLK_EN				(RCC_APB2_ENR |= (1 << 22))
#define SAI2_CLK_EN				(RCC_APB2_ENR |= (1 << 23))



#endif	//_STM32F446RE_H_
