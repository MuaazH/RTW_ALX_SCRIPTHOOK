// Created by MuaazH <muaaz.h.is@gmail.com> on 2024-08-06.
// Copyright (c) 2024 MuaazH <muaaz.h.is@gmail.com>. All rights reserved.
// This scripts is just a test of the save/load feature of the scripthook

#include <scripthook.h>

const char *SCRIPT = "save_load_test.c";

void on_savegame_save(ByteStream *bs) {
    bytestream_write_u64(bs, 500UL);
    bytestream_write_u32(bs, 400U);
    bytestream_write_u16(bs, (unsigned short) 300U);
    bytestream_write_u8(bs, (unsigned char) 200);
    bytestream_write_str(bs, "From the river to the sea, PALESTINE will be free");
}

void on_savegame_load(ByteStream *bs) {
    if (bytestream_read_u64(bs) != 500UL)
        rtw_log(SCRIPT, "64 error");
    if (bytestream_read_u32(bs) != 400U)
        rtw_log(SCRIPT, "32 error");
    if (bytestream_read_u16(bs) != (unsigned short) 300)
        rtw_log(SCRIPT, "16 error");
    if (bytestream_read_u8(bs) != (unsigned char) 200)
        rtw_log(SCRIPT, "8  error");
    char buf[128];
    bytestream_read_str(bs, buf, sizeof(buf));
    rtw_log(SCRIPT, buf);
}

void init_hooks(Script *script) {
    EXPORT_HOOK(on_savegame_save);
    EXPORT_HOOK(on_savegame_load);
}
