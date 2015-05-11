/******************************************************************************/
/** @file       example.c
 *******************************************************************************
 *
 *  @brief      Short example for the usage of the log mechanism
 *
 *  @author     wht4
 *
 *  @version    Last modifications
 *                 \li V1.0, May 2014, wht4, initial release
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

    log_init();

    log_debug("This is a debug message without extra arguments");
    log_info("This is a info message without extra arguments");
    log_warning("This is a warning message without extra arguments");
    log_error("This is a error message without extra arguments");

    example_whithinFct();

    for(i = 0; i < 6; i++) {
        log_debug("Loop count: %d", i);
        sleep(1);
    }

    return (EXIT_SUCCESS);
}


/*******************************************************************************
 *  function :    example_whithinFct
 ******************************************************************************/
static void
example_whithinFct(void) {

    log_debug("Debug message within function");
    log_info("Info message within function");
    log_warning("Warning message within function");
    log_error("Error message within function");
}
