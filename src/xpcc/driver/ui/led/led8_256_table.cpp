// coding: utf-8
// ----------------------------------------------------------------------------
/* Copyright (c) 2011, Roboterclub Aachen e.V.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of the Roboterclub Aachen e.V. nor the
 *       names of its contributors may be used to endorse or promote products
 *       derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY ROBOTERCLUB AACHEN E.V. ''AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL ROBOTERCLUB AACHEN E.V. BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
// ----------------------------------------------------------------------------

#include "led_table.hpp"

namespace xpcc
{
	namespace led
	{
		// 2.0 gamma, 8bit to 8bit map
		FLASH_STORAGE(uint8_t PwmTable8_256[]) = {
			0x0,0x1,0x1,0x1,0x1,0x1,0x1,0x1,0x1,0x1,0x1,0x1,0x1,0x1,0x1,0x1,
			0x1,0x1,0x1,0x1,0x1,0x1,0x1,0x2,0x2,0x2,0x2,0x2,0x3,0x3,0x3,0x3,
			0x4,0x4,0x4,0x4,0x5,0x5,0x5,0x5,0x6,0x6,0x6,0x7,0x7,0x7,0x8,0x8,
			0x9,0x9,0x9,0xA,0xA,0xB,0xB,0xB,0xC,0xC,0xD,0xD,0xE,0xE,0xF,0xF,
			0x10,0x10,0x11,0x11,0x12,0x12,0x13,0x13,0x14,0x14,0x15,0x16,0x16,0x17,0x17,0x18,
			0x19,0x19,0x1A,0x1B,0x1B,0x1C,0x1D,0x1D,0x1E,0x1F,0x1F,0x20,0x21,0x21,0x22,0x23,
			0x24,0x24,0x25,0x26,0x27,0x28,0x28,0x29,0x2A,0x2B,0x2C,0x2C,0x2D,0x2E,0x2F,0x30,
			0x31,0x32,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39,0x3A,0x3B,0x3C,0x3D,0x3E,0x3F,
			0x40,0x41,0x42,0x43,0x44,0x45,0x46,0x47,0x48,0x49,0x4A,0x4B,0x4C,0x4D,0x4F,0x50,
			0x51,0x52,0x53,0x54,0x55,0x57,0x58,0x59,0x5A,0x5B,0x5D,0x5E,0x5F,0x60,0x61,0x63,
			0x64,0x65,0x66,0x68,0x69,0x6A,0x6C,0x6D,0x6E,0x70,0x71,0x72,0x74,0x75,0x76,0x78,
			0x79,0x7A,0x7C,0x7D,0x7F,0x80,0x81,0x83,0x84,0x86,0x87,0x89,0x8A,0x8C,0x8D,0x8F,
			0x90,0x92,0x93,0x95,0x96,0x98,0x99,0x9B,0x9C,0x9E,0xA0,0xA1,0xA3,0xA4,0xA6,0xA8,
			0xA9,0xAB,0xAC,0xAE,0xB0,0xB1,0xB3,0xB5,0xB6,0xB8,0xBA,0xBC,0xBD,0xBF,0xC1,0xC3,
			0xC4,0xC6,0xC8,0xCA,0xCB,0xCD,0xCF,0xD1,0xD3,0xD4,0xD6,0xD8,0xDA,0xDC,0xDE,0xE0,
			0xE1,0xE3,0xE5,0xE7,0xE9,0xEB,0xED,0xEF,0xF1,0xF3,0xF5,0xF7,0xF9,0xFB,0xFD,0xFF
		};
	}
}


