/**
  *      __            ____
  *     / /__ _  __   / __/                      __  
  *    / //_/(_)/ /_ / /  ___   ____ ___  __ __ / /_ 
  *   / ,<  / // __/_\ \ / _ \ / __// _ \/ // // __/ 
  *  /_/|_|/_/ \__//___// .__//_/   \___/\_,_/ \__/  
  *                    /_/   github.com/KitSprout    
  * 
  * @file    boardConfig.h
  * @author  KitSprout
  * @date    16-Mar-2017
  * @brief   
  * 
  */

/* Define to prevent recursive inclusion ---------------------------------------------------*/
#ifndef __BOARDCONFIG_H
#define __BOARDCONFIG_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes --------------------------------------------------------------------------------*/
/* Exported types --------------------------------------------------------------------------*/
/* Exported constants ----------------------------------------------------------------------*/

#define KS_HW_BOARD_NAME              "QCopterFCs"
#define KS_HW_MCU_NAME                "STM32F411CE"

#define KS_HW_CLOCK_SOUCE_HSE
//#define KS_HW_USE_CLOCK_SOUCE_HSI

//#define KS_HW_UART_HAL_LIBRARY
//#define KS_HW_SPI_HAL_LIBRARY

/* -------- LED and KEY */
#define LED_R_PIN                     GPIO_PIN_13
#define LED_R_GPIO_PORT               GPIOC
#define LED_R_Set()                   __GPIO_SET(LED_R_GPIO_PORT, LED_R_PIN)
#define LED_R_Reset()                 __GPIO_RST(LED_R_GPIO_PORT, LED_R_PIN)
#define LED_R_Toggle()                __GPIO_TOG(LED_R_GPIO_PORT, LED_R_PIN)

#define LED_G_PIN                     GPIO_PIN_14
#define LED_G_GPIO_PORT               GPIOC
#define LED_G_Set()                   __GPIO_SET(LED_G_GPIO_PORT, LED_G_PIN)
#define LED_G_Reset()                 __GPIO_RST(LED_G_GPIO_PORT, LED_G_PIN)
#define LED_G_Toggle()                __GPIO_TOG(LED_G_GPIO_PORT, LED_G_PIN)

#define LED_B_PIN                     GPIO_PIN_15
#define LED_B_GPIO_PORT               GPIOC
#define LED_B_Set()                   __GPIO_SET(LED_B_GPIO_PORT, LED_B_PIN)
#define LED_B_Reset()                 __GPIO_RST(LED_B_GPIO_PORT, LED_B_PIN)
#define LED_B_Toggle()                __GPIO_TOG(LED_B_GPIO_PORT, LED_B_PIN)

#define KEY_PIN                       GPIO_PIN_2
#define KEY_GPIO_PORT                 GPIOB
#define KEY_Read()                    (__GPIO_READ(KEY_GPIO_PORT, KEY_PIN) == KEY_PIN)

/* -------- UART Serial */
#define SERIAL_MAX_TXBUF              16
#define SERIAL_MAX_RXBUF              16

#define SERIAL_UARTx                  USART1
#define SERIAL_UARTx_CLK_ENABLE()     __HAL_RCC_USART1_CLK_ENABLE()
#define SERIAL_UARTx_IRQn             USART1_IRQn
#define SERIAL_UARTx_IRQn_PREEMPT     0x0F
#define SERIAL_UARTx_IRQn_SUB         1

#define SERIAL_UARTx_FORCE_RESET()    __HAL_RCC_USART1_FORCE_RESET()
#define SERIAL_UARTx_RELEASE_RESET()  __HAL_RCC_USART1_RELEASE_RESET()

#define SERIAL_TX_PIN                 GPIO_PIN_6
#define SERIAL_TX_GPIO_PORT           GPIOB
#define SERIAL_TX_AF                  GPIO_AF7_USART1

#define SERIAL_RX_PIN                 GPIO_PIN_7
#define SERIAL_RX_GPIO_PORT           GPIOB
#define SERIAL_RX_AF                  GPIO_AF7_USART1

#define SERIAL_BAUDRATE               115200
#define SERIAL_BYTESIZE               UART_WORDLENGTH_8B
#define SERIAL_STOPBITS               UART_STOPBITS_1
#define SERIAL_PARITY                 UART_PARITY_NONE
#define SERIAL_HARDWARECTRL           UART_HWCONTROL_NONE
#define SERIAL_MODE                   UART_MODE_TX_RX
#define SERIAL_OVERSAMPLE             UART_OVERSAMPLING_16

/* -------- Radio Frequency */

#define NRF24_MAX_TXBUF               32
#define NRF24_MAX_RXBUF               32

#define NRF24_SPIx                    SPI2
#define NRF24_SPIx_CLK_ENABLE()       __HAL_RCC_SPI2_CLK_ENABLE()
#define NRF24_SPIx_IRQn               SPI3_IRQn
#define NRF24_SPIx_IRQn_PREEMPT       0x0F
#define NRF24_SPIx_IRQn_SUB           1
#define NRF24_SPIx_FORCE_RESET()      __HAL_RCC_SPI2_FORCE_RESET()
#define NRF24_SPIx_RELEASE_RESET()    __HAL_RCC_SPI2_RELEASE_RESET()
#define NRF24_SPIx_SPEED              SPI_BAUDRATEPRESCALER_4

#define NRF24_SCK_PIN                 GPIO_PIN_13
#define NRF24_SCK_GPIO_PORT           GPIOB
#define NRF24_SCK_AF                  GPIO_AF5_SPI2

#define NRF24_SDO_PIN                 GPIO_PIN_14
#define NRF24_SDO_GPIO_PORT           GPIOB
#define NRF24_SDO_AF                  GPIO_AF5_SPI2

#define NRF24_SDI_PIN                 GPIO_PIN_15
#define NRF24_SDI_GPIO_PORT           GPIOB
#define NRF24_SDI_AF                  GPIO_AF5_SPI2

#define NRF24_CSN_PIN                 GPIO_PIN_12
#define NRF24_CSN_GPIO_PORT           GPIOB
#define NRF24_CSN_H()                 __GPIO_SET(NRF24_CSN_GPIO_PORT, NRF24_CSN_PIN)
#define NRF24_CSN_L()                 __GPIO_RST(NRF24_CSN_GPIO_PORT, NRF24_CSN_PIN)

#define NRF24_CE_PIN                  GPIO_PIN_9
#define NRF24_CE_GPIO_PORT            GPIOA
#define NRF24_CE_H()                  __GPIO_SET(NRF24_CE_GPIO_PORT, NRF24_CE_PIN)
#define NRF24_CE_L()                  __GPIO_RST(NRF24_CE_GPIO_PORT, NRF24_CE_PIN)

#define NRF24_IRQ_PIN                 GPIO_PIN_10
#define NRF24_IRQ_GPIO_PORT           GPIOA
#define NRF24_IRQ_Read()              (__GPIO_READ(NRF24_IRQ_GPIO_PORT, NRF24_IRQ_PIN) == NRF24_IRQ_PIN)
#define NRF24_IRQ_EXTIx_IRQ           EXTI15_10_IRQn
#define NRF24_IRQ_EXTIx_IRQn_PREEMPT  0x0F
#define NRF24_IRQ_EXTIx_IRQn_SUB      1

/* Exported functions ----------------------------------------------------------------------*/

#ifdef __cplusplus
}
#endif

#endif

/*************************************** END OF FILE ****************************************/