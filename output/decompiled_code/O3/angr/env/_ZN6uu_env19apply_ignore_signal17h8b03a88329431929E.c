long long uu_env::apply_ignore_signal::h8b03a88329431929(struct_0 *a0, unsigned long a1, unsigned long a2)
{
    unsigned int v0;  // [sp-0xb4]
    unsigned long v1;  // [sp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0xa8]
    char v3;  // [bp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x98]
    void* v5;  // [sp-0x90]
    unsigned long v6;  // [sp-0x80], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x78]
    char v8;  // [bp-0x70]
    char v9;  // [bp-0x60]
    unsigned int v10;  // [sp-0x58]
    unsigned long v11;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x48]
    unsigned long long v13;  // [sp-0x40]
    unsigned long long v14;  // [sp-0x38]
    unsigned long long v16;  // r15
    uint128_t v18[2];  // rbx
    unsigned int *v19;  // rbp
    unsigned int v20;  // r14d
    int v21;  // xmm0
    unsigned long v22;  // rdx
    int v23;  // xmm0

    v16 = a0->field_70;
    if (!v16)
        return 0;
    v19 = 0;
    while (true)
    {
        v20 = *((int *)(a0->field_68 + v19));
        if (v20 - 1 >= 31)
        {
            v1 = 0x8000000000000000;
            v4 = 94489280514;
            v18 = __rust_alloc(32, 8);
            if (v18)
            {
                v21 = *((int128_t *)&v1);
                v18[1] = *((int128_t *)&v3);
                *((void*)&v18[0]) = v21;
                return v18;
            }
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        }
        else if (signal(v20) != -1)
        {
            v19 += 2;
            if (v16 << 3 == v19)
                return 0;
        }
        else
        {
            v0 = v20;
            v6 = nix::errno::desc::h61e41cb800cb0a15((unsigned int)nix::errno::consts::from_i32::hb3bc9b2c0830196d(*(__errno_location())));
            v7 = v22;
            v11 = &v0;
            v12 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::hca014a89be6ce751;
            v13 = &v6;
            v14 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he4bb067a457648df;
            v1 = &g_50c8e0;
            v2 = 2;
            v5 = 0;
            v3 = &v11;
            v4 = 2;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v8, &v1);
            v10 = 125;
            v18 = __rust_alloc(32, 8);
            if (v18)
            {
                v23 = *((int128_t *)&v8);
                v18[1] = *((int128_t *)&v9);
                *((void*)&v18[0]) = v23;
                return v18;
            }
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        }
    }
}
