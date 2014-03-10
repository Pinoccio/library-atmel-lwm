#ifdef __cplusplus
extern "C" {
#endif
/**
 * \file nwkGroup.h
 *
 * \brief Multicast group management implementation
 *
 * Copyright (C) 2012-2014, Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 * $Id: nwkGroup.h 9157 2014-01-28 19:32:53Z ataradov $
 *
 */

#ifndef _NWK_GROUP_H_
#define _NWK_GROUP_H_

/*- Includes ---------------------------------------------------------------*/
#include <stdint.h>
#include "../sys/sysTypes.h"

#ifdef NWK_ENABLE_MULTICAST

/*- Definitions ------------------------------------------------------------*/
#define NWK_MULTICAST_HEADER_SIZE    2

/*- Prototypes -------------------------------------------------------------*/
bool NWK_GroupIsMember(uint16_t group);
bool NWK_GroupAdd(uint16_t group);
bool NWK_GroupRemove(uint16_t group);
uint16_t* NWK_GetGroups(void);

void nwkGroupInit(void);

#endif // NWK_ENABLE_MULTICAST

#endif // _NWK_FRAME_H_
#ifdef __cplusplus
}
#endif
