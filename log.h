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
 *                  <li> Debug messages are logged with: LOG_DEBUG("msg"); 
 *                  <li> Info messages are logged with: LOG_INFO("msg"); 
 *                  <li> Warning messages are logged with: LOG_WARNING("msg"); 
 *                  <li> Error messages are logged with: LOG_ERROR("msg"); 
 *              </ul>
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
#include "config.h"

#if (CONFIG_LOG_CONSOLE == 1)
    #define LOG_CONSOLE
    #include "LogConsole.h"
#endif // (CONFIG_LOG_CONSOLE == 1)

/****** Macros ****************************************************************/

#if (CONFIG_LOG_LEVEL_DEBUG == 1)
    #define LOG_DEBUG
#endif /* (CONFIG_LOG_LEVEL_DEBUG == 1) */

#if (CONFIG_LOG_LEVEL_INFO == 1)
    #define LOG_INFO
#endif /* (CONFIG_LOG_LEVEL_INFO == 1) */

#if (CONFIG_LOG_LEVEL_WARNING == 1)
    #define LOG_WARNING
#endif /* (CONFIG_LOG_LEVEL_WARNING == 1) */

#if (CONFIG_LOG_LEVEL_ERROR == 1)
    #define LOG_ERROR
#endif /* (CONFIG_LOG_LEVEL_ERROR == 1) */


/*******************************************************************************
 *  function :    LOG_INIT
 ******************************************************************************/
/**
 * Initialize the log mechanism
 * \return      void
 */
#define LOG_INIT() {   \
	LOG_STDOUT_INIT(); \
}



/*******************************************************************************
 *  function :    LOG_DEBUG
 ******************************************************************************/
/**
 * Log a debug message
 * \param[in]   FormatString   String that contains the text to be written
 * \param[in]   Args           Depending on the format string, the function
 *                             may expect a sequence of additional arguments
 * \return      void
 */
#if (CONFIG_LOG_LEVEL_DEBUG > 0)
	#define LOG_DEBUG(FormatString, Args...) {   \
		LOG_STDOUT_DEBUG(FormatString, ##Args);  \
	}
#else
	#define LOG_DEBUG(...)
#endif /* #if (CONFIG_LOG_LEVEL_DEBUG > 0) */ 


/*******************************************************************************
 *  function :    LOG_INFO
 ******************************************************************************/
/**
 * Log an info message
 * \param[in]   FormatString   String that contains the text to be written
 * \param[in]   Args           Depending on the format string, the function
 *                             may expect a sequence of additional arguments
 * \return      void
 */
#if (CONFIG_LOG_LEVEL_INFO > 0)
	#define LOG_INFO(FormatString, Args...) {   \
		LOG_STDOUT_INFO(FormatString, ##Args);  \
	}
#else
	#define LOG_INFO(...)
#endif /* #if (CONFIG_LOG_LEVEL_INFO > 0) */


/*******************************************************************************
 *  function :    LOG_WARNING
 ******************************************************************************/
/**
 * Log a warning message
 * \param[in]   FormatString   String that contains the text to be written
 * \param[in]   Args           Depending on the format string, the function
 *                             may expect a sequence of additional arguments
 * \return      void
 */
#if (CONFIG_LOG_LEVEL_WARNING > 0)
	#define LOG_WARNING(FormatString, Args...) {   \
		LOG_STDOUT_WARNING(FormatString, ##Args);  \
	}
#else
	#define LOG_WARNING(...)
#endif /* #if (CONFIG_LOG_LEVEL_WARNING > 0) */


/*******************************************************************************
 *  function :    LOG_ERROR
 ******************************************************************************/
/**
 * Log an error message
 * \param[in]   FormatString   String that contains the text to be written
 * \param[in]   Args           Depending on the format string, the function
 *                             may expect a sequence of additional arguments
 * \return      void
 */
#if (CONFIG_LOG_LEVEL_ERROR > 0)
	#define LOG_ERROR(FormatString, Args...) {   \
		LOG_STDOUT_ERROR(FormatString, ##Args);  \
	}
#else
	#define LOG_ERROR(...)
#endif /* #if (CONFIG_LOG_LEVEL_ERROR > 0) */


/****** Data types ************************************************************/

/****** Fuction prototypes ****************************************************/

/****** Data ******************************************************************/

/****** Implementation ********************************************************/

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* LOG_H_ */
