long long fish::builtins::argparse::check_min_max_args_constraints(struct_0 *a0, unsigned long long a1)
{
    void* v0;  // [bp-0xb0]
    unsigned long long v1;  // [bp-0xa8]
    void* v2;  // [bp-0xa0]
    char v3;  // [bp-0x98]
    int v4;  // [bp-0x90]
    void* v5;  // [bp-0x88]
    char v6;  // [bp-0x78]
    unsigned long v7;  // [bp-0x70]
    char v8;  // [bp-0x58]
    unsigned long v9;  // [bp-0x50]
    char v10;  // [bp-0x38]
    unsigned long v12;  // r12
    unsigned long v13;  // r14
    unsigned long long v14;  // rax
    unsigned long long v15;  // rdx
    unsigned long v16;  // r13
    unsigned long long v17;  // rax
    unsigned long long v18;  // rdx

    v12 = *((long long *)&a0->padding_18[32]);
    v13 = *((long long *)&a0->padding_48[136]);
    if (v12 < v13)
    {
        v0 = 0;
        v1 = 4;
        v2 = 0;
        v14 = g_14c7390[0].localize();
        v3 = 1;
        *((int128_t *)&v4) = *((int128_t *)&(&a0->padding_0)[1]);
        v6 = 4;
        v7 = v13;
        v8 = 4;
        v9 = v12;
        fish_printf::printf_impl::sprintf_locale(&v10, &v0, v14, v15, ".", &v3, 3);
        v10.unwrap(&g_14c73a8);
    }
    else
    {
        v16 = a0->field_d8;
        if (v12 <= v16)
            return 0x100000000;
        v0 = 0;
        v1 = 4;
        v2 = 0;
        v17 = g_14c7360[0].localize();
        v3 = 1;
        *((int128_t *)&v4) = *((int128_t *)&(&a0->padding_0)[1]);
        v6 = 4;
        v7 = v16;
        v8 = 4;
        v9 = v12;
        fish_printf::printf_impl::sprintf_locale(&v10, &v0, v17, v18, ".", &v3, 3);
        v10.unwrap(&g_14c7378);
    }
    core::ptr::drop_in_place<[fish_printf::arg::Arg; 3]>(&v3);
    memcpy(&v3, &v0, 16);
    v5 = 0;
    a1.append(&v3);
    return 4294967297;
}
