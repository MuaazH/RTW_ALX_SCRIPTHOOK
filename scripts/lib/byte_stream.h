//
// Created by MuaazH <muaaz.h.is@gmail.com> on 2024-08-03.
// Copyright (c) 2024 MuaazH <muaaz.h.is@gmail.com>. All rights reserved.
//

#ifndef CLIB_BYTE_STREAM_H
#define CLIB_BYTE_STREAM_H

typedef struct ByteStream ByteStream;

#define bytestream_new(buf, size) { buf, size, size, 0, 0 }

/**
 * Sets limit to current position and sets position to zero
 * @param bs
 */
void bytestream_flip(ByteStream *bs);

/**
 * Sets limit to capacity and sets position to zero
 * @param bs
 */
void bytestream_reset(ByteStream *bs);

unsigned int bytestream_remaining(ByteStream *bs);

void bytestream_write_u8(ByteStream *bs, unsigned char u);
void bytestream_write_u16(ByteStream *bs, unsigned short u);
void bytestream_write_u32(ByteStream *bs, unsigned int u);
void bytestream_write_u64(ByteStream *bs, unsigned long long u);
unsigned char bytestream_read_u8(ByteStream *bs);
unsigned short bytestream_read_u16(ByteStream *bs);
unsigned int bytestream_read_u32(ByteStream *bs);
unsigned long long bytestream_read_u64(ByteStream *bs);

void bytestream_write_i8(ByteStream *bs, char u);
void bytestream_write_i16(ByteStream *bs, short u);
void bytestream_write_i32(ByteStream *bs, int u);
void bytestream_write_i64(ByteStream *bs, long long u);
char bytestream_read_i8(ByteStream *bs);
short bytestream_read_i16(ByteStream *bs);
int bytestream_read_i32(ByteStream *bs);
long long bytestream_read_i64(ByteStream *bs);

void bytestream_write(ByteStream *bs, const void *buf, unsigned int size);
void bytestream_read(ByteStream *bs, void *buf, unsigned int size);

void bytestream_write_str(ByteStream *bs, const char *buf);

/**
 *
 * @param bs
 * @param buf
 * @param maxLen must include the terminating null
 */
void bytestream_read_str(ByteStream *bs, char *buf, unsigned int maxLen);

#endif // CLIB_BYTE_STREAM_H
