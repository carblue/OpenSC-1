/*
 * libpkcs11.h: Function definitions for the PKCS#11 module loading minilibrary
 *
 * Copyright (C) 2010  Martin Paljak <martin@paljak.pri.ee>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#ifndef __LIBPKCS11_H
#define __LIBPKCS11_H
#include "pkcs11/pkcs11.h"
void *C_LoadModule(const char *name, CK_FUNCTION_LIST_PTR_PTR);
CK_RV C_UnloadModule(void *module);
#endif
