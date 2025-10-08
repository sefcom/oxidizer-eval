void fish::builtins::status::print_features(unsigned long long a0)
{
    void* v0;  // [bp-0x110]
    unsigned long long v1;  // [bp-0x108]
    void* v2;  // [bp-0x100]
    char v3;  // [bp-0xf8]
    void* v4;  // [bp-0xe8]
    unsigned short v5;  // [bp-0xe0]
    unsigned long v6;  // [bp-0xd8]
    char v7;  // [bp-0xc0]
    int v8;  // [bp-0xb8]
    char v9;  // [bp-0xa0]
    unsigned long v10;  // [bp-0x98]
    unsigned long v11;  // [bp-0x90]
    char v12;  // [bp-0x80]
    int v13;  // [bp-0x78]
    char v14;  // [bp-0x60]
    int v15;  // [bp-0x58]
    int v16;  // [bp-0x40]
    char v17;  // [bp-0x30]
    unsigned int v19;  // eax
    unsigned int v20;  // eax
    unsigned int v21;  // eax
    unsigned int v22;  // eax
    struct_0 *v23;  // rbp
    unsigned long long v24;  // rax

    v19 = 0x80000000.max(14);
    v20 = (unsigned int)v19.max(12).max(13);
    v21 = (unsigned int)(unsigned int)v20.max(23).max(19).max(16);
    v22 = (unsigned int)(unsigned int)v21.max(11).max(15).max(10);
    if ((char)_ccall(0, 23, (unsigned long long)(v22 + 1), 0, (unsigned long long)(char)(&v17 < 232)))
    {
        fish::future_feature_flags::test(0);
        v0 = 0;
        v1 = 4;
        v2 = 0;
        core::panicking::panic_const::panic_const_add_overflow(&g_14cd1c8); /* do not return */
    }
    v23 = 0;
    do
    {
        v24 = fish::future_feature_flags::test(*((int *)(v23 + &g_14cd000)));
        v0 = 0;
        v1 = 4;
        v2 = 0;
        v5 = 8197;
        v6 = v22 + 1;
        v7 = 1;
        *((int128_t *)&v8) = *((int128_t *)(v23 + &g_14ccfd0));
        v9 = 1;
        *((int *)&v10) = ((v24 & 255) ? "o" : "o");
        v11 = v24 & 4294967295 ^ 3;
        v12 = 1;
        *((int128_t *)&v13) = *((int128_t *)(v23 + &g_14ccfe0));
        v14 = 1;
        *((int128_t *)&v15) = *((int128_t *)(v23 + &g_14ccff0));
        fish_printf::printf_impl::sprintf_locale(&v16, &v0, "%-*ls%-3s %ls %ls\ns", 18, &v5, 5);
        v16.unwrap(&g_14cd1e0);
        v23 = &v23->padding_0[56];
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 5]>(&v5);
        memcpy(&v3, &v0, 16);
        v4 = 0;
        a0.append(&v3);
    } while (v23 != 504);
    return;
}
