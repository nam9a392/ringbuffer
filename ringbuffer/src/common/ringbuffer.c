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
static inline void advance_pointer(RingBuffer_t *rb);
static inline void retreat_pointer(RingBuffer_t *rb);
/*==================================================================================================
*                                         LOCAL FUNCTIONS
==================================================================================================*/
static inline void advance_pointer(RingBuffer_t *rb)
{
	//assert input

	if(BUFFER_FULL == RingBuffer_isFull(rb))
	{
		retreat_pointer(rb);
	}
	rb->head_idx++;
	if(rb->head_idx == rb->buff_size)
	{
		rb->head_idx = 0;
	}
	if(rb->head_idx == rb->tail_idx)
	{
		rb->is_full = BUFFER_FULL;
	}
}
static inline void retreat_pointer(RingBuffer_t *rb)
{
	rb->tail_idx++;
	if(rb->tail_idx == rb->buff_size){
		rb->tail_idx = 0;
	}
	if(BUFFER_FULL == rb->is_full)
	{
		rb->is_full = BUFFER_NOT_FULL;
	}
}
/*==================================================================================================
*                                         GLOBAL FUNCTIONS
==================================================================================================*/

uint8_t RingBuffer_isFull(RingBuffer_t *rb)
{
    return rb->is_full ? BUFFER_FULL : BUFFER_NOT_FULL;
}
uint8_t RingBuffer_isEmpty(RingBuffer_t *rb)
{
    return (!rb->is_full && (rb->head_idx == rb->tail_idx)) ? BUFFER_EMPTY : BUFFER_NOT_EMPTY;
}

// Initializes the ring buffer for use.
void RingBufferInit(RingBuffer_t *rb, uint8_t *RingArray, uint16_t RingArrayLength)
{
    rb->buff         = (uint8_t*)RingArray;
    rb->buff_size    = RingArrayLength;
    rb->is_full         = BUFFER_NOT_FULL;
//    RingBuffer->n_elem       = 0;
//    RingBuffer->max_elem     = 0;
    rb->head_idx         = 0;
    rb->tail_idx         = 0;
}

// Writes data into the ring buffer.
void RingBuffer_put(RingBuffer_t *rb,void *pData)
{
	// ring buffer full check;
	// If the buffer is full, the oldest value will be overwritten
	if(BUFFER_FULL == RingBuffer_isFull(rb))
    {
		retreat_pointer(rb);
    }
	memcpy(&rb->buff[rb->head_idx * rb->elem_size], pData, rb->elem_size);
	advance_pointer(rb);
}

// Reads (and extracts) data from the ring buffer.
void RingBuffer_get(RingBuffer_t *rb,void *pData)
{
	if((pData) && (BUFFER_NOT_EMPTY == RingBuffer_isEmpty(rb)))
	{
		memcpy(pData, &rb->buff[rb->tail_idx * rb->elem_size], rb->elem_size);
	}
	retreat_pointer(rb);
}

// Peeks at a element at the given position in the ring buffer, without
// extracting it.
void RingBuffer_getPeak(RingBuffer_t *rb,void *pData)
{
	if((pData) && (BUFFER_NOT_EMPTY == RingBuffer_isEmpty(rb)))
	{
		memcpy(pData, &rb->buff[rb->tail_idx * rb->elem_size], rb->elem_size);
	}
}

// Returns the amount of remaining space (in bytes) available for writing into the buffer.
uint8_t RingBuffer_count(RingBuffer_t *rb)
{
	if(BUFFER_FULL == RingBuffer_isFull(rb))
	{
		return rb->buff_size;
	}else if(rb->tail_idx <= rb->head_idx){
		return rb->head_idx - rb->tail_idx;
	}else{
		return (rb->buff_size - rb->tail_idx) + rb->head_idx + 1;
	}
}
