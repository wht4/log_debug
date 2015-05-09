#ifndef LOGSTDOUT_H_
#define LOGSTDOUT_H_
/******************************************************************************/
/** \file       logStdout.h
 *******************************************************************************
 *
 *  \brief      Acceptor of log message for logging messages to stdout.
 *
 *  \author     wht4
 *
 ******************************************************************************/
/*
 *  function    log_stdout_init
 *              log_stdout_debug
 *              log_stdout_info
 *              log_stdout_warning
 *              log_stdout_error
 *
 ******************************************************************************/

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/****** Header-Files **********************************************************/
#include <stdio.h>
#include <stdarg.h>

/****** Macros ****************************************************************/	

/****** Data types ************************************************************/

/****** Fuction prototypes ****************************************************/

/****** Data ******************************************************************/

/****** Implementation ********************************************************/

/*******************************************************************************
 *  function :    log_stdout_init
 ******************************************************************************/
/** @brief        Initialize the log acceptor stdout
 *
 *  @type         global
 *
 *  @return       void
 *
 ******************************************************************************/
#ifdef LOG_STDOUT
static inline void 
log_stdout_init(void) {
	/* Nothing to do here */
}
#else 
static inline void 
log_stdout_init(void) {
}
#endif /* #ifdef LOG_STDOUT */


/*******************************************************************************
 *  function :    log_stdout_debug
 ******************************************************************************/
/** @brief        Log a debug message to stdout
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
#ifdef LOG_STDOUT
static inline void 
log_stdout_debug(const char * fmt, va_list args) {
	
	flockfile(stdout);
	printf("\n DEBUG:   %s;\n          ",__FUNCTION__);
	vprintf(fmt, args);
	fflush(stdout); 
	funlockfile(stdout); 
}
#else
static inline void 
log_stdout_debug(const char * fmt, ...) {
}
#endif /* #ifdef LOG_STDOUT */


/*******************************************************************************
 *  function :    log_stdout_info
 ******************************************************************************/
/** @brief        Log an info message to stdout
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
#ifdef LOG_STDOUT
static inline void 
log_stdout_info(const char * fmt, va_list args) {
		
	flockfile(stdout);
	printf("\n INFO:    %s;\n          ",__FUNCTION__);
	vprintf(fmt, args);
	fflush(stdout); 
	funlockfile(stdout); 
}
#else
static inline void 
log_stdout_info(const char * fmt, ...) {
}
#endif /* #ifdef LOG_STDOUT */


/*******************************************************************************
 *  function :    log_stdout_warning
 ******************************************************************************/
/** @brief        Log a warning message to stdout
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
#ifdef LOG_STDOUT
static inline void 
log_stdout_warning(const char * fmt, va_list args) {

	flockfile(stdout);
	printf("\n WARNING: %s;\n          ",__FUNCTION__);
	vprintf(fmt, args);
	fflush(stdout); 
	funlockfile(stdout); 
}
#else
static inline void 
log_stdout_warning(const char * fmt, ...) {
}
#endif /* #ifdef LOG_STDOUT */


/*******************************************************************************
 *  function :    log_stdout_error
 ******************************************************************************/
/** @brief        Log an error message to stdout
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
#ifdef LOG_STDOUT
static inline void 
log_stdout_error(const char * fmt, va_list args) {
	
	flockfile(stdout);
	printf("\n ERROR:   %s;\n          ",__FUNCTION__);
	vprintf(fmt, args);
	fflush(stdout); 
	funlockfile(stdout); 
}
#else
static inline void 
log_stdout_error(const char * fmt, ...) {
}
#endif /* #ifdef LOG_STDOUT */



#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* LOGSTDOUT_H_ */
