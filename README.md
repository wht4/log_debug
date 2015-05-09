# Log for debug messages

## Brief
Generic log mechanism for debug messages

## Description
The log messages are grouped in four different levels (DEBUG, INFO, 
WARNING and ERROR). The log messages can be bypassed to different acceptors
(console, file, ...).
For logging messages just use:
* Debug messages are logged with: 
```C 
log_debug("msg");
```
* Info messages are logged with: 
```C 
log_info("msg");
```
* Warning messages are logged with: 
```C 
log_warning("msg");
```
* Error messages are logged with: 
```C 
log_error("msg");
```

The logging mechanism must be initialized with:
```C 
log_init();
```
