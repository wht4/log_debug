/******************************************************************************/
/** @file       example.c
 *******************************************************************************
 *
 *  @brief      Short example for the usage of the log mechanism
 *
 *  @author     wht4
 *
 *  @version    <ul>
 *                  <li> V1.0; May 2015; wht4; initial release
 *              </ul>
 *
 ******************************************************************************/
/*
 *  functions  global:
 *              main
 *  functions  local:
 *              .
 *
 ******************************************************************************/

/****** Header-Files **********************************************************/
#include <stdlib.h>
#include <unistd.h>

#include "log.h"

/****** Macros ****************************************************************/

/****** Data types ************************************************************/

/****** Fuction prototypes ****************************************************/
 static void
 example_whithinFct(void);
 
/****** Data ******************************************************************/

/****** Implementation ********************************************************/

/*******************************************************************************
 *  function :    main
 ******************************************************************************/
int 
main(int argc, char **argv) {
	
	int i = 0;
	
	/* Prevent compiler warnings */
	(void) argc;
	(void) argv;
	
	LOG_DEBUG("This is a debug message without extra arguments");
	LOG_INFO("This is a info message without extra arguments");
	LOG_WARNING("This is a warning message without extra arguments");
	LOG_ERROR("This is a error message without extra arguments");
	
	example_whithinFct();
	
	for(i = 0; i < 6; i++) {
		LOG_DEBUG("Loop count: %d", i);
		sleep(1);
	}
	
	return (EXIT_SUCCESS);
}


/*******************************************************************************
 *  function :    example_whithinFct
 ******************************************************************************/
 static void
 example_whithinFct(void) {
	 
	LOG_DEBUG("Debug message within function");
	LOG_INFO("Info message within function");
	LOG_WARNING("Warning message within function");
	LOG_ERROR("Error message within function");
}
