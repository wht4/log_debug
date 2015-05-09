# Log for debug messages

## Brief
Generic log mechanism for debug messages

## Description
The log messages are grouped in four different levels (DEBUG, INFO, 
WARNING and ERROR). The log messages could be bypassed to different acceptors
(console, file, ...).
For logging messages just use:
* Debug messages are logged with: DEBUGPRINT("msg");
* Info messages are logged with: INFOPRINT("msg");
* Warning messages are logged with: WARNINGPRINT("msg");
* Error messages are logged with: ERRORPRINT("msg");
