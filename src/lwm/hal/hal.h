/**
 * \file hal.h
 *
 * \brief Arduino implementation of the HAL interface
 *
 * Copyright (C) 2014, Matthijs Kooijman <matthijs@stdin.nl>
 *
 * This file is licensed under the 2-clause BSD license:
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY
 * WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _HAL_H_
#define _HAL_H_

#include <Arduino.h>

inline void HAL_Init(void) { /* Nothing to do */ }
inline void HAL_Delay(uint8_t us) { delay(us); }

#define HAL_GPIO_PIN(name, port, bit) \
  inline void    HAL_GPIO_##name##_set(void)      { PORT##port |= (1 << bit); } \
  inline void    HAL_GPIO_##name##_clr(void)      { PORT##port &= ~(1 << bit); } \
  inline void    HAL_GPIO_##name##_toggle(void)   { PORT##port ^= (1 << bit); } \
  inline void    HAL_GPIO_##name##_in(void)       { DDR##port &= ~(1 << bit); PORT##port &= ~(1 << bit); } \
  inline void    HAL_GPIO_##name##_out(void)      { DDR##port |= (1 << bit); } \
  inline void    HAL_GPIO_##name##_pullup(void)   { PORT##port |= (1 << bit); } \
  inline uint8_t HAL_GPIO_##name##_read(void)     { return (PIN##port & (1 << bit)) != 0; } \
  inline uint8_t HAL_GPIO_##name##_state(void)    { return (DDR##port & (1 << bit)) != 0; }
  
// Pinoccio Scout pins
HAL_GPIO_PIN(PHY_RST,    E, 2); // D6
HAL_GPIO_PIN(PHY_IRQ,    E, 6); // D7
HAL_GPIO_PIN(PHY_SLP_TR, D, 5); // D8
HAL_GPIO_PIN(PHY_CS,     B, 0);
HAL_GPIO_PIN(PHY_MISO,   B, 3);
HAL_GPIO_PIN(PHY_MOSI,   B, 2);
HAL_GPIO_PIN(PHY_SCK,    B, 1);
#endif // _HAL_H_

