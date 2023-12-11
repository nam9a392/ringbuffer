/*
 * ringbuffer.c
 *
 *  Created on: Dec 4, 2023
 *      Author: ADMIN
 */


/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "RingBuffer.h"

/*==================================================================================================
                                           CONSTANTS
==================================================================================================*/


/*==================================================================================================
                                       DEFINES AND MACROS
==================================================================================================*/

#define BUFFER_FULL         1
#define BUFFER_NOT_FULL     0
#define BUFFER_EMPTY        1
#define BUFFER_NOT_EMPTY    0


/*==================================================================================================
*                                              ENUMS
==================================================================================================*/

/*==================================================================================================
*                                  STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                  LOCAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                  GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                       FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL FUNCTIONS
==================================================================================================*/
static void advance_pointer(RingBuffer_t *rb)
{
	//assert input

	if(rb->full)
	{

	}
}
/*==================================================================================================
*                                         GLOBAL FUNCTIONS
==================================================================================================*/

uint8_t RingBuffer_isFull(RingBuffer_t *rb)
{
    return rb->full;
}
uint8_t RingBuffer_isEmpty(RingBuffer_t *rb)
{
    return !rb->full && (rb->head_idx == rb->tail_idx);
}

void RingBufferInit(RingBuffer_t *rb, uint8_t *RingArray, uint16_t RingArrayLength)
{
    rb->buff         = (uint8_t*)RingArray;
    rb->buff_size    = RingArrayLength;
    rb->full         = BUFFER_NOT_FULL;
//    RingBuffer->n_elem       = 0;
//    RingBuffer->max_elem     = 0;
    rb->head_idx         = 0;
    rb->tail_idx         = 0;
}
void RingBuffer_put(RingBuffer_t *rb,void *pData)
{
	// ring buffer full check;
	if(BUFFER_FULL == RingBuffer_isFull(rb))
    {

    }
	memcpy(rb->buff[rb->head_idx * rb->elem_size], pData, rb->elem_size);
    rb->head_idx++;
    if(rb->head_idx == rb->buff_size)
    {
    	rb->head_idx = 0;
    }
    if(rb->head_idx == rb->tail_idx)
    {
    	rb->full = BUFFER_FULL;
    }
}
void RingBuffer_get(RingBuffer_t *rb,void *pData)
{
	if(pData)
	{
		memcpy(pData, &rb->buff[rb->tail_idx * rb->elem_size], rb->elem_size);
	}
	rb->tail_idx++;
	if(rb->tail_idx == rb->buff_size){
		rb->tail_idx = 0;
	}
	if(rb->full)
	{
		rb->full = BUFFER_NOT_FULL;
	}
}

uint8_t RingBuffer_count(RingBuffer_t *rb)
{
	if(rb->full)
	{
		return rb->buff_size;
	}else if(rb->tail_idx <= rb->head_idx){
		return rb->head_idx - rb->tail_idx;
	}else{
		return (rb->buff_size - rb->tail_idx) + rb->head_idx + 1;
	}
}
