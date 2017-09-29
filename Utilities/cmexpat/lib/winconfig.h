/*================================================================
** Copyright 2000, Clark Cooper
** All rights reserved.
**
** This is free software. You are permitted to copy, distribute, or modify
** it under the terms of the MIT/X license (contained in the COPYING file
** with this distribution.)
*/

#ifndef WINCONFIG_H
#define WINCONFIG_H

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#undef WIN32_LEAN_AND_MEAN

#include <memory.h>
#include <string.h>


#if defined(HAVE_EXPAT_CONFIG_H)  /* e.g. MinGW */
# include <expat_config.h>
#else  /* !defined(HAVE_EXPAT_CONFIG_H) */


#define XML_NS 1
#define XML_DTD 1
#define XML_CONTEXT_BYTES 1024

/* we will assume all Windows platforms are little endian */
#define BYTEORDER 1234

/* Windows has memmove() available. */
#define HAVE_MEMMOVE


#endif /* !defined(HAVE_EXPAT_CONFIG_H) */

#if defined(_MSC_VER)
# pragma warning(push,1)
# pragma warning(disable:4311)   /* pointer truncation */
#endif

#endif /* ndef WINCONFIG_H */
