#include "types.h"

const s8 drum[] = {
	0x00,0x00,0x00,0x00,0x05,0xFC,0xF5,0x10,0x00,0xE8,0x15,0x05,0xEB,0x00,0x0E,0xF5,
	0xFC,0xFD,0x04,0x03,0xEF,0x00,0xFF,0x10,0xFC,0xEA,0x0C,0xFB,0xFB,0x00,0x18,0xE4,
	0xF0,0x27,0xEA,0xF3,0x25,0xD0,0x17,0xEF,0x16,0xF8,0xCF,0x2B,0x00,0xEA,0x10,0xFD,
	0xE0,0x3F,0xD0,0x17,0x04,0xD9,0x0F,0xF8,0xF7,0x12,0xE9,0xF1,0x27,0xDC,0xFC,0x13,
	0xF0,0xF6,0x15,0xEF,0x02,0xEB,0x01,0x23,0xE8,0xEF,0x08,0x22,0xE2,0xEA,0x0F,0x18,
	0xDF,0x18,0xF4,0x01,0xFC,0xEB,0x0B,0x28,0xBF,0x30,0xEA,0xED,0x28,0xDB,0xFF,0x28,
	0xD3,0x1C,0xED,0x1E,0xD4,0x07,0x23,0xE4,0xF4,0xEF,0x20,0x06,0xCB,0x13,0x1C,0xC6,
	0x0B,0x48,0x9F,0x23,0xD8,0x4F,0xD0,0xCF,0x47,0xE8,0xFD,0x28,0xBB,0x31,0xD5,0x30,
	0x07,0xD7,0x30,0xAF,0xFB,0x52,0xE0,0xEF,0xE9,0xF4,0x3F,0xE8,0xDF,0x20,0xE3,0x00,
	0x03,0x33,0xEA,0xA2,0x7F,0xEB,0xC8,0x2B,0xCE,0x36,0x06,0xCB,0x20,0xFF,0x1A,0xD5,
	0x2E,0xE7,0xFD,0x20,0xE4,0xE7,0x34,0xBA,0x56,0x00,0x8F,0x7F,0x08,0xD7,0x1B,0xE8,
	0x1D,0x00,0xDF,0x08,0x37,0xA0,0xFB,0x68,0xBF,0xD8,0x35,0xF1,0x02,0xFF,0xE7,0x32,
	0xB9,0x0B,0x1E,0xFB,0x20,0xA2,0x2F,0x42,0xC7,0x0A,0xC6,0x17,0x70,0xAF,0x61,0xE8,
	0xDF,0x1D,0x15,0xF0,0xFF,0x30,0xB8,0xFF,0x38,0x1B,0xB0,0xBF,0x60,0xD8,0xFF,0xE8,
	0x33,0xA7,0x18,0x5B,0xC8,0x0F,0xF0,0xFF,0x00,0xD1,0x4B,0xD8,0xF7,0x0C,0x2F,0xB4,
	0x7F,0xE0,0xFF,0xD7,0x18,0xD7,0x27,0xC0,0x27,0x1B,0xDA,0xD4,0x1F,0x08,0xF0,0xD5,
	0x2F,0x40,0xDF,0x70,0x90,0x3F,0x58,0x87,0x4E,0xF5,0x10,0x9F,0x7F,0x82,0x27,0xE0,
	0xF7,0x57,0xC0,0xCB,0x27,0x2C,0x94,0x3F,0x31,0xCC,0xDC,0x0C,0x4F,0xC0,0xE8,0x2F,
	0x20,0xEC,0xEF,0x09,0xC8,0x1F,0x28,0xD3,0xF7,0xF9,0x18,0x17,0x00,0xEA,0xEF,0x30,
	0xDF,0xF3,0x13,0x18,0xBF,0x50,0xCD,0x0B,0x20,0xFF,0x8F,0x7F,0xB0,0xDF,0x54,0xC2,
	0xEB,0x10,0xF7,0x08,0xBF,0x70,0xBA,0xF7,0x20,0xC7,0x2E,0xE2,0xF9,0xFF,0x00,0x2F,
	0xCD,0x48,0x8F,0x4F,0xF8,0xE3,0x14,0x17,0x00,0xE0,0x27,0xE6,0xF8,0x11,0xB3,0x77,
	0xAE,0xF8,0x53,0xE0,0xB3,0x60,0xAF,0x70,0xDF,0xC0,0x37,0x00,0x17,0xE8,0xCB,0x75,
	0xA0,0x1F,0x0F,0x18,0xF2,0xB7,0x30,0x1B,0xF5,0xDF,0xF2,0x67,0x83,0x60,0x37,0xA0,
	0x18,0xFF,0xDE,0x1B,0x06,0x01,0xCF,0x20,0xE5,0xEB,0x58,0xBF,0x0B,0x00,0xFB,0x0A,
	0x00,0xF7,0xE0,0x2F,0xE8,0x17,0xA8,0x3F,0x28,0xAF,0x44,0x17,0xB4,0x3F,0xE8,0x1F,
	0x00,0xE3,0x25,0xD4,0x13,0xD4,0x37,0xC8,0x17,0x05,0x20,0xCF,0xC1,0x54,0xD4,0xCF,
	0x20,0x18,0x07,0xD3,0x08,0xFF,0xD8,0xE0,0x3F,0x18,0xAC,0xFF,0x48,0xD8,0xBB,0x2F,
	0x24,0x0C,0x92,0x67,0xD8,0xF0,0xF7,0x7E,0x90,0xEB,0x02,0x59,0xA8,0x1F,0x14,0xE5,
	0x17,0xC4,0x37,0x00,0xDB,0x33,0xE9,0xD1,0x3F,0x0A,0xB0,0x4F,0xFD,0x08,0x97,0x7F,
	0xC0,0xD6,0x3B,0x20,0xC8,0xF7,0x20,0x1F,0xC0,0x18,0xD7,0x60,0xAD,0xF7,0x30,0xE7,
	0xDB,0x20,0xE0,0x5B,0xA8,0x2F,0xD2,0x12,0x33,0xE0,0xE8,0xDF,0x38,0xC8,0x3F,0x00,
	0xDD,0xFA,0x08,0x10,0xBF,0x56,0xC4,0x17,0x30,0x9B,0x14,0x28,0x09,0xD0,0x1F,0x0A,
	0xBC,0x57,0xE0,0xFF,0x08,0xDF,0x10,0x42,0xAA,0x2D,0x18,0xAD,0x47,0xF0,0xDF,0x30,
	0xFB,0xED,0x2C,0xE3,0xEA,0x1F,0xE8,0xEF,0x10,0xFB,0xCF,0x34,0xDF,0x0C,0x00,0xC5,
	0x34,0x17,0x9D,0x7F,0x98,0xEF,0x32,0xF6,0x00,0xE5,0xF5,0x0F,0x20,0xEF,0xF4,0x16,
	0xE5,0x13,0xF0,0xD9,0x47,0x00,0x06,0xDB,0x2B,0xE0,0xFF,0x10,0xF5,0xE2,0x0B,0x1E,
	0x00,0xE7,0xE0,0x43,0xCD,0x1C,0xF2,0xEF,0x1C,0xF9,0xF6,0x07,0xE7,0x22,0xCF,0x1A,
	0x10,0xDF,0x1D,0xDB,0x27,0xE0,0x1F,0xD8,0x17,0x00,0x13,0x18,0xC7,0xF3,0x50,0xDD,
	0xD8,0x27,0x20,0xC7,0x11,0x22,0xE1,0x04,0xF7,0x20,0xFD,0xF0,0xED,0x03,0x3E,0xC9,
	0xFA,0x1F,0xF5,0xEF,0x16,0xFF,0x08,0xDF,0x2A,0xC6,0x3C,0xEB,0x0C,0xE3,0x39,0xD7,
	0xFC,0x1F,0x00,0xF9,0x03,0x00,0x15,0xDF,0x0B,0x10,0xF6,0xE7,0x31,0xDB,0xFF,0x17,
	0xF0,0xFD,0x06,0xF6,0xED,0x25,0x06,0xEE,0xE8,0x29,0xEA,0x08,0xFD,0x08,0x05,0xF3,
	0x00,0xFE,0x12,0xF8,0xFB,0x10,0xEF,0x10,0xFD,0xFE,0x0D,0xE8,0x0B,0x05,0xF7,0x05,
	0x04,0xF6,0xFF,0x0E,0xE9,0x1D,0x0A,0xD9,0x0F,0x15,0xE8,0x05,0xFE,0x0C,0xF8,0x00,
	0x05,0xFF,0x10,0xE2,0x15,0x08,0xF5,0x0E,0xEB,0x08,0x01,0x0E,0xF0,0xFF,0x06,0xEC,
	0x13,0xF7,0x00,0x05,0x08,0xE5,0x06,0x14,0xE5,0x27,0xDF,0x06,0xFF,0x00,0x07,0x00,
	0x05,0xEF,0xFF,0x20,0xF2,0xE8,0x09,0x07,0x00,0xF8,0xFB,0x07,0x00,0xEF,0x13,0xF4,
	0xF9,0x0B,0xEC,0x0C,0xF7,0x0A,0xF3,0x03,0x03,0x00,0xFE,0xFB,0x10,0xF1,0xF7,0x12,
	0xF3,0x00,0x08,0xFC,0xFC,0xF7,0x10,0xF9,0x04,0x03,0xEF,0x11,0xF9,0xF7,0xFC,0x05,
	0x06,0xF2,0x02,0x08,0xF4,0x0A,0xF9,0x0B,0xEC,0x0D,0x0D,0xF0,0x07,0xF8,0x15,0xE9,
	0x10,0x0B,0xE9,0xFF,0x09,0x07,0xF3,0x0B,0xF8,0xFD,0x10,0x00,0xE9,0x20,0xED,0xF7,
	0x18,0x01,0x01,0xE8,0x0F,0xF9,0x03,0xFA,0x07,0x00,0x07,0xE8,0x13,0x0C,0xDE,0x0D,
	0x0D,0xF1,0x03,0x07,0xF5,0x0E,0xF6,0x10,0xE7,0x0D,0xF8,0x05,0x02,0xF4,0x0F,0x08,
	0xE4,0x07,0x0D,0xE6,0x16,0x00,0xF7,0x08,0xF7,0x13,0xEC,0xFF,0x05,0x04,0xFC,0xFE,
	0x0F,0xE8,0x0D,0xFA,0xFC,0x0D,0x00,0xED,0x10,0x03,0xEF,0x1C,0xF5,0xEA,0x12,0x03,
	0x01,0xF6,0x05,0xFF,0x08,0xF2,0x0F,0x00,0xF6,0x09,0x0F,0xF2,0xFB,0xFD,0x17,0xEA,
	0x07,0x0F,0xF6,0xF3,0x1B,0xEA,0x10,0xF5,0xFB,0x18,0xED,0x07,0x06,0xDE,0x10,0x02,
	0xF7,0x10,0xEF,0x10,0xF7,0x00,0xFD,0x00,0xF7,0x0D,0x00,0x00,0xED,0x1B,0xF5,0xFE,
	0xFD,0xF5,0x18,0xF4,0xFE,0x05,0xF6,0xFE,0x08,0xFB,0x0D,0xEE,0x08,0xFF,0x08,0xEF,
	0x15,0xFC,0xF7,0x10,0xFD,0xFC,0xFC,0x02,0x09,0xFA,0xFB,0x08,0x01,0xF7,0x07,0xF7,
	0x14,0xE7,0x09,0x0A,0x00,0xE7,0x15,0x00,0xF7,0x06,0xF5,0x17,0xF2,0xFE,0x06,0xF7,
	0x12,0xED,0x0D,0xF5,0x0C,0xF1,0x17,0xE8,0x09,0xFA,0x03,0x00,0x0D,0xF1,0x04,0xFE,
	0x04,0xFA,0x06,0x04,0xF7,0x02,0x0A,0xF8,0xFB,0x01,0x0E,0x00,0xF3,0x08,0x09,0xE9,
	0x10,0xFE,0x09,0xF9,0xFB,0x05,0x01,0xFC,0x06,0xFD,0x07,0x00,0xF5,0x16,0xE8,0x09,
	0x0E,0xE9,0x07,0x0C,0xFB,0xF7,0x01,0x0A,0xF6,0xF9,0x06,0x06,0xF4,0xFD,0x09,0xFC,
	0xFD,0xFC,0x0E,0xF2,0x05,0xF7,0x0E,0x00,0xF2,0x03,0x0A,0xF4,0x03,0x00,0x05,0xF7,
	0x04,0x08,0xEF,0x0D,0x03,0xF7,0x08,0xFB,0x07,0xF1,0x09,0x09,0xF6,0x00,0x01,0x02,
	0xFF,0x00,0x0F,0xF4,0xFF,0xFA,0x11,0xFD,0x00,0x01,0x00,0xF8,0x09,0xFB,0x00,0x0A,
	0x00,0xEB,0x0E,0x07,0xEE,0x0B,0x00,0x01,0xFE,0xF6,0x0D,0xFA,0x06,0xFA,0xFD,0x08,
	0xF2,0x04,0x0A,0xFF,0xFA,0xFF,0x02,0x0C,0xFD,0xF9,0xFC,0x04,0xFF,0x0A,0xF5,0x03,
	0x01,0xFC,0x0A,0xF8,0xFE,0x03,0xF8,0xFF,0x11,0xED,0x01,0x06,0x00,0xFE,0xFB,0x09,
	0xFD,0xFB,0x00,0x07,0xF7,0x04,0x06,0xF0,0x0F,0x04,0xEF,0x0D,0xFB,0x03,0xF9,0x0B,
	0xF8,0xF2,0x13,0xFC,0xF6,0x0E,0xF7,0x09,0xF7,0xFD,0x07,0x08,0xFA,0xFE,0x00,0x04,
	0xF1,0x12,0xFC,0xF8,0xFB,0x0E,0xF6,0x07,0xF3,0x04,0x0C,0xF2,0xF7,0x0D,0x02,0xEC,
	0x0A,0x01,0xFE,0xF7,0x0F,0xF8,0xFB,0x00,0xFB,0x0C,0xF4,0x05,0x00,0x03,0xF3,0x0E,
	0x01,0xF4,0x0E,0xF5,0xF9,0x04,0x02,0xFD,0x02,0xFD,0x00,0x07,0xF0,0x02,0x09,0xF8,
	0xFF,0x0A,0xED,0x09,0x00,0x02,0xF8,0x09,0xF4,0x0A,0xFD,0xFC,0x06,0xFD,0x01,0xFB,
	0x09,0x01,0xF2,0x0E,0xFB,0xFC,0x00,0x0B,0xF9,0x07,0x00,0xF8,0x11,0xF8,0xFB,0x0B,
	0xF5,0x01,0x05,0x00,0x01,0x04,0xE7,0x0F,0x0D,0xEC,0x04,0x07,0xFB,0xF9,0x04,0xFC,
	0x06,0xF3,0x0B,0x00,0xFE,0xFA,0x0D,0xFF,0xF4,0x08,0xFD,0xFD,0x07,0x00,0x04,0xF7,
	0xFF,0x08,0xF1,0x10,0xF4,0xFF,0x0D,0xF5,0xFC,0x0B,0x00,0xF8,0xF6,0x11,0x01,0xFB,
	0xF4,0x0D,0xFD,0xFC,0xF7,0x0C,0x00,0xEE,0x13,0x04,0xF0,0x03,0xFE,0x06,0xFA,0xFE,
	0x00,0xF9,0x0A,0xF5,0x07,0x00,0xF6,0x06,0xF9,0x06,0xFF,0xFA,0x03,0x0C,0xF3,0xFF,
	0x09,0xFF,0x03,0xFA,0xFF,0x09,0xF4,0xFF,0x03,0x00,0xF9,0x0B,0xF4,0x12,0xFB,0xFD,
	0xFB,0x0D,0x00,0xEF,0x10,0xF9,0x04,0xFE,0x10,0xF7,0xF7,0x09,0x05,0x04,0xEC,0x13,
	0x00,0x01,0x00,0xFA,0x03,0xF9,0x09,0x07,0xF6,0xFF,0x00,0x0A,0xF7,0x01,0x06,0x00,
	0xF3,0x09,0x0E,0xE7,0x0F,0xF9,0xFB,0x0D,0xFE,0xFB,0x09,0xF0,0x0D,0xFB,0x00,0xFB,
	0x10,0xF6,0x03,0x06,0xEC,0x07,0x0A,0x00,0xFA,0x02,0x02,0x0B,0xEF,0x00,0x09,0xFC,
	0xFF,0x03,0x03,0xF9,0xFB,0x0A,0xF3,0x09,0xFA,0x0A,0xF2,0x06,0x06,0xF0,0x05,0x04,
	0x01,0xFC,0xFE,0x01,0x02,0xF7,0x06,0x02,0xF8,0x09,0x00,0xFB,0x00,0xFD,0x05,0x05,
	0xFC,0xF6,0x0D,0xF9,0x06,0xFC,0xF8,0x06,0x0B,0xF6,0x09,0xF5,0x05,0x03,0x00,0x03,
	0x00,0xFF,0x00,0xFF,0x06,0xFD,0xF9,0x04,0x04,0xFF,0x04,0xF3,0x05,0x0A,0xF8,0x01,
	0xFC,0x03,0x00,0xF9,0x0E,0xF8,0xFD,0x05,0xFB,0x07,0xFC,0x05,0xFA,0xFB,0x0C,0xFB,
	0x06,0xF4,0xFD,0x0B,0x02,0xF4,0x0E,0xF4,0x07,0x05,0xF9,0xFA,0x10,0xF8,0xF9,0x0B,
	0xFA,0xFB,0x0F,0xF8,0xFE,0x04,0x01,0xFB,0x08,0xF6,0x00,0x0A,0xFC,0x02,0xFB,0x03,
	0xFB,0x09,0x02,0xF7,0x08,0x00,0xFF,0xFE,0x11,0xF0,0xFB,0x08,0x06,0xFD,0xF6,0x0D,
	0xF4,0x03,0x09,0x07,0xED,0x08,0xF9,0x0E,0xF4,0x07,0xFE,0x04,0xF6,0x07,0x02,0xFE,
	0xFC,0x05,0xFD,0x02,0x00,0xFD,0x02,0x05,0xF6,0xFE,0x06,0x01,0xFD,0x02,0x06,0xF9,
	0xED,0x0E,0x08,0xF5,0xF9,0x0B,0xF9,0xFB,0x06,0x00,0xFA,0xFF,0x01,0x04,0xF7,0xFD,
	0x07,0xF9,0xFA,0x0C,0xFB,0xF5,0x09,0x00,0xFF,0xF8,0x0C,0xF5,0xF9,0x08,0x00,0xFE,
	0x03,0xFE,0xFD,0xF5,0x0B,0xFA,0x05,0xF8,0xFF,0x06,0xF1,0x13,0xF4,0xFD,0x08,0xFF,
	0x03,0x01,0x00,0xF2,0x08,0xFD,0x08,0x00,0xF4,0x06,0x0B,0xEC,0x03,0x06,0x02,0xF3,
	0x07,0x00,0xFC,0x01,0xFD,0x05,0x00,0xF6,0x03,0x0C,0xED,0x06,0x03,0xFA,0x0A,0xFD,
	0x04,0xEE,0x10,0xF4,0x04,0x09,0xF1,0x0C,0xFC,0x02,0xF9,0x05,0x00,0x05,0xF9,0xF3,
	0x18,0xF0,0x05,0x00,0xFD,0xFB,0x02,0x04,0x00,0xEF,0x06,0x10,0xF4,0xF2,0x11,0x00,
	0xFB,0x00,0x04,0x02,0xF1,0x13,0xF5,0x01,0x00,0x04,0xFA,0xFF,0x10,0xF4,0x05,0xFD,
	0xFD,0x04,0xFD,0x0E,0xFB,0xFA,0xFF,0x08,0x02,0xF5,0x07,0x04,0x01,0xF6,0x03,0x00,
	0x05,0xF3,0x0B,0x00,0x05,0xF6,0xFE,0x05,0x01,0xF9,0x09,0xFD,0xF2,0x05,0x10,0xF6,
	0xF9,0x05,0xFF,0x06,0xF8,0x01,0xFA,0x00,0x0A,0x03,0xFA,0xF9,0x0D,0xFA,0x03,0xFC,
	0xFC,0x02,0x04,0xF9,0x0B,0x00,0xF2,0x05,0x00,0x08,0xFE,0xFC,0xFB,0x0B,0xF1,0x0B,
	0xF6,0x12,0xEB,0x07,0x06,0xF4,0x03,0x00,0x01,0x03,0x00,0xF4,0x05,0x00,0x07,0xF7,
	0x09,0xFA,0xFD,0x06,0xF6,0xFB,0x12,0xFA,0x02,0x04,0xF4,0x07,0xFB,0x05,0x00,0xFF,
	0x03,0x05,0x04,0xEE,0x05,0x0A,0xF5,0x09,0xFA,0xFF,0x0B,0xF8,0xFF,0x04,0xF4,0x0E,
	0xF3,0xFF,0x09,0x06,0xF4,0x00,0x07,0xFA,0xFB,0x02,0x09,0x00,0xF6,0x0C,0xF9,0x00,
	0xF4,0x0F,0x00,0xFC,0xF6,0x10,0xF9,0xF9,0x01,0x05,0xF5,0x0B,0xFD,0xFF,0x00,0xF7,
	0x0C,0xF0,0x0B,0x08,0xFB,0x01,0xFA,0x07,0xFC,0xF9,0x06,0x02,0xF4,0x09,0x00,0xF3,
	0x02,0x01,0x08,0xE9,0x07,0x06,0x04,0xFC,0xF3,0x0D,0xF5,0x03,0x0A,0xEE,0x07,0xFB,
	0xFD,0x08,0x03,0xF3,0x07,0x08,0xEB,0x0F,0x02,0xFB,0xF9,0x0B,0x00,0xFB,0xFD,0x01,
	0x03,0xFD,0xFB,0x08,0xFD,0x00,0xF3,0x14,0xFC,0xF3,0x07,0x0D,0xED,0x09,0x04,0x01,
	0x00,0xF2,0x10,0x00,0xFF,0x04,0xF7,0x0C,0xF7,0x04,0x03,0xFC,0xF2,0x13,0xF8,0x04,
	0xF8,0x03,0xFA,0x05,0x04,0x05,0xF0,0x07,0xF8,0x05,0x00,0xF8,0xFF,0x09,0x05,0xF8,
	0xF4,0x0B,0xFC,0xF9,0x09,0x10,0xEC,0x02,0xFB,0x07,0x00,0xFC,0x02,0x06,0xF9,0x00,
	0x02,0x04,0xFA,0x03,0x01,0xFF,0x01,0x03,0xF8,0x00,0x0B,0xF9,0x03,0xF3,0x0C,0x03,
	0xFA,0x04,0x00,0x04,0xF6,0x02,0x0A,0xFE,0xFB,0x01,0x05,0xFE,0xFF,0xFB,0x07,0x00,
	0xF9,0x11,0xF2,0x07,0xF7,0x07,0x00,0xFE,0x05,0xFD,0x01,0x00,0x07,0x00,0xF0,0x0D,
	0x04,0xF6,0x03,0x0C,0xFA,0xFF,0xFA,0x09,0xFA,0x01,0x01,0x07,0x05,0xF5,0xFE,0x09,
	0xFA,0x05,0xFD,0x02,0xFD,0xFD,0x09,0x08,0xF7,0xF7,0x0D,0xFE,0x00,0x00,0x03,0x05,
	0xF5,0x03,0xF8,0x0D,0x00,0xF7,0x07,0xFB,0x04,0xFD,0x00,0x07,0xF3,0x06,0x01,0x01,
	0xFB,0x0E,0xF0,0xFF,0x0D,0xF8,0x02,0xFD,0x06,0x01,0xF9,0x08,0xFF,0xFC,0xFB,0x0E,
	0xFD,0xFB,0xFE,0x09,0x00,0xFE,0xF8,0x0A,0x09,0xEB,0x0E,0x04,0xF4,0x0C,0xF8,0xFB,
	0x0D,0xFC,0xFB,0x03,0x05,0xF2,0x13,0x00,0xF5,0x02,0x03,0xFC,0x00,0x04,0xFB,0x07,
	0xFD,0xF7,0x04,0x03,0x04,0xFA,0x0B,0xF5,0x05,0xFE,0x01,0x00,0x01,0xFB,0x03,0x01,
	0xF8,0x0D,0xFA,0xF9,0x07,0x0F,0xED,0xFB,0x07,0xF7,0x07,0x06,0xF6,0x06,0xFA,0xF9,
	0x0D,0xF4,0x07,0xFD,0x04,0xF6,0xFF,0x05,0xF0,0x07,0x09,0xF8,0x00,0xFD,0xFD,0xFD,
	0x00,0x03,0x01,0xF3,0x01,0x05,0xFA,0xFA,0x08,0x03,0xFA,0xFB,0xFD,0x0B,0xFC,0xF5,
	0x01,0x08,0xF5,0x03,0x05,0xF5,0xF7,0x0A,0x06,0xF9,0xFF,0x01,0xFF,0xFC,0x05,0xF4,
	0x0F,0xFA,0xF7,0x08,0x00,0xFE,0x05,0xFA,0xFC,0x05,0xFD,0x03,0x08,0xF7,0xF9,0x08,
	0xFB,0xFF,0x09,0xFB,0x07,0xF4,0xFF,0x05,0x05,0xF4,0xFF,0x0D,0xF8,0xF3,0x16,0xFA,
	0xF0,0x06,0x07,0x05,0xF4,0x02,0x03,0xFB,0x08,0xF7,0x02,0xFE,0xF9,0x0D,0x08,0xE8,
	0x07,0x0A,0xF2,0x00,0x06,0xFD,0x05,0xFB,0x08,0xF5,0x05,0x02,0xFB,0xFF,0x05,0xFA,
	0x04,0xFB,0x03,0xFB,0x04,0xFB,0x03,0x01,0x01,0xF3,0x0B,0x00,0xF7,0x0A,0x00,0xF0,
	0x04,0x0F,0xF8,0xF7,0x02,0x01,0x08,0xF8,0xFC,0x03,0x02,0xF8,0x0D,0xFD,0xFA,0xFB,
	0x09,0x01,0x00,0xFA,0xFD,0x0C,0xFC,0xF9,0x00,0x00,0x00,0x00,
};