#ifndef _DEBUG_UTILS_H_
#define _DEBUG_UTILS_H_

  #ifdef __DEBUG__
    #ifndef __DEBUG_PORT__
      #define __DEBUG_PORT__ Serial
    #endif
    
    #define LOG(...)        \
        __DEBUG_PORT__.print(millis());     \
        __DEBUG_PORT__.print(": ");         \
        __DEBUG_PORT__.print(__PRETTY_FUNCTION__); \
        __DEBUG_PORT__.print(' ');          \
        __DEBUG_PORT__.print(__FILE__);     \
        __DEBUG_PORT__.print(':');          \
        __DEBUG_PORT__.print(__LINE__);     \
        __DEBUG_PORT__.print(' ');          \
        __DEBUG_PORT__.println(__VA_ARGS__);
  #else
    #define LOG(...) 
  #endif


#endif
