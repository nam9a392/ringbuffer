/*
 * assert_handler.c
 *
 *  Created on: Dec 14, 2023
 *      Author: ADMIN
 */

#define ASSERT(expression)                                                                         \
    do {                                                                                           \
        if (!(expression)) {                                                                       \
            assert_handler(0);                                                                     \
        }                                                                                          \
    } while (0)
#endif

void assert_handler(uint16_t program_counter);
