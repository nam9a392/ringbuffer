/*
 * standard.h
 *
 *  Created on: Dec 4, 2023
 *      Author: ADMIN
 */

#ifndef COMMON_STANDARD_H_
#define COMMON_STANDARD_H_

/************************* HAL funtions abstract **********************************/
#define DEV_Digital_Write(_pin, _value)             R_GPIO_PinWrite(_pin, _value)
#define DEV_Digital_Read(_pin)                      R_GPIO_PinRead(_pin)
#define DEV_UART0_Receive_IT(pData,len)				R_Config_SCI0_Serial_Receive((uint8_t *) pData, (uint16_t) len)
#define DEV_UART0_Transmit_IT(pData,len)			R_Config_SCI0_Serial_Send((uint8_t *) pData, (uint16_t) len)
#define DEV_UART0_Transmit(pData,len)				R_SCI0_AsyncTransmit((uint8_t *) pData, (uint16_t) len)

/* Generic Delay function */
//#define DEV_Delay_ms(__xms)                         mdelay(__xms)/* delay x ms */
//#define DEV_Delay_us(__xus)                         udelay(__xus)/* delay x us */
#define DEV_Delay_ms(__xms)                         R_BSP_SoftwareDelay(__xms,BSP_DELAY_MILLISECS)/* delay x ms */
#define DEV_Delay_us(__xus)                         R_BSP_SoftwareDelay(__xus,BSP_DELAY_MICROSECS)/* delay x us */

#endif /* COMMON_STANDARD_H_ */
