/*
\file  win32/adapt.c
\brief Implementation of Win32 adaptation of libc functions
*/

/*
 Changes Notice: This file includes alterations to the original GKlib code
*/
#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)
#include "adapt.h"

pid_t getpid(void)
{
  return GetCurrentProcessId();
}
#endif
