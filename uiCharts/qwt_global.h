/* -*- mode: C++ ; c-file-style: "stroustrup" -*- *****************************
 * Qwt Widget Library
 * Copyright (C) 1997   Josef Wilgen
 * Copyright (C) 2002   Uwe Rathmann
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the Qwt License, Version 1.0
 *****************************************************************************/

#ifndef QWT_GLOBAL_H
#define QWT_GLOBAL_H

#include <qglobal.h>

#define QWT_VERSION       0x060100
#define QWT_VERSION_STR   "6.1.0"

#ifdef UICHARTS_LIB
#define QWT_EXPORT __declspec(dllexport)
#else                        // use a Qwt DLL library
#define QWT_EXPORT __declspec(dllimport) 
#endif

#endif // QWT_GLOBAL_H
