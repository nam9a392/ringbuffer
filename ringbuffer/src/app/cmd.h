/*
 * cmd.h
 *
 *  Created on: Dec 12, 2023
 *      Author: ADMIN
 */

#ifndef APP_CMD_H_
#define APP_CMD_H_
/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include <stdint.h>

/*==================================================================================================
                                       DEFINES AND MACROS
==================================================================================================*/
// Function signature for a command handler function.
typedef void (*cmd_func)(const void *);

/*==================================================================================================
*                                  STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
typedef enum{
	TEXT_DISPLAY,
	CURSOR_MOVE,
	IMAGE_CMD
} display_cmd_e;

typedef enum{
	LED,
	BUZZ
} alarm_cmd_e;

typedef enum{
	DISPLAY_CMD,
	ALARM_CMD
} cmd_e;

typedef enum {
    STATE_EVENT_TIMEOUT,
    STATE_EVENT_LINE,
    STATE_EVENT_ENEMY,
    STATE_EVENT_FINISHED,
    STATE_EVENT_COMMAND,
    STATE_EVENT_NONE
} cmd_event_e;

// comand line interface (cli)
// Information about a single command, provided by the client.
typedef struct {
	cmd_e      cmd;         // Command type
	const cmd_func func;    // Command function
} cli_cmd_t;

// Information provided by the client.
// - Command base name
// - Command set info.

struct cmd_client_info {
    const cmd_e   cmd;               // Client name (first command line token)
    const uint8_t num_cmds;          // Number of commands.
    const cli_cmd_t* const cmds; // Pointer to array of command info
};
/*==================================================================================================
*                                              ENUMS
==================================================================================================*/

/*==================================================================================================
                                           CONSTANTS
==================================================================================================*/
//example cmd function

uint8_t foo1(void)
{

}
void    foo2(void)
{

}

cli_cmd_t cmds[]={
	{DISPLAY_CMD, foo1},
	{ALARM_CMD, foo2}
};


/*==================================================================================================
*                                  GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                       FUNCTION API
==================================================================================================*/

void cmd_init(void);
void cmd_execute(void);


#endif /* APP_CMD_H_ */
