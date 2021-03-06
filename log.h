#ifndef LOG_H_
#define LOG_H_
/******************************************************************************/
/** \file       log.h
 *******************************************************************************
 *
 *  \brief      Generic log mechanism for debug messages
 *              <p>
 *              The log messages are grouped in four different levels (DEBUG,
 *              INFO, WARNING and ERROR). The log messages can be bypassed to
 *              different acceptors (console, file, ...).
 *              <p>
 *              For logging messages just use:
 *              <ul>
 *                  <li> Debug messages are logged with: log_debug("msg");
 *                  <li> Info messages are logged with: log_info("msg");
 *                  <li> Warning messages are logged with: log_warning("msg");
 *                  <li> Error messages are logged with: log_error("msg");
 *              </ul>
 *
 *  \author     wht4
 *
 ******************************************************************************/
/*
 *  function    log_init
 *              log_debug
 *              log_info
 *              log_warning
 *              log_error
 *
 ******************************************************************************/

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/****** Header-Files **********************************************************/
#include <stdarg.h>

#include "config.h"
#include "logStdout.h"

/****** Macros ****************************************************************/

/****** Data types ************************************************************/

/****** Fuction prototypes ****************************************************/

/****** Data ******************************************************************/

/****** Implementation ********************************************************/


/*******************************************************************************
 *  function :    log_debug
 ******************************************************************************/
/** @brief        Initialize log mechanism
 *
 *  @type         global
 *
 *  @return       void
 *
 ******************************************************************************/
static inline void
log_init(void) {

    log_stdout_init();
}


/*******************************************************************************
 *  function :    log_debug
 ******************************************************************************/
/** @brief        Log a debug message
 *
 *  @type         global
 *
 *  @param[in]    fmt    String that contains the text to be written with the
 *                       expected format
 *  @param[in]    ...    Variadic arguments
 *
 *  @return       void
 *
 ******************************************************************************/
#if (CONFIG_LOG_LEVEL_DEBUG > 0)
static inline void
log_debug(const char * fmt, ...) {

    va_list args;
    va_start(args, fmt);
    log_stdout_debug(fmt, args);
    /* add other acceptors here */
    va_end(args);
}
#else
static inline void
log_debug(const char * fmt, ...) {

    /* Prevent compiler warnings */
    (void) fmt;
}
#endif /* #if (CONFIG_LOG_LEVEL_DEBUG > 0) */


/*******************************************************************************
 *  function :    log_info
 ******************************************************************************/
/** @brief        Log an info message
 *
 *  @type         global
 *
 *  @param[in]    fmt    String that contains the text to be written with the
 *                       expected format
 *  @param[in]    ...    Variadic arguments
 *
 *  @return       void
 *
 ******************************************************************************/
#if (CONFIG_LOG_LEVEL_INFO > 0)
static inline void
log_info(const char * fmt, ...) {

    va_list args;
    va_start(args, fmt);
    log_stdout_info(fmt, args);
    /* add other acceptors here */
    va_end(args);
}
#else
static inline void
log_info(const char * fmt, ...) {

    /* Prevent compiler warnings */
    (void) fmt;
}
#endif /* #if (CONFIG_LOG_LEVEL_INFO > 0) */


/*******************************************************************************
 *  function :    log_warning
 ******************************************************************************/
/** @brief        Log a warning message
 *
 *  @type         global
 *
 *  @param[in]    fmt    String that contains the text to be written with the
 *                       expected format
 *  @param[in]    ...    Variadic arguments
 *
 *  @return       void
 *
 ******************************************************************************/
#if (CONFIG_LOG_LEVEL_WARNING > 0)
static inline void
log_warning(const char * fmt, ...) {

    va_list args;
    va_start(args, fmt);
    log_stdout_warning(fmt, args);
    /* add other acceptors here */
    va_end(args);
}
#else
static inline void
log_warning(const char * fmt, ...) {

    /* Prevent compiler warnings */
    (void) fmt;
}
#endif /* #if (CONFIG_LOG_LEVEL_WARNING > 0) */


/*******************************************************************************
 *  function :    log_error
 ******************************************************************************/
/** @brief        Log an error message
 *
 *  @type         global
 *
 *  @param[in]    fmt    String that contains the text to be written with the
 *                       expected format
 *  @param[in]    ...    Variadic arguments
 *
 *  @return       void
 *
 ******************************************************************************/
#if (CONFIG_LOG_LEVEL_ERROR > 0)
static inline void
log_error(const char * fmt, ...) {

    va_list args;
    va_start(args, fmt);
    log_stdout_error(fmt, args);
    /* add other acceptors here */
    va_end(args);
}
#else
static inline void
log_error(const char * fmt, ...) {

    /* Prevent compiler warnings */
    (void) fmt;
}
#endif /* #if (CONFIG_LOG_LEVEL_WARNING > 0) */



#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* LOG_H_ */
