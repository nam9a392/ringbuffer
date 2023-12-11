/*
 * ringbuffer.h
 *
 *  Created on: Dec 4, 2023
 *      Author: ADMIN
 */

#ifndef COMMON_RINGBUFFER_H_
#define COMMON_RINGBUFFER_H_


/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>
/*==================================================================================================
                                       DEFINES AND MACROS
==================================================================================================*/
///**
// * @brief Std_Return_Type
// */
typedef enum
{
	E_OK = 0U,
	E_NOT_OK = 1U
} Std_Return_Type;


/*==================================================================================================
                                           CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                              ENUMS
==================================================================================================*/
//typedef enum{
//	E_OK      = 0,
//	E_NOT_OK  = 1
//}rb_ret_e;

typedef enum{
	OVERLAPPING   = 0,
	DISCARD      = 1
}rb_type_e;

typedef struct{
    uint8_t    *buff;
    uint16_t   buff_size;
    uint8_t    elem_size;
    uint16_t   tail_idx; // index of the next empty slot
    uint16_t   head_idx; // index of the oldest element
    rb_type_e  type;
    uint8_t    full;
//    uint16_t   n_elem;
//    uint16_t   max_elem;
}RingBuffer_t;


typedef struct{
    uint16_t head;
    uint16_t tail;
}rb_queue_obj_t;

/*==================================================================================================
*                                  STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                  GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                       FUNCTION PROTOTYPES
==================================================================================================*/
uint8_t RingBuffer_isFull(RingBuffer_t *rb);
uint8_t RingBuffer_isEmpty(RingBuffer_t *rb);
void RingBufferInit(RingBuffer_t *rb, uint8_t *RingArray, uint16_t RingArrayLength);
void RingBuffer_put(RingBuffer_t *rb,void *pData);
void RingBuffer_get(RingBuffer_t *rb,void *pData);


#endif /* COMMON_RINGBUFFER_H_ */
