/*
<<<<<<< HEAD
 * Copyright (c) 2012-2013 The Linux Foundation. All rights reserved.
=======
 * Copyright (c) 2012-2013, The Linux Foundation. All rights reserved.
>>>>>>> d6ceb2b... staging: prima: Add prima wlan driver
 *
 * Previously licensed under the ISC license by Qualcomm Atheros, Inc.
 *
 *
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all
 * copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
 * WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE
 * AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
 * PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */
<<<<<<< HEAD

/*
 * This file was originally distributed by Qualcomm Atheros, Inc.
 * under proprietary terms before Copyright ownership was assigned
 * to the Linux Foundation.
=======
/*
 * Copyright (c) 2012, The Linux Foundation. All rights reserved.
 *
 * Previously licensed under the ISC license by Qualcomm Atheros, Inc.
 *
 *
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all
 * copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
 * WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE
 * AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
 * PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
>>>>>>> d6ceb2b... staging: prima: Add prima wlan driver
 */

#if !defined( __WLAN_QCT_OS_TYPE_H )
#define __WLAN_QCT_OS_TYPE_H

/**=========================================================================
  
  \file  wlan_qct_pal_type.h
  
  \brief define basi types PAL exports. wpt = (Wlan Pal Type)
               
   Definitions for platform dependent. This is for Linux/Android
  
   Copyright 2010 (c) Qualcomm, Incorporated.  All Rights Reserved.
   
   Qualcomm Confidential and Proprietary.
  
  ========================================================================*/

<<<<<<< HEAD
#include <linux/types.h>

typedef u32 wpt_uint32;

typedef s32 wpt_int32;

typedef u16 wpt_uint16;

typedef s16 wpt_int16;

typedef u8 wpt_uint8;

typedef wpt_uint8 wpt_byte;

typedef s8 wpt_int8;

typedef wpt_uint8 wpt_boolean;

typedef u64 wpt_uint64;

typedef s64 wpt_int64;
=======

typedef unsigned long wpt_uint32;

typedef signed long wpt_int32;

typedef unsigned short wpt_uint16;

typedef signed short wpt_int16;

typedef unsigned char wpt_uint8;

typedef wpt_uint8 wpt_byte;

typedef signed char wpt_int8;

typedef wpt_uint8 wpt_boolean; 

typedef unsigned long long wpt_uint64;

typedef long long wpt_int64;
>>>>>>> d6ceb2b... staging: prima: Add prima wlan driver

#define WPT_INLINE __inline__
#define WPT_STATIC static


#endif // __WLAN_QCT_OS_TYPE_H
