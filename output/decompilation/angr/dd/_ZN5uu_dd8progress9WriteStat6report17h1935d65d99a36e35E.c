long long uu_dd::progress::WriteStat::report(unsigned long a0, unsigned long long a1)
{
    int v0;  // [bp-0xf8], Other Possible Types: char *, char
    unsigned long long v1;  // [bp-0xf0]
    unsigned long long v2;  // [bp-0xe8]
    int v3;  // [bp-0xe0]
    unsigned long long v4;  // [bp-0xd8]
    unsigned long long v5;  // [bp-0xd0]
    char v6;  // [bp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0xc0]
    int v8;  // [bp-0xb8], Other Possible Types: char *, unsigned long long
    unsigned long long v9;  // [bp-0xb0]
    int v10;  // [bp-0xa8], Other Possible Types: void*
    int v11;  // [bp-0x98]
    unsigned long long v12;  // [bp-0x88]
    unsigned long long v13;  // [bp-0x80]
    unsigned long long v14;  // [bp-0x78]
    unsigned long long v15;  // [bp-0x70]
    char v16;  // [bp-0x68]
    unsigned long long v17;  // [bp-0x58]
    int v18;  // [bp-0x50]
    unsigned long long v19;  // [bp-0x40]
    int v20;  // [bp-0x38], Other Possible Types: char
    unsigned long long v21;  // [bp-0x28]
    int v23;  // xmm3
    unsigned long long v24;  // rax

    (char)v0.to_vec("completeoperandsESTRPIPE", 8);
    v6.spec_to_string(a0 + 16);
    v17 = v2;
    memcpy(&v16, &v0, 16);
    *((int128_t *)&v18) = *((int128_t *)&v6);
    v19 = v8;
    v6.to_vec("partialdd-progress-records-indd-progress-records-outfailed to spawn thread/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/thread/mod.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linu", 7);
    v21 = v8;
    memcpy(&v20, &v6, 16);
    v6.spec_to_string(a0 + 24);
    v2 = v21;
    v0 = v20;
    *((int128_t *)&v3) = *((int128_t *)&v6);
    v5 = v8;
    v23 = (int128_t)(&v18)[8];
    memcpy(&v6, &v16, 16);
    *((int128_t *)&v8) = *((int128_t *)&v17);
    v10 = v23;
    v14 = v4;
    v15 = v5;
    v12 = v2;
    v13 = (long long)v3;
    v11 = v20;
    (char)v0.from_iter(&v6);
    uucore::mods::locale::get_message_with_args(&v16, "dd-progress-records-outfailed to spawn thread/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/thread/mod.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/li", 23, &(char)v0);
    v0 = &v16;
    v1 = <alloc::string::String as core::fmt::Display>::fmt;
    v6 = &g_5df1b0;
    v7 = 2;
    v10 = 0;
    v8 = &v0;
    v9 = 1;
    v24 = a1.write_fmt(&v6);
    ::0x4d5800::core::ptr::drop_in_place<alloc::string::String>(&v16);
    return v24;
}
