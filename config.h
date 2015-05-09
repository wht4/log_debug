#ifndef CONFIG_H_
#define CONFIG_H_
/******************************************************************************/
/** \file       config.h
 *******************************************************************************
 *
 *  \brief      Basic configurations
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

/*******************************************************************************
 *  Log mechanism configuration
 ******************************************************************************/
/* Set CONFIG_LOG_CONSOLE to zero if you don't wan't any console output of    */
/* the logging mechanism. Further the log messages are grouped in different   */
/* levels. Just set a log level to zero and all messages of this level will   */
/* not appear.                                                                */
#define CONFIG_LOG_STDOUT           ( 1 ) /*!< Enable the log acceptor stdout */
#define CONFIG_LOG_LEVEL_DEBUG      ( 1 ) /*!< Enable debug log messages */
#define CONFIG_LOG_LEVEL_INFO       ( 1 ) /*!< Enable info log messages */
#define CONFIG_LOG_LEVEL_WARNING    ( 1 ) /*!< Enable warning log messages */
#define CONFIG_LOG_LEVEL_ERROR      ( 1 ) /*!< Enable error log messages */

/****** Macros ****************************************************************/

/****** Data types ************************************************************/

/****** Fuction prototypes ****************************************************/

/****** Data ******************************************************************/

/****** Implementation ********************************************************/

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* CONFIG_H_ */
