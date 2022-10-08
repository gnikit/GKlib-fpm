/*
\file  win32/adapt.h
\brief Declaration of Win32 adaptation of POSIX functions and types
*/

/*
 Changes Notice: This file includes alterations to the original GKlib code
*/
#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)
#ifndef _WIN32_ADAPT_H_
#define _WIN32_ADAPT_H_

#include <windows.h>

typedef DWORD pid_t;

pid_t getpid(void);

#endif  /* _WIN32_ADAPT_H_ */
#endif
