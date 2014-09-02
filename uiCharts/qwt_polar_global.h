/* -*- mode: C++ ; c-file-style: "stroustrup" -*- *****************************
 * QwtPolar Widget Library
 * Copyright (C) 2008   Uwe Rathmann
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the Qwt License, Version 1.0
 *****************************************************************************/

#ifndef QWT_POLAR_GLOBAL_H
#define QWT_POLAR_GLOBAL_H

#include <qglobal.h>

#define QWT_POLAR_VERSION       0x010000
#define QWT_POLAR_VERSION_STR   "1.0.0"

#ifdef UICHARTS_LIB
#define QWT_POLAR_EXPORT  __declspec(dllexport)
#else                        // use a Qwt DLL library
#define QWT_POLAR_EXPORT  __declspec(dllimport)
#endif

#endif // QWT_POLAR_GLOBAL_H
