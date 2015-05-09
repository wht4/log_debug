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
 *  function    .
 *
 ******************************************************************************/

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/****** Header-Files **********************************************************/
#include <stdio.h>

/****** Macros ****************************************************************/

/*******************************************************************************
 *  function :    INIT_STDOUT
 ******************************************************************************/
/**
 * Initialize the log acceptor stdout
 * \return      void
 */
#ifdef LOG_STDOUT
	#define LOG_STDOUT_INIT() {  \
	}
#else 
	#define LOG_STDOUT_INIT(...)
#endif /* #ifdef LOG_STDOUT */


/*******************************************************************************
 *  function :    LOG_STDOUT_DEBUG
 ******************************************************************************/
/**
 * Log a debug message to stdout
 * \param[in]   FormatString   String that contains the text to be written
 * \param[in]   Args           Depending on the format string, the function
 *                             may expect a sequence of additional arguments
 * \return      void
 */
#ifdef LOG_STDOUT
	#define LOG_STDOUT_DEBUG(FormatString, Args...) {  \
		flockfile(stdout);                             \
		printf("\n DEBUG:   %s;\n\t",__FUNCTION__);    \
		printf(FormatString, ##Args);                  \
		fflush(stdout);                                \
		funlockfile(stdout);                           \
	}
#else
	#define LOG_STDOUT_DEBUG(...)
#endif /* #ifdef LOG_STDOUT */


/*******************************************************************************
 *  function :    LOG_STDOUT_INFO
 ******************************************************************************/
/**
 * Log an info message to stdout
 * \param[in]   FormatString   String that contains the text to be written
 * \param[in]   Args           Depending on the format string, the function
 *                             may expect a sequence of additional arguments
 * \return      void
 */
#ifdef LOG_STDOUT
	#define LOG_STDOUT_INFO(FormatString, Args...) {   \
		flockfile(stdout);                             \
		printf("\n INFO:    %s;\n\t",__FUNCTION__);    \
		printf(FormatString, ##Args);                  \
		fflush(stdout);                                \
		funlockfile(stdout);                           \
	}
#else
	#define LOG_STDOUT_INFO(...)
#endif /* #ifdef LOG_STDOUT */


/*******************************************************************************
 *  function :    LOG_STDOUT_WARNING
 ******************************************************************************/
/**
 * Log a warning message to stdout
 * \param[in]   FormatString   String that contains the text to be written
 * \param[in]   Args           Depending on the format string, the function
 *                             may expect a sequence of additional arguments
 * \return      void
 */
#ifdef LOG_STDOUT
	#define LOG_STDOUT_WARNING(FormatString, Args...) {  \
		flockfile(stdout);                               \
		printf("\n WARNING: %s;\n\t",__FUNCTION__);      \
		printf(FormatString, ##Args);                    \
		fflush(stdout);                                  \
		funlockfile(stdout);                             \
	}
#else
	#define LOG_STDOUT_WARNING(...)
#endif /* #ifdef LOG_STDOUT */


/*******************************************************************************
 *  function :    LOG_STDOUT_ERROR
 ******************************************************************************/
/**
 * Log an error message to stdout
 * \param[in]   FormatString   String that contains the text to be written
 * \param[in]   Args           Depending on the format string, the function
 *                             may expect a sequence of additional arguments
 * \return      void
 */
#ifdef LOG_STDOUT
	#define LOG_STDOUT_ERROR(FormatString, Args...) {  \
		flockfile(stdout);                             \
		printf("\n ERROR:   %s;\n\t",__FUNCTION__);    \
		printf(FormatString, ##Args);                  \
		fflush(stdout);                                \
		funlockfile(stdout);                           \
}
#else
	#define LOG_STDOUT_ERROR(...)
#endif /* #ifdef LOG_STDOUT */
	

/****** Data types ************************************************************/

/****** Fuction prototypes ****************************************************/

/****** Data ******************************************************************/

/****** Implementation ********************************************************/

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* LOGSTDOUT_H_ */
