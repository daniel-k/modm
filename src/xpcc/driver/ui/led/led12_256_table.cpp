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
		// 2.0 gamma, 8bit to 12bit map
		FLASH_STORAGE(uint16_t PwmTable12_256[]) = {
			0x0,0x1,0x1,0x1,0x1,0x1,0x2,0x3,0x4,0x5,0x6,0x7,0x9,0xA,0xC,0xE,0x10,0x12,0x14,0x16,
			0x19,0x1B,0x1E,0x21,0x24,0x27,0x2A,0x2D,0x31,0x34,0x38,0x3C,0x40,0x44,0x48,0x4D,0x51,0x56,0x5A,0x5F,
			0x64,0x69,0x6F,0x74,0x79,0x7F,0x85,0x8B,0x91,0x97,0x9D,0xA3,0xAA,0xB0,0xB7,0xBE,0xC5,0xCC,0xD3,0xDB,
			0xE2,0xEA,0xF2,0xF9,0x101,0x10A,0x112,0x11A,0x123,0x12B,0x134,0x13D,0x146,0x14F,0x158,0x162,0x16B,0x175,0x17F,0x189,
			0x193,0x19D,0x1A7,0x1B1,0x1BC,0x1C6,0x1D1,0x1DC,0x1E7,0x1F2,0x1FE,0x209,0x215,0x220,0x22C,0x238,0x244,0x250,0x25C,0x269,
			0x275,0x282,0x28F,0x29C,0x2A9,0x2B6,0x2C3,0x2D1,0x2DE,0x2EC,0x2FA,0x307,0x315,0x324,0x332,0x340,0x34F,0x35E,0x36C,0x37B,
			0x38A,0x39A,0x3A9,0x3B8,0x3C8,0x3D7,0x3E7,0x3F7,0x407,0x417,0x428,0x438,0x449,0x459,0x46A,0x47B,0x48C,0x49D,0x4AF,0x4C0,
			0x4D2,0x4E4,0x4F5,0x507,0x519,0x52C,0x53E,0x550,0x563,0x576,0x588,0x59B,0x5AE,0x5C2,0x5D5,0x5E8,0x5FC,0x610,0x624,0x638,
			0x64C,0x660,0x674,0x689,0x69D,0x6B2,0x6C7,0x6DC,0x6F1,0x706,0x71B,0x731,0x747,0x75C,0x772,0x788,0x79E,0x7B4,0x7CB,0x7E1,
			0x7F8,0x80F,0x826,0x83C,0x854,0x86B,0x882,0x89A,0x8B1,0x8C9,0x8E1,0x8F9,0x911,0x929,0x942,0x95A,0x973,0x98C,0x9A4,0x9BD,
			0x9D7,0x9F0,0xA09,0xA23,0xA3C,0xA56,0xA70,0xA8A,0xAA4,0xABE,0xAD9,0xAF3,0xB0E,0xB29,0xB44,0xB5F,0xB7A,0xB95,0xBB0,0xBCC,
			0xBE8,0xC03,0xC1F,0xC3B,0xC57,0xC74,0xC90,0xCAD,0xCC9,0xCE6,0xD03,0xD20,0xD3D,0xD5A,0xD78,0xD95,0xDB3,0xDD1,0xDEF,0xE0D,
			0xE2B,0xE49,0xE68,0xE86,0xEA5,0xEC4,0xEE3,0xF02,0xF21,0xF40,0xF5F,0xF7F,0xF9F,0xFBF,0xFDE,0xFFE
		};
	}
}


