long long uu_join::State::initialize::h2ec0c96b2a7caa3c(struct_1 *a0, unsigned long long a1, char a2)
{
    unsigned long long v0;  // [sp-0xd0]
    unsigned long v1;  // [sp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0xc0]
    unsigned long v3;  // [sp-0xb8], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0xb0]
    unsigned long long v5;  // [sp-0xa8]
    unsigned long long v6;  // [sp-0xa0]
    void* v7;  // [sp-0x98]
    unsigned long v8;  // [sp-0x88], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x80]
    unsigned long v10;  // [sp-0x78], Other Possible Types: unsigned long long
    int v11;  // [sp-0x70]
    int v12;  // [sp-0x60]
    unsigned long long v13;  // [sp-0x50]
    char v14;  // [bp-0x48]
    char v15;  // [bp-0x40]
    char v16;  // [bp-0x30]
    char v17;  // [bp-0x20]
    unsigned long long v19;  // rax
    struct_0 *v20;  // r14
    unsigned long long v21;  // rdx
    unsigned long long v22;  // rsi
    struct_0 *v23;  // rax
    struct_0 *v24;  // rcx
    int v25;  // xmm0
    int v26;  // xmm1
    unsigned long long v27;  // r14

    uu_join::State::read_line::hcb7305c7b3d40720(&v14, a0, a1);
    v19 = *((long long *)&v14);
    if (v19 == 0x8000000000000000)
        return 0;
    if (v19 == 9223372036854775809)
    {
        v0 = *((long long *)&v15);
        v1 = uucore::util_name::h359eff083fe53467();
        v2 = v21;
        v8 = &v1;
        v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9d9dcb9885681632;
        v3 = &g_4fafb8;
        v4 = 2;
        v7 = 0;
        v5 = &v8;
        v6 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v3, v22, v21);
        v1 = &v0;
        v2 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
        v3 = &g_4fafd8;
        v4 = 2;
        v7 = 0;
        v5 = &v1;
        v6 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v3, v22, v21);
        std::process::exit::hf8c1b9d00a2a86fd(1); /* do not return */
    }
    v10 = v19;
    v13 = *((long long *)&v17);
    *((int128_t *)&v12) = *((int128_t *)&v16);
    *((int128_t *)&v11) = *((int128_t *)&v15);
    v20 = a0->field_10;
    if (v20 == a0->field_0)
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h4f57ccb5df3128b9(a0);
    v23 = a0->field_8;
    v24 = v20 * 48;
    v25 = *((int128_t *)&v10);
    v26 = (int128_t)(&v11)[8];
    *((int128_t *)(v23 + v24 + 32)) = (int128_t)(&v12)[8];
    *((void*)(v23 + v24 + 16)) = v26;
    *((void*)(v23 + v24)) = v25;
    v27 = (char *)&v20->field_0 + 1;
    a0->field_10 = v27;
    if (a2)
    {
        if (!v27)
            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
        return a0->field_8->field_10;
    }
}
